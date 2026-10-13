# Realtek IPCam SDK (RTS3903) — mechanism deep-dive

Companion to `realtek_sdk.md`. That note maps the libraries, APIs, structs and ioctl tables.
This note goes one level deeper on *how the pieces actually move data and drive the hardware*,
with decompiled evidence. Addresses are Ghidra addresses (`.so` real addr = dynsym + 0x10000;
kernel `.ko` modules carry real symbols). Labels: **[obs]** = quoted/decompiled fact, **[inf]** = deduced.

String bases used below: librtstream `PTR_s_snd_device_..._0006326c + off` ⇒ `0x50000+off`;
`PTR_LAB_00063268/00063270 + off` ⇒ code at `0x20000+off` (verified: `-0x4e04`⇒`FUN_0001b1fc`,
`+0x4048`⇒`FUN_00024048`). librtsisp `PTR_DAT_0002b4cc + off` ⇒ `0x20000+off`.

---

## Data flow at a glance

```
            SENSOR ──MIPI/DVP──► ISP (8051 MCU + ISP pipe, IQ/AE/AWB/LDC/NR)
                                   │  frames DMA'd into reserved CMA pages
                                   ▼
  /dev/video51+N  (rts_cam.ko V4L2 + rts_camera_soc.ko, vb2 dma-contig)
                                   │  QBUF gives phys addr to ISP (rtscam_soc_submit_buffer→rtscam_get_phy_addr)
                                   │  frame-done IRQ ─► complete()
  ┌────────────────────────────────┴───────────────────────────────────────────┐
  │ librtstream  (one epoll+timer loop thread on a 2-thread pthreadpool)          │
  │                                                                              │
  │  ISP unit.run (rts_isp_run@29568): v4l2 DQBUF ─► rts_av_buffer[idx]           │
  │       buffer{+0x00 vm, +0x0c PHYS, +0x58/5c/60 base vm/len/PHYS}  (NO COPY)   │
  │          │  rts_av_push_back_output_buffer_lk                                 │
  │          ▼  pipe(0x28){src,dst,queue,profile}                                 │
  │  H264 unit.run: in.phys = buf+0x0c  ──► H264EncStrmEncode(in_phys, out_buf)   │
  │                                                                              │
  │  put_buffer: refcount(buf+0x38)-- ; at 0 ─► rts_av_unit_send ⇒ re-QBUF        │
  └──────────────────────────────┬───────────────────────────────────────────────┘
                                  │ H264EncStrmEncode programs HX280 regs via
                                  │ mmap'd window (rts_reg_write_reg: *(base+reg)=val)
                                  │ EWLReserveHw ⇒ rts_wq_lock_wait (named cross-proc lock)
                                  ▼
  /dev/rtshx280enc (rts_camera_hx280enc.ko)  HWOFFSET/HWIOSIZE ioctls, IRQ
                                  │  "Slice ready IRQ" ─► complete() + SIGIO (O_ASYNC)
                                  ▼
  app: rts_av_poll ─► rts_av_recv (pipe_pop) ─► Annex-B NAL ─► fshare_write

  Control plane (parallel):
  rts_av_set_isp_ctrl ─┬─ CID 1..45  ─► rts_v4l2_set_ctrl (VIDIOC_S_CTRL 0xc008561c)
                       └─ ID 39..54  ─► librtsisp ISP cmd
  rts_isp_exec_isp_cmd ─► ioctl(/dev/rtscamctrl, 0xc0087201,{code=0xc0107331,&cmd12})
       ─► rts_camera_soc FUN_0001171c (lock,"soc exec command") ─► FUN_0001134c
             writes reg0x44=param:addr, reg0x40=cmd<<16|idx<<8|len (KICK),
             polls status reg0x48 (bit31 busy / bit30 err), wait_for_completion_timeout
```

---

## 1. The unit / channel / pipe / stream engine (librtstream)

### 1.1 Object model & the 100-byte unit descriptor
Media elements are *units* (100-byte descriptor, callback table at +0x20..+0x5c; see `realtek_sdk.md §2.1`).
A *channel* is a 0x18-byte record `{+0x00 chn_no, +0x04 unit*, +0x10/+0x14 list-node}`.
A *pipe* is a 0x28-byte record `{+0x00 src_unit, +0x04 dst_unit, +0x08 queue, +0x0c.. profile}`.
A *stream* is a 0x58-byte record with three queues + an epoll loop + a 2-thread pool.

### 1.2 Channel creation — `__create_chn @ 0x21730` [obs]
```c
if (param_1 == 0x707369 /*'isp'*/) {                       // ISP: validate node, chn_no = isp_id
    iVar2 = rts_isp_v4l2_open(*(attr+4));  rts_isp_v4l2_close(iVar2);
    uVar6 = *(uint *)(param_2 + 4);                        // channel number = isp_id
} else { /* osd2/osd=30, h264=10, mjpg=20, else 100; then next-free scan of chn list */ }
puVar4 = __rts_calloc(1,0x18,...);                         // 0x18-byte channel record
*puVar4 = uVar6;                                           // [0]=chn_no
uVar6 = rts_av_new_unit(param_1,param_2);  puVar4[1]=unit; // [1]=unit
if (chnlist == &DAT+0x3c30) rts_av_apply(*(DAT+0x3c38));   // FIRST channel ⇒ build the stream
/* insert into the per-number-sorted channel list at DAT+0x3c30 */
```
So the first `rts_av_create_*_chn` triggers stream creation via `rts_av_apply`.

### 1.3 Stream/loop/thread-pool creation — `rts_av_apply @ 0x244dc`, `rts_av_new_stream @ 0x241dc` [obs]
```c
// rts_av_apply
iVar2 = rts_pthreadpool_init(2);          param_1[6] = iVar2;     // TWO worker threads
rts_pthreadpool_add_task(iVar2, 0x24048 /*FUN_00024048*/, param_1, 0);  // long-lived loop task
// rts_av_new_stream  (0x58 bytes)
puVar2[3]=queue; puVar2[4]=queue; puVar2[5]=queue;
puVar2[7] = rts_av_loop_open(10);         // epoll loop, 10 fd budget
puVar2[8]=0x23e60; puVar2[9]=stream; puVar2[10]=10;  rts_av_add_task(loop, puVar2+8); // 10ms task
```
`rts_av_loop_open @ 0x1f860` [obs]: `epoll_create(1)`, set CLOEXEC, loop object 0x20 bytes
`{[0]=epfd,[1]=count,[2..5]=two list heads (fds,tasks),[6]=timeout_ms=100}`.

### 1.4 THE threading model — one epoll+timer loop thread + pool workers [obs]
`rts_av_loop_run_lk @ 0x2057c` is the loop body (run as a pool task via `FUN_00024048`):
```c
param_1[7] = syscall(0x107e);             // SYS_gettid (MIPS 4222) → loop thread id
while (param_1[1] != 0) {                 // running flag
    now = rts_get_monotonic_raw_time();
    /* walk the TIMER-TASK list (param_1[4]); fire each whose remaining<=0, compute next deadline */
    iVar4 = epoll_wait(*param_1, events, 3, iVar4 /*= next task deadline ms*/);
    for (i=0;i<iVar4;i++) {               // dispatch ready HW fds
        h = events[i].data; flags = EPOLLIN?1:0 | EPOLLHUP?2:0;
        (*(code *)*h)(h, flags);          // fd handler (sigio/epoll units: H1/JPEG/OSD)
    }
}
```
The 10 ms periodic task `FUN_00023e60` iterates the stream's unit queue and calls
`rts_av_keep_unit_active` on each — this is the heartbeat that keeps source units pulling.

### 1.5 How a unit's `run` cb (+0x3c) is actually invoked [obs]
A trigger does **not** call `run` inline; it enqueues a pool task.
`rts_av_trigger_unit @ 0x1dda8` → `rts_av_run_unit @ 0x1c6f8`:
```c
rts_av_check_unit_is_runnable(unit);
puVar3 = __rts_calloc(1,8,...);  *puVar3=unit; puVar3[1]=unit->+0x158;
unit->+0x88 ++;                                   // pending-task count
rts_pthreadpool_add_task(unit->+0xd4 /*pool*/, 0x1b1fc /*worker*/, puVar3, free_fn);
```
The pool worker `FUN_0001b1fc @ 0x1b1fc` runs the cb and times it:
```c
unit->+0x140 ++;                                  // run-cb call count
t0 = rts_get_monotonic_raw_time();
iVar3 = (**(code **)(puVar8 + 0x3c))(puVar8);     // ◄── the unit's run() callback
dt = rts_get_monotonic_raw_time() - t0;
limit = unit->+0x10 ? unit->+0x10*1000000 : 40000000;   // default 40 ms budget
if (dt>limit || (IS_ERR(iVar3) && iVar3!=-EAGAIN)) rts_log(...);
```
**Conclusion:** *one* epoll+timer loop thread per stream drives scheduling; unit `run` callbacks
execute as short tasks on the shared 2-thread pool; HW-completion fds (H1/JPEG/OSD) are serviced
directly in the loop thread's `epoll_wait`. Not per-unit threads, not pure sigio.

### 1.6 Enable — `rts_av_enable_chn @ 0x222bc` → `rts_av_enable_unit @ 0x1e1d8` [obs]
```c
if (unit->+0x28 /*alloc_buffer*/) (*(unit+0x28))(unit);    // allocate output buffers
unit->+0x128 = 1;                                           // enabled
...
if (unit->+0x2c /*start*/) (**(unit+0x2c))(unit);           // ◄── unit start() callback
if (unit->+0x78 && unit->+0x100>=0 && unit->+0x104) {       // unit exposes a HW fd?
    loop = rts_av_get_stream_loop();
    unit->+0xfc = 0x1dd10 /*fd handler*/; unit->+0x108 = unit;
    rts_av_add_poll_fd(loop, unit+0xfc);                    // register HW fd into epoll loop
}
```

### 1.7 Wiring — `rts_av_bind / rts_av_connect / rts_av_new_pipe` [obs]
`rts_av_bind @ 0x22504`: looks up both channels, then
`rts_av_connect(stream, src->unit, dst->unit)`.
`rts_av_connect @ 0x248cc`: if no pipe exists, `rts_av_new_pipe(src,dst)` then `rts_queue_add` to the
stream pipe registry. `rts_av_new_pipe @ 0x25c68` allocs 0x28 bytes, `rts_queue_init` the buffer
queue, `rts_av_unit_plug(src, pipe, 1 /*output*/)` and `rts_av_unit_plug(dst, pipe, 0 /*input*/)`,
copying the producer's profile into the pipe (`rts_av_get_unit_profile`).
`rts_av_start_recv @ 0x229fc` creates a half-open pipe `rts_av_new_pipe(unit, 0)` stored at `chn+0xc`
— the application drains it with `rts_av_recv`.

---

## 2. Buffer lifecycle & zero-copy

### 2.1 Buffer object (0x98 bytes) and allocation — `rts_av_new_buffer @ 0x261d8` [obs]
```c
iVar2 = __rts_calloc(1,0x98,...);
if (size == 0) iVar2->+0x3c = 1;                  // EXTERNAL buffer (wraps DMA mem, no vm alloc)
else { iVar2->+0x58 = calloc(size);               // SW buffer: base vm
       iVar2->+0x5c = size; iVar2->+0x60 = 0;     // base len, base phys(=0)
       iVar2->+0x64 = 1; rts_av_set_buffer_offset(iVar2,0); }
iVar2->+0x70/74 = monotonic_time();  pthread_mutex_init(iVar2+0x40,0);
```
`rts_av_init_buffer @ 0x262f0` attaches external DMA memory to a `+0x3c==1` buffer:
`+0x58=vm, +0x5c=len, +0x60=phys, +0x64=1`.

### 2.2 The vm/phys projection — `rts_av_set_buffer_offset @ 0x26168` [obs]  *(this IS zero-copy)*
```c
b[1] /*+0x04 length*/ = b[0x17]/*base len*/ - off;
b[0] /*+0x00 vm_addr*/ = b[0x16]/*base vm*/ + off;
b[3] /*+0x0c phy_addr*/ = (b[0x18]/*base phys*/==0) ? 0 : off + b[0x18];
```
The working `vm_addr(+0x00)` and `phy_addr(+0x0c)` are just a base+offset view of the same physical
memory. The encoder consumes `+0x0c` as the DMA source; the CPU can touch `+0x00` — same bytes, no copy.

### 2.3 Refcount recycle — `rts_av_get_buffer @ 0x26030` / `rts_av_put_buffer @ 0x2609c` [obs]
```c
// get: refcount++
mutex_lock(b+0x40); b->+0x38 ++; mutex_unlock(b+0x40);
// put: refcount--; at zero, run release cb and hand the buffer BACK to its producing unit
mutex_lock(b+0x40); if (b->+0x38) { n = --b->+0x38; last = (n==0); } mutex_unlock(b+0x40);
if (last) {
    if (b->+0x6c /*release cb*/) (*(b+0x6c))(b->+0x68, b);
    if (b->+0x90 /*owner unit/pipe*/) rts_av_unit_send(b->+0x90);   // ◄── re-QBUF to source
}
```
This closes the loop: when the app `put_buffer`s a V4L2-backed frame, refcount hits 0 and the buffer is
returned to the ISP unit for re-queue — the DMA page is reused, never freed per-frame.

### 2.4 `rts_av_recv @ 0x22d90` [obs]: `rts_av_pipe_pop(chn->+0xc)` pops one buffer off the recv pipe.

### 2.5 Where DMA memory & physical addresses come from
**User DMA allocator** — `rts_isp_mem_alloc @ librtsisp 0x141ac` [obs]:
```c
ioctl(fd, 0xc0147338, &s);                 // s = {size, mmap_off, phy, _, flags}
*param2 = mmap(0, s.size, PROT_RW, MAP_SHARED, fd, s.mmap_off);  // ◄── vm
param2[1]=s.size; param2[2]=s.phy;         // keep size & physical addr
```
`rts_isp_mem_open @ 0x14160` opens `/dev/rtsmem`. Free = ioctl `0x80047339`.

**Kernel side** — `rts_cam_mem.ko`:
`rtscam_mem_alloc @ 0x11964` [obs] carves the reserved region (page block-list walk,
`pages = (size+0xfff)>>12`) and returns `phys = dev->resvd_base(+4) + page_index*0x1000`.
`rtscam_mem_mmap @ 0x12ea8` [obs] maps it with `remap_pfn_range(vma, start, base_pfn+off, len, prot)`.
Because the region is physically contiguous reserved RAM, every allocation is DMA-contig and the
user mapping sits directly on the physical pages — hence a user `vm` and an ISP/encoder `phys`
describe the same bytes.

---

## 3. ISP command path, end to end

### 3.1 User entry — `rts_av_set_isp_ctrl @ librtstream 0x2b724` [obs]
```c
if (id-1 < 0x2d && cid_table[id-1]) {                   // IDs 1..45 ⇒ V4L2 CID
    local_68 = cid_table[id-1]; local_64 = ctrl->+0x34 /*value*/;
    rts_v4l2_set_ctrl(ctrlfd, &{cid,value});            // ◄── path A (CID table @ 0x4c650)
} else if (id==0x15||id==0x16) { /* flip/mirror raw 0x98f900 bitfield */ }
else if (id-0x27 < 0x10) {                              // IDs 39..54
    jump_table_0x4c610[id-0x27](ctrlfd, ...);           // ◄── path B: librtsisp ISP cmd
}
```

### 3.2 ISP MCU mailbox call — `__rts_isp_exec_isp_cmd @ librtsisp 0x17490` [obs]
Builds the 12-byte command struct exactly as documented and sends it:
```c
local_18=cmd(u16); local_16=index(u8); local_15=len(u8);
local_14=param(u16); local_12=addr(u16); local_10=buf(ptr);   // {u16;u8;u8;u16;u16;void*} = 12B
rts_exec_vendor_cmd(fd, 0xc0107331, &local_18);
```
`rts_exec_vendor_cmd @ 0x140b4` [obs] wraps it in the outer vendor ioctl:
```c
local_10 = 0xc0107331 /*inner code*/; local_c = &cmd12;
ioctl(fd, 0xc0087201, &local_10);        // _IOWR('r',1,{u32 code; void* arg}) on /dev/rtscamctrl
```
(`rts_isp_ctrl_open @ 0x13edc` opens `/dev/rtscamctrl` with flags 0x82.)

### 3.3 Kernel dispatch — `rts_camera_soc.ko` [obs]
`rtscam_soc_exec_vcmd @ 0x10254` → `rtscam_usercopy(file, code, arg, FUN_00014f88)`;
the dispatcher `FUN_00014f88` routes inner code `0xc0107331` to the MCU exec wrapper
`FUN_0001171c @ 0x1171c`:
```c
mutex_lock(dev+0x2c);
if (debug&0x4000) printk("soc exec command %04x %02x %02x %04x %04x",
                         cmd->[0], cmd->byte[2], cmd->byte[3], cmd->[2], cmd->[3]);
iVar1 = FUN_0001134c(dev, cmd, dev->+0x334 /*timeout*/);
mutex_unlock(dev+0x2c);
if (iVar1) printk("MCU is busy now.(0x%08x), cmd(0x%04x) fail", ...);   // _LC45
```

### 3.4 Register-level MCU transaction — `FUN_0001134c @ 0x1134c` [obs]
```c
get = (cmd[0] & 0x80);                             // bit7 of low byte ⇒ GET/read
/* validate len against dev->regcount (get:+0x10, set:+0x0c) */
for (i=300; i; i--) { if (ioread32(base+0x48) >= 0) break; usleep_range(~9900ns,10000); }  // BUSY wait
if (busy_timed_out) printk("MCU is busy now..."/exec cmd timeout);
if (!get) for each 4 bytes of payload: iowrite32(word, data_reg_offset(i));  // SET writes XMEM
FUN_000110e0(regs, (param<<16)|addr, 0x44);                     // reg 0x44 = param:addr
FUN_000110e0(regs, (cmd<<16)|(index<<8)|len, 0x40);             // reg 0x40 = COMMAND (the KICK)
dev->+0x20 = 0; init_waitqueue_head(dev+0x24);
wait_for_completion_timeout(dev+0x20, timeout_ms);              // MCU IRQ calls complete()
status = ioread32(base+0x48);
if (status & (1<<30)) { cmd->[6] = (status>>16)&0xff; return -EINVAL; }  // error bit
if (get) for each 4 bytes: *(cmd->buf+i) = ioread32(data_reg(i)); // read XMEM back
```
(`FUN_000110e0 @ 0x110e0`: `iowrite32(val, base+reg)`.) So: command reg **0x40** (`cmd|index|len`)
kicks the 8051, param/addr reg **0x44**, status reg **0x48** (bit31 busy, bit30 error, bits16-23 err code);
completion is IRQ-driven (`wait_for_completion_timeout`), matching the kernel strings
"soc exec command…", "MCU is busy now…", "exec cmd(0x%04x) timeout".

### 3.5 V4L2 control alternative [obs]
Standard controls take the CID branch (§3.1 path A): `rts_v4l2_set_ctrl` issues
`ioctl(ctrlfd, 0xc008561c /*VIDIOC_S_CTRL*/, {id,value})` (librtsv4l2 @ line 893);
`rts_v4l2_set_ext_ctrls` uses `0xc0cc5616 /*S_EXT_CTRLS*/`. Inside `rts_camera_soc.ko` the control
descriptors are resolved by `rtscam_soc_get_ctrl @ 0x1013c` / `rtscam_soc_query_ctrl` and the
set path ultimately issues the same MCU transaction (§3.4) or an ISP-function write
(`rtscam_soc_set_isp_func @ 0x14500`). Net: both the CID path and the vendor-cmd path converge on
the MCU mailbox; the CID path is just a V4L2-shaped front door.

---

## 4. Capture datapath: sensor → app

1. **Open** `rts_isp_v4l2_open @ librtsisp 0x13dd0` [obs]: `snprintf("/dev/video%d", id+0x33)` →
   `/dev/video{51+isp_id}`, `rts_v4l2_open(path, 0x82)`.
2. **REQBUFS + buffer wrap** `req_v4l2_buffers @ librtstream 0x27b74` [obs] — the heart of zero-copy capture:
   ```c
   n = rts_v4l2_request_bufs(fd, count);                 // VIDIOC_REQBUFS 0xc0145608
   for (i=0;i<n;i++) {
       rts_v4l2_query_mmap_buf(fd, i, &vm, &len);         // QUERYBUF + mmap  ⇒ user vm, length
       phys = rts_isp_get_video_phy_addr(fd, vm);         // ioctl 0xc0047202 ⇒ DMA phys
       rts_av_init_buffer(buf[i], vm, len, phys);         // persistent wrapper, base vm/len/phys
   }
   ```
   `rts_isp_get_video_phy_addr @ 0x15dd8` [obs]: `ioctl(fd, 0xc0047202, &vm); return phys`.
3. **STREAMON / QBUF** — ISP source unit start `rts_isp_start @ librtstream 0x293c8` [obs]:
   `alloc_buffer cb` → `rts_v4l2_streamon(fd)` (VIDIOC_STREAMON). QBUF (`rts_v4l2_put_buffer_by_index`,
   VIDIOC_QBUF `0xc0445609`) hands a buffer index back to the queue. In kernel,
   `rtscam_soc_submit_buffer @ 0x119e0` [obs] takes the QBUF, calls `rtscam_get_phy_addr` and installs
   the physical address into the ISP's per-stream buffer ring, so the ISP DMAs the next frame there.
4. **DQBUF → rts_av_buffer** — ISP run cb `rts_isp_run @ librtstream 0x29568` [obs]:
   ```c
   if (rts_v4l2_pollin(fd,0)) {
       rts_v4l2_get_buffer(fd, &idx /*local_60*/);        // VIDIOC_DQBUF 0xc044560f
       b = ctx[idx+10];                                   // persistent wrapper for this index
       b->+0x14=idx; b->+0x08=bytesused; b->+0x28=timestamp;
       update_v4l2_profile(fd, ...);
       rts_av_push_back_output_buffer_lk(unit, b);        // ◄── into output pipe(s) → downstream
   }
   ```
5. **IRQ → buffer-done → DQBUF** [obs]: the SoC ISR `FUN_00012e7c @ rts_camera_soc.ko 0x12e7c`
   (`devm_request_threaded_irq(..., "rts_soc_camera")`) reads the HW IRQ-status register `0x508`; bit0
   `complete()`s the MCU-mailbox waiter (§3.4), and the per-channel frame-complete branch calls
   `rtscam_buffer_done @ rts_cam.ko 0x132e0` → sets bytesused/sequence/timestamp, state=DONE and
   `vb2_buffer_done(vb, 4)`, which wakes the vb2 done-queue so a blocked `VIDIOC_DQBUF` returns the
   frame; `rtscam_submit_buffer @ 0x13060` then re-arms the DMA with the next queued buffer. (Kernel
   logs include "motion detected %d" from the ISP IRQ when MD is on — diagnostic, not on this path.)

---

## 5. H.264 encode submission (libh1encoder + rts_camera_hx280enc.ko)

### 5.1 The encode call — H264 unit run cb (contains `H264EncStrmEncode @ librtstream line 25733`) [obs]
```c
in = unit->+0x1e8;                                   // input rts_av_buffer (the DQBUF'd NV12 frame)
unit->+0x13c = in->+0x0c;                            // ◄── luma BUS address = capture buffer PHYS
unit->+0x140 = luma_phys + w*h;                      // NV12 chroma plane (second plane)
rts_av_set_buffer_offset(out, 0x40);                 // reserve 64 B header room in output
unit->+0x14c = out->+0x00; unit->+0x150 = out->+0x0c;// output vm + output PHYS
H264EncStrmEncode(unit->+0xe0 /*enc inst*/, unit+0x13c /*in desc*/, unit+0x16c /*out desc*/, 0,0);
```
The encoder input is the capture frame's physical address verbatim — no bounce buffer.

### 5.2 EWL register window — `rts_reg_h264_open @ librtsisp 0x14fc4` [obs]
```c
fd = open("/dev/rtshx280enc", 0x82);
ioctl(fd, 0x40046803, &off);    // _IOR('h',3) HX280ENC_IOCGHWOFFSET
ioctl(fd, 0x40046804, &size);   // _IOR('h',4) HX280ENC_IOCGHWIOSIZE
base = mmap(off, size);         // register window
handle = {fd, off, size, base, self};
```
`rts_reg_write_reg @ 0x1569c` [obs] is plain MMIO: `*(handle->base[3] + (reg & ~3)) = value`
(bounds-checked against size). `H264EncStrmEncode` builds the HX280 register image (input bus addrs,
output buffer, stride, QP/rate-ctrl, SPS/PPS SEI) and writes the frame-start register to kick the ASIC.

### 5.3 Arbitration + wait + ack [obs]
- `EWLReserveHw @ libh1encoder 0x17e04` calls `rts_wq_lock_wait` before touching registers (see §6).
- Completion is SIGIO or epoll:
  `rts_reg_handle_sigio @ librtsisp 0x16498` [obs]:
  ```c
  tid = syscall(0x107e /*gettid*/);
  if(first) sigaction(0x16 /*SIGIO*/, handler, 0);
  fcntl(fd, 0x18 /*F_SETOWN*/, tid);            // IRQ → SIGIO delivered to this thread
  fl = fcntl(fd,3); fcntl(fd,4,2); fcntl(fd,4, fl|0x1000 /*O_ASYNC*/);  // enable async notify
  ```
  Alternatively `h264_ewl_set_epoll_hook` registers the fd into the av loop's `epoll_wait` (§1.4),
  which is why `enable_unit` adds the unit's HW fd as a poll fd.
- `rts_reg_h264_done @ 0x16378` [obs]: `ioctl(fd, 0x20006809)` — ack/release the HW (clear IRQ).
- Kernel `rts_camera_hx280enc.ko`: probe does `devm_ioremap_resource` (regs) +
  `devm_request_threaded_irq`; the ISR logs "Slice ready IRQ handled!" and calls `complete()`/fasync.
  Open/close gate HW reset & clock by refcount (`FUN_00010a20`/`FUN_00010988` → `FUN_000103fc`
  which calls `rts_sys_force_reset`).

### 5.4 Register programming, kick, wait & readout — resolved detail [obs]
The EWL body (duplicated: unrelocated `0x1xxxx` garbage vs real relocated `0x2xxxx`) does resolve:
- **Kick** `EncAsicFrameStart @ 0x15a2c`: input luma/chroma + output-stream base addresses go into a
  register *mirror* by symbolic ID (`EncAsicSetRegisterValue @ 0x14ef0`; IDs `0x2f..0x33` = plane/stream
  bases, ID `99`=`0x63` = output size), the mirror is flushed to the mmap'd window with `EWLWriteReg`
  loops, then **control register byte-offset `0x38`, bit0 = GO** is set and `EWLEnableHW @ 0x27910`
  writes it — this starts the ASIC. `EWLReserveHw @ 0x27e04` first clears reg `0x38`. Coherency:
  `rts_isp_mem_sync_device(out)` before the kick, `rts_isp_mem_sync_cpu(out)` after.
- **Wait** `EWLWaitHwRdy @ 0x2812c`: three paths by ctx state — epoll hook (`ctx[0x68]` → condvar,
  woken by `H264EncMakeRdy`/`h264_ewl_make_rdy @ 0x28064`), SIGIO (`sigtimedwait(SIGIO=22)`), or poll of
  **status register byte-offset `0x04`** against mask `0x1fc`. `EncAsicCheckStatus_V2 @ 0x1557c`: bit
  `0x40`=frame ready, `0x4`=slice ready, `0x20`=bus error, `0x10`=HW timeout.
- **Readout** `EncAsicGetRegisters @ 0x188a4`: **encoded size = reg `0x63` (bits) >> 3** bytes; the
  Annex-B bytes are read from the output DMA buffer (`pOutBuf`, phys `busOutBuf`) after the CPU sync.
- **Kernel** `rtscam_hx280_probe @ 0x104dc` confirms it: `devm_ioremap_resource` makes `res->start`/size
  the HWOFFSET/HWIOSIZE values, reg#0 is the HW ID (`id>>16 ∈ {0x6280,0x8270,0x8290,0x4831}`), and it
  clears control reg `0x38`. The ISR body (`LAB_000102d4`) is not emitted by Ghidra [opaque]; from its
  imports/strings (`rtscam_ge_kill_fasync`, `__wake_up`, "Slice ready IRQ handled!") it reads status reg
  `0x04`, wakes `alarm_wq` and sends SIGIO [inf].

---

## 6. HW arbitration & clocks

### 6.1 Named cross-process locks — `rts_cam_lock.ko` via `/dev/rtslock` [obs]
User side (librtsisp): `rts_wq_lock_init @ 0x15e7c` opens `/dev/rtslock`, `ioctl(0x80086c03, {num,name})`;
`rts_wq_lock_wait @ 0x16084` = `ioctl(0x80046c04, id)`; `rts_wq_lock_post @ 0x160ac` = `ioctl(0x80046c05)`.
Kernel `rtscam_wait @ 0x10b98` [obs] implements a **counting semaphore** with completion-based waiters:
```c
count = ++lock->+0xc;
if (count > lock->+0x1c /*permit limit*/) {         // over capacity ⇒ block
    w = vzalloc(0x14); init_waitqueue_head(w+3); /* link w into lock->+0x4 list */
    mutex_unlock; wait_for_completion(w+2); mutex_lock; vfree(w);
}
```
`rtscam_post @ 0x10bac` [obs] pops one waiter and `complete(w+2)`, decrementing the count.
Each `lock->+0x1c` permit-limit defaults to 1 (`rtscam_init_wait_queue`), i.e. a *named mutex*; a
cosmetic 15-byte name is set via `ioctl 0x80146c06`.

**Who locks what** — the lock is acquired only by the three fixed-function encoder EWLs, each serializing
its single shared HW instance across channels/processes by a hard-coded numeric lock id [obs]:

| Block | EWL (reserve→wait / release→post) | Lock id | Evidence |
|---|---|---|---|
| H.264 HX280/H1 | `EWLReserveHw @ libh1encoder 0x27e04` → `rts_wq_lock_wait` | *(GP-opaque)* | callgraph: `EWLInit→rts_wq_lock_allocation/set_name` |
| MJPEG | `ewl_reserve_hw @ librtsjpeg 0x115bc` | **`0x3901`** | `ewl_init`: `rts_wq_lock_allocation(0x3901)` + `set_name`, stored ctx+8 |
| OSD2 | `osd2_ewl_reserve_hw @ librtsosd2 0x15238` | **`0x831`** | `osd2_ewl_init`: `rts_wq_lock_allocation(0x831)`, stored ctx+4 |

After taking the lock, `reserve` writes the block's "enable" register and `release` writes "disable"
then posts. The ISP MCU mailbox is NOT arbitrated by `/dev/rtslock`; it is serialized by a kernel
`mutex` (dev+0x2c in `FUN_0001171c`, §3.3). So: *per-process* MCU access is mutex-serialized in the
driver, while *cross-process* contention on each encoder/OSD HW block is arbitrated by its
`/dev/rtslock` named lock (the H.264 lock id is unreadable because the libh1encoder EWL bodies are
`$gp`-relative and Ghidra left the constant unresolved).

### 6.2 Clock / power gating [obs]
`rts_camera_soc.ko`: a use-count (dev+0xa8) is bumped when the control channel is used; `FUN_000101c0`
decrements it and, on the last ref, calls `rtscam_soc_stop_clock @ 0x10110`. `rtscam_soc_start_clock
@ 0x100e4` → `FUN_000100b4` invokes `dev->clk_ops->enable` (callback `*(dev+0x32c)+8`); failure logs
"enable mcu clk fail" / "isp clk callback isn't set". This is NOT the Linux clk framework — it is a
board-supplied callback table (`dev+0x40` in the encoder, `dev+0x32c` in soc); no `clk_prepare_enable`
or regulator symbols appear in any module.

The hx280 encoder module gates its own clock/reset by open/close refcount (`FUN_00010a20` get 0→1 /
`FUN_00010988` put 1→0, under `mutex dev+0x1c`, refcount at dev+0x14), both calling `FUN_000103fc @
0x103fc` [obs]:
```c
if (enable && dev->+0x18 != 1) { rts_sys_force_reset(1); __udelay(1);
    (**(dev+0x40))(1, *(dev+0x40)+1);  dev->+0x18=1; printk("enable h264 clock"); }   // _LC6
else if (!enable && dev->+0x18) {
    (**(dev+0x40))(0,0);               dev->+0x18=0; printk("disable h264 clock"); }   // _LC7
```
A `rts_sys_force_reset(1)` pulse precedes clock-enable. Net: MCU/ISP clock is enabled on first use and
dropped when idle; the H1 encoder block is reset-pulsed + clocked only while ≥1 process holds
`/dev/rtshx280enc` open. `rts_camera_jpgenc.ko` uses the identical pattern.

---

## 7. Annotated bring-up of the 1080p pipeline in rmm

`init_main_stream = FUN_0040b2ac @ rmm 0x40b2ac` [obs]. Resolution/bitrate come from
`FUN_0040b144` (reads `/sys/devices/platform/rts_soc_camera/sensor` → `{isp_id,w,h,fps,bps,rot}`):
`SC1245`→1280×720 bps 0xc8000; `SC2235/SC2230/SC2232`→1920×1080 @20, bps 0x133333, isp_id 0, rot 0.
On failure it falls back to the config byte at `DAT_004778ac+0x1fa` ('1'→1080p, '2'→720p), which is the
identical no-sensor table. Values for the 1080p profile:

```c
rts_av_init();
// model '1': width=0x780(1920) height=0x438(1080) fps=0x14(20) bps=0x133333(1258291)
struct isp_attr {3 /*buf_num*/, 0 /*isp_id*/};  isp = rts_av_create_isp_chn(&a);     // chn 0, /dev/video51
rts_av_set_profile(isp, {fmt=1/*NV12*/, 1920, 1080, num=1, den=20});
osd = rts_av_create_osd_chn();                                                        // created, not bound
struct h264_attr {level=12, qp=-1, bps=1258291, gop=40 /*fps*2*/, rot=0, 0};
h264 = rts_av_create_h264_chn(&a);                                                    // chn 10
mjpg = rts_av_create_mjpeg_chn({rot=0});                                              // chn 20
rts_av_set_profile(mjpg, {1, 1920, 1080, 1, 20});
rts_av_bind(isp, h264);                                                               // isp → h264 DIRECT
rts_av_query_h264_ctrl(h264, &c); rts_av_get_h264_ctrl(c);
c->+0x04 = 8;            // bitrate_mode = CVBR
c->+0x0c = 0x133333;     // max_bitrate = 1258291
c->+0x10 = 0xc8000;      // min_bitrate = 819200
fwrite("set H264 to CVBR mode.\n"); rts_av_set_h264_ctrl(c); rts_av_release_h264_ctrl(c);
rts_av_enable_chn(isp); rts_av_enable_chn(h264); rts_av_enable_chn(mjpg);
rts_av_start_recv(h264); rts_av_start_send(mjpg); rts_av_start_recv(mjpg);
// store chn ids in globals (DAT_00437304=isp,308=h264,30c=mjpg,310=osd)
pthread_create(&t, 0, LAB_004090c0, &DAT_004372fc);       // spawn media_rtl_get_videostream(stream 0)
/* then init_sub_stream (inlined): isp_id=1, 640x360@20, h264 bps=0x4b000, CVBR max 0x80000/min 0x40000, qp=0x2a */
FUN_0040b0f8(); ioctl(DAT_00477968, 0x20007015, 0);        // final ISP start
```
Observations: the OSD channel is created but never `rts_av_bind`-ed in the main path (confirms the
OSD stage is passive in this build); rmm binds `isp→h264` directly (no OSD interposed), unlike xy_stream.

### 7.1 Frame pull loop — `media_rtl_get_videostream = FUN_00408cbc @ 0x408cbc` [obs]
```c
for (;;) {
    pthread_mutex_lock(m);
    if (rts_av_poll(h264) || rts_av_recv(h264,&b) || !b) { unlock; ms_sleep(5); continue; }
    ts_mono = FUN_00414718(); ts_wall = time(0);
    vm = b->+0x00; used = b->+0x08; key = b->+0x10 & 1;
    if (!key) {                                   // P-frame: write whole NAL
        FUN_00402580(vm, &hdr);                   //   fshare_write(payload)
    } else {                                      // IDR: split SPS/PPS/IDR
        FUN_0040825c(vm, used, &nals);            //   NAL parser → sps/pps/idr ptrs
        FUN_00402580(sps,&hdr/*type 0x20000*/); FUN_00402580(pps,&hdr/*0x40000*/);
        FUN_00402580(idr,&hdr/*0x10000*/);
        if (need_key) rts_av_request_h264_key_frame(h264);
    }
    rts_av_put_buffer(b);                          // refcount-- → re-QBUF (§2.3)
    pthread_mutex_unlock(m);
}
```
`FUN_00402580` is rmm's `fshare_write` wrapper (the shared-memory ring / IPC side is documented
elsewhere — the SDK-relevant chain ends at `put_buffer`/re-QBUF).

---

## 8. What stays opaque

- **libh1encoder / librtsjpeg / librtsosd2 EWL interiors**: the H.264 control registers *were* recovered
  (§5.4: GO = control reg `0x38` bit0, status reg `0x04`, output size = reg `0x63`>>3, base-addr IDs
  `0x2f..0x33`), but the *byte offsets* behind those symbolic IDs live in a descriptor table that stays
  opaque, and the JPEG/OSD register maps were not chased beyond HWOFFSET/HWIOSIZE/done. The HX280 ISR
  body (`LAB_000102d4`) is not emitted by Ghidra; its status-reg read + wake + fasync is inferred from
  imports/strings. [obs/inf]
- **librtsaec / libaacenc**: RLX DSP code, undecodable (as in `realtek_sdk.md §8`). No new findings.
- **rts_cam.ko vb2 glue**: the frame-done path *is* resolved (§4.5: ISR `FUN_00012e7c` status reg
  `0x508` → `rtscam_buffer_done` → `vb2_buffer_done`; buffers are vb2 **dma-contig**, memory model
  **MMAP**, phys via ioctl `0xc0047202` → `rtscam_convert_addr_from_vm_to_phy`); `queue_setup`
  (`rtscam_queue_setup @ 0x11e2c`, 2..16 bufs) is seen, but the full `buf_prepare`/`buf_finish` field
  handling was not exhaustively decompiled. [obs/inf]
- **V4L2 S_CTRL inner forwarding**: confirmed the controls resolve through
  `rtscam_soc_get_ctrl`/`query_ctrl` and converge on the MCU mailbox, but the precise subdev op that
  translates each CID to an MCU command was not traced field-by-field. [inf]
```
