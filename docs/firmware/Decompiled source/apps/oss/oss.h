/* oss — recovered function prototypes
 * Continuous-recording uploader to object storage (static libcurl + CyaSSL)
 * Auto-generated from the Ghidra decompilation; types are Ghidra's.
 */
#ifndef OSS_H
#define OSS_H
#include "../../include/decomp_types.h"

/* Unnamed FUN_<addr> functions are omitted here; they are defined
 * in _unnamed.c. Only recovered/known names are declared below. */

/* ---- entry / init ---- */
int _init(EVP_PKEY_CTX *ctx);  /* @ 00408148 */
void _ftext(void);  /* @ 00408190 */
undefined4 main(undefined4 param_1,int *param_2);  /* @ 004088f0 */
void _fini(void);  /* @ 00531690 */
void abort(void);  /* @ 0054ec60 */

/* ---- aos ---- */
int aos_init_curl_url(int *param_1);  /* @ 00408450 */
void aos_buf_pack(undefined4 param_1,int param_2,int param_3);  /* @ 0041627c */
undefined4 * aos_http_controller_create(int param_1,byte param_2);  /* @ 00416730 */
undefined4 aos_http_io_initialize(char *param_1,uint param_2);  /* @ 00416944 */
void aos_http_io_deinitialize(void);  /* @ 00416bf0 */
void aos_log_set_level(undefined4 param_1);  /* @ 00416ef4 */
void aos_log_set_output(undefined4 param_1);  /* @ 00416f00 */
int aos_curl_default_read_callback(undefined4 param_1,int param_2,int param_3,int *param_4);  /* @ 00416f0c */
void aos_curl_transport_headers_done(int param_1);  /* @ 0041703c */
undefined4 aos_parse_xml_body(int *param_1,undefined4 *param_2,int *param_3);  /* @ 004187a8 */
int aos_get_gmt_str_time(undefined4 param_1);  /* @ 004189f0 */
undefined4 aos_query_params_to_string(undefined4 param_1,undefined4 param_2,int *param_3);  /* @ 00418c7c */

/* ---- apr ---- */
undefined4 apr_md5_init(undefined4 *param_1);  /* @ 00442534 */
void apr_md5_update(void);  /* @ 00442578 */
undefined4 apr_md5_final(undefined4 param_1,int param_2);  /* @ 00442584 */
void apr_sha1_init(undefined4 *param_1);  /* @ 004438e8 */
void apr_sha1_final(undefined1 *param_1,int param_2);  /* @ 00443b8c */
int apr_queue_create(int *param_1,int param_2,undefined4 param_3);  /* @ 00443d8c */
int apr_queue_push(int *param_1,undefined4 param_2);  /* @ 00443e80 */
int apr_queue_pop(int *param_1,undefined4 *param_2);  /* @ 00443fe4 */
int apr_queue_trypop(int *param_1,undefined4 *param_2);  /* @ 00444140 */
int apr_thread_pool_create(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4);  /* @ 00444f04 */
void apr_thread_pool_push(void);  /* @ 00445190 */
int apr_snprintf(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 004474d8 */
int apr_pstrndup(undefined4 param_1,int param_2,int param_3);  /* @ 0044756c */
undefined4 apr_pstrdup(undefined4 param_1,int param_2);  /* @ 00447630 */
undefined4 * apr_array_make(undefined4 param_1,int param_2,int param_3);  /* @ 00447cc0 */
int apr_array_pop(int param_1);  /* @ 00447d58 */
int apr_array_push(undefined4 *param_1);  /* @ 00447d94 */
undefined4 apr_table_elts(undefined4 param_1);  /* @ 00447e94 */
bool apr_is_empty_table(int param_1);  /* @ 00447e9c */
undefined4 * apr_table_make(undefined4 param_1,int param_2);  /* @ 00447eb8 */
undefined4 apr_table_get(int param_1,byte *param_2);  /* @ 00447f3c */
void apr_table_set(undefined4 *param_1,char *param_2,undefined4 param_3);  /* @ 00448084 */
void apr_table_add(undefined4 *param_1,byte *param_2,undefined4 param_3);  /* @ 00448368 */
void apr_table_addn(int param_1,byte *param_2,undefined4 param_3);  /* @ 0044845c */
undefined4 apr_atomic_read32(undefined4 *param_1);  /* @ 00448640 */
void apr_atomic_inc32(undefined4 param_1);  /* @ 004486b0 */
int apr_file_info_get(undefined4 *param_1,uint param_2,undefined4 *param_3);  /* @ 0044895c */
void apr_file_read_full(undefined4 param_1,int param_2,int param_3,int *param_4);  /* @ 00448a04 */
int apr_file_open(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5);  /* @ 00448be4 */
void apr_file_close(undefined4 *param_1);  /* @ 00448f14 */
undefined4 apr_file_remove(void);  /* @ 00448f2c */
undefined4 apr_file_rename(void);  /* @ 00448f5c */
int apr_file_read(int param_1,undefined1 *param_2,int *param_3);  /* @ 00449360 */
int apr_file_write(int param_1,int param_2,uint *param_3);  /* @ 004495a4 */
undefined4 apr_file_flush(int param_1);  /* @ 00449880 */
int apr_file_seek(int param_1,int param_2,int *param_3);  /* @ 004499dc */
int apr_file_trunc(int param_1,int param_2);  /* @ 00449b10 */
int apr_thread_mutex_create(int *param_1,uint param_2,undefined4 param_3);  /* @ 00449db4 */
void apr_thread_mutex_lock(int param_1);  /* @ 00449e58 */
void apr_thread_mutex_unlock(int param_1);  /* @ 00449e64 */
void apr_thread_mutex_destroy(undefined4 *param_1);  /* @ 00449e70 */
uint * apr_palloc(int param_1,uint param_2);  /* @ 0044a504 */
void apr_pool_destroy(int *param_1);  /* @ 0044a8b4 */
undefined4 apr_pool_create_ex(undefined4 *param_1,uint param_2,code *param_3,uint *param_4);  /* @ 0044ab50 */
int apr_global_pool(void);  /* @ 0044ae9c */
void apr_psprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0044b358 */
char * apr_strerror(int param_1,char *param_2,undefined4 param_3);  /* @ 0044b624 */
int apr_initialize(void);  /* @ 0044bbb4 */
void apr_terminate(void);  /* @ 0044bc4c */
void apr_time_now(void);  /* @ 0044c4a8 */
undefined4 apr_time_exp_gmt(int param_1);  /* @ 0044c4f8 */
undefined4 apr_time_exp_lt(void);  /* @ 0044c52c */
void apr_sleep(undefined4 param_1,undefined4 param_2);  /* @ 0044c554 */

/* ---- bio ---- */
undefined * BIO_f_buffer(void);  /* @ 0047ae3c */
undefined4 BIO_set_write_buffer_size(undefined4 param_1,undefined4 param_2);  /* @ 0047aea8 */
undefined * BIO_f_ssl(void);  /* @ 0047af0c */
undefined1 * BIO_new_socket(undefined4 param_1,undefined1 param_2);  /* @ 0047af78 */
bool BIO_eof(int param_1);  /* @ 0047b05c */
undefined4 BIO_set_ssl(int param_1,undefined4 param_2,undefined1 param_3);  /* @ 0047b0d8 */
undefined4 BIO_free_all(int param_1);  /* @ 0047b538 */
int BIO_read(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047b5d8 */
int BIO_write(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047b754 */
int BIO_push(int param_1,int param_2);  /* @ 0047b8d0 */
undefined4 BIO_flush(void);  /* @ 0047b94c */

/* ---- build ---- */
undefined4 build_complete_multipart_upload_xml(undefined4 param_1,undefined4 *param_2);  /* @ 00436b90 */
void build_complete_multipart_upload_body(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00436dd4 */
undefined4 build_lifecycle_xml(undefined4 param_1,undefined4 *param_2);  /* @ 00436eb4 */
undefined4 build_versioning_xml(undefined4 param_1,int param_2);  /* @ 00437710 */
undefined4 build_cors_xml(undefined4 param_1,undefined4 *param_2);  /* @ 004378b4 */
undefined4 build_replication_xml(undefined4 param_1,int *param_2);  /* @ 00437dbc */
void build_object_restore_body(undefined4 param_1,int *param_2,int param_3);  /* @ 00438314 */
undefined4 build_objects_xml(undefined4 param_1,undefined4 *param_2,undefined4 param_3);  /* @ 00439ba8 */

/* ---- cos ---- */
void cos_auth(int param_1,int param_2);  /* @ 00410330 */
undefined4 cos_media_client(undefined4 param_1);  /* @ 00410698 */
int cos_media_file_create(void);  /* @ 00410774 */
undefined4 cos_media_file_open(int param_1,undefined4 param_2);  /* @ 004108c0 */
undefined4 cos_media_file_stat(int param_1,undefined8 *param_2);  /* @ 00410b6c */
undefined8 cos_media_file_tell(int param_1);  /* @ 00411014 */
undefined8 cos_media_file_seek(int param_1,undefined4 param_2,uint param_3,int param_4);  /* @ 00411140 */
longlong cos_media_file_read(int param_1,int param_2,int param_3,int param_4);  /* @ 004113a0 */
undefined8 cos_media_file_write(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00411b20 */
void cos_op_debug(int param_1,undefined4 *param_2,int param_3,int param_4);  /* @ 004126e0 */
int cos_request_get(void);  /* @ 0041af2c */
void cos_request_release(undefined4 param_1);  /* @ 0041b038 */
void cos_set_default_request_options(undefined4 param_1);  /* @ 0041b134 */
void cos_set_default_transport_options(undefined4 param_1);  /* @ 0041b170 */
undefined4 * cos_http_request_options_create(undefined4 param_1);  /* @ 0041b1ac */
undefined4 * cos_http_controller_create(int param_1,undefined4 param_2);  /* @ 0041b328 */
int cos_http_request_create(undefined4 param_1);  /* @ 0041b49c */
undefined4 * cos_http_response_create(undefined4 param_1);  /* @ 0041b5c8 */
int cos_read_http_body_memory(int param_1,int param_2,int param_3);  /* @ 0041b6d4 */
uint cos_read_http_body_file(int param_1,undefined4 param_2,uint param_3);  /* @ 0041b884 */
int cos_write_http_body_memory(int param_1,undefined4 param_2,int param_3);  /* @ 0041bb70 */
int cos_write_http_body_file(int param_1,undefined4 param_2,int param_3);  /* @ 0041bcb0 */
int cos_write_http_body_file_part(int param_1,undefined4 param_2,int param_3);  /* @ 0041c034 */
undefined4 cos_http_io_initialize(char *param_1,uint param_2);  /* @ 0041c2bc */
void cos_http_io_deinitialize(void);  /* @ 0041c7a4 */
undefined4 cos_http_send_request(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0041c8f8 */
void cos_log_set_level(undefined4 param_1);  /* @ 0041cd28 */
void cos_log_set_output(undefined4 param_1);  /* @ 0041cd64 */
int cos_create_buf(undefined4 param_1,int param_2);  /* @ 0041d3d0 */
int cos_buf_pack(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0041d4b8 */
undefined8 cos_buf_list_len(undefined4 *param_1);  /* @ 0041d598 */
int cos_buf_list_content(undefined4 param_1,undefined4 *param_2);  /* @ 0041d66c */
undefined4 cos_create_file_buf(undefined4 param_1);  /* @ 0041d80c */
undefined4 cos_open_file_for_read(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0041d890 */
undefined4 cos_open_file_for_all_read(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0041db2c */
int cos_open_file_for_range_read (undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5, int param_6,int param_7);  /* @ 0041db98 */
undefined4 cos_open_file_for_write(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0041ddec */
undefined4 cos_open_file_for_range_write (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7);  /* @ 0041df60 */
void cos_buf_append_string(undefined4 param_1,int param_2,undefined4 param_3,int param_4);  /* @ 0041e150 */
int cos_init_curl_url(int *param_1);  /* @ 0041e9fc */
void cos_transport_cleanup(int *param_1);  /* @ 0041ec84 */
void cos_curl_response_headers_parse(undefined4 param_1,undefined4 param_2,int param_3,int param_4);  /* @ 0041f11c */
void cos_curl_transport_headers_done(int param_1);  /* @ 0041f3c8 */
int cos_curl_default_write_callback(undefined4 param_1,int param_2,int param_3,int param_4);  /* @ 0041f664 */
int cos_curl_default_read_callback(undefined4 param_1,int param_2,int param_3,int *param_4);  /* @ 0041fb9c */
undefined4 cos_curl_code_to_status(int param_1);  /* @ 0041feb0 */
undefined4 cos_curl_transport_setup(int *param_1);  /* @ 0041fff4 */
int cos_curl_http_transport_perform(int param_1);  /* @ 00422238 */
undefined4 cos_put_object_from_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 00422874 */
undefined4 cos_do_put_object_from_buffer (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);  /* @ 00422904 */
int * cos_do_put_object_from_file (int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);  /* @ 00422bfc */
undefined4 cos_get_object_to_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 00422edc */
undefined4 cos_do_get_object_to_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 00422f6c */
int * cos_do_get_object_to_file (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8);  /* @ 0042321c */
undefined4 cos_head_object(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 00423514 */
undefined4 cos_do_delete_object (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 004236dc */
undefined4 cos_append_object_from_buffer(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00423854 */
int * cos_copy_object(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9);  /* @ 004248b0 */
int cos_gen_sign_string(int *param_1);  /* @ 00425488 */
int cos_gen_presigned_url(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00425664 */
undefined4 cos_status_create(undefined4 param_1);  /* @ 00425df8 */
undefined4 * cos_status_dup(undefined4 param_1,undefined4 *param_2);  /* @ 00425e7c */
undefined4 * cos_status_parse_from_body (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 00426064 */
undefined4 cos_is_valid_ip(undefined4 param_1);  /* @ 00426b20 */
undefined4 cos_config_create(undefined4 param_1);  /* @ 00426bb8 */
int cos_request_options_create(int param_1);  /* @ 00426c3c */
void cos_get_object_uri(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);  /* @ 00426d70 */
void cos_get_bucket_uri(int *param_1,int *param_2,undefined4 *param_3);  /* @ 00427130 */
void cos_write_request_body_from_buffer(undefined4 param_1,int param_2);  /* @ 004274cc */
int cos_write_request_body_from_file(undefined4 param_1,int param_2,int param_3);  /* @ 00427570 */
int cos_write_request_body_from_upload_file(undefined4 param_1,int param_2,int param_3);  /* @ 004276d8 */
void cos_fill_read_response_body(int param_1,int param_2);  /* @ 00427894 */
int cos_init_read_response_body_to_file(undefined4 param_1,int param_2,int param_3);  /* @ 00427908 */
int cos_init_read_response_body_to_file_part(undefined4 param_1,int param_2,int param_3);  /* @ 00427a48 */
void cos_fill_read_response_header(int param_1,undefined4 *param_2);  /* @ 00427bbc */
int cos_create_api_result_content(undefined4 param_1,undefined4 param_2);  /* @ 00427c0c */
int cos_create_acl_list_content(undefined4 param_1);  /* @ 00427ca4 */
undefined4 cos_create_list_object_content(undefined4 param_1);  /* @ 00427d6c */
undefined4 cos_create_list_object_common_prefix(undefined4 param_1);  /* @ 00427dcc */
undefined4 cos_create_list_multipart_upload_content(undefined4 param_1);  /* @ 00427e2c */
undefined4 cos_create_list_part_content(undefined4 param_1);  /* @ 00427e8c */
undefined4 cos_create_complete_part_content(undefined4 param_1);  /* @ 00427ef4 */
undefined4 * cos_create_copy_object_params(undefined4 param_1);  /* @ 00428038 */
int cos_create_list_upload_part_params(undefined4 param_1);  /* @ 00428220 */
undefined4 * cos_create_upload_part_copy_params(undefined4 param_1);  /* @ 00428420 */
int cos_create_lifecycle_rule_content(undefined4 param_1);  /* @ 00428578 */
int cos_create_cors_rule_content(undefined4 param_1);  /* @ 004286c0 */
int cos_create_replication_rule_content(undefined4 param_1);  /* @ 00428934 */
undefined4 cos_create_upload_file(undefined4 param_1);  /* @ 00428ae4 */
undefined4 cos_create_cos_object_key(undefined4 param_1);  /* @ 00428b68 */
undefined4 * cos_create_checkpoint_content(undefined4 param_1);  /* @ 00428bec */
void cos_set_multipart_content_type(undefined4 param_1);  /* @ 00428ea0 */
void cos_init_request(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6);  /* @ 00428fd4 */
void cos_init_bucket_request (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 004290dc */
void cos_init_object_request (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,int *param_11);  /* @ 00429180 */
int * cos_send_request(int param_1,undefined4 param_2,int *param_3);  /* @ 004292a4 */
int * cos_process_request(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 004294ac */
void cos_get_part_size(uint param_1,int param_2,uint *param_3);  /* @ 0042961c */
int cos_table_create_if_null(int param_1,int param_2,undefined4 param_3);  /* @ 00429b94 */
int cos_check_crc_consistent(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);  /* @ 00429e44 */
int cos_get_temporary_file_name(undefined4 param_1,int *param_2,undefined4 *param_3);  /* @ 00429ee8 */
undefined4 cos_temp_file_rename(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0042a01c */
undefined8 cos_crc64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0042b554 */
undefined4 cos_get_string_to_sign (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,undefined4 *param_11);  /* @ 0042be90 */
void cos_sign_headers(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0042c4e4 */
int cos_get_signed_headers (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 0042c558 */
undefined4 cos_sign_request(int *param_1,int param_2);  /* @ 0042c6cc */
undefined4 cos_get_thread_num(int param_1);  /* @ 0042cdcc */
void cos_get_checkpoint_path(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0042ce38 */
int cos_get_file_info(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 0042cfd4 */
bool cos_does_file_exist(int param_1,undefined4 param_2);  /* @ 0042d200 */
int cos_open_checkpoint_file(undefined4 param_1,int param_2,int param_3);  /* @ 0042d2b8 */
int cos_get_part_num(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0042d3e4 */
void cos_build_parts(uint param_1,int param_2,uint param_3,int param_4,int param_5);  /* @ 0042d504 */
void cos_build_thread_params (int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10);  /* @ 0042d724 */
void cos_build_copy_thread_params (int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10);  /* @ 0042dabc */
void cos_destroy_thread_pool(int param_1,int param_2);  /* @ 0042de54 */
void cos_destroy_copy_thread_pool(int param_1,int param_2);  /* @ 0042def4 */
void cos_set_task_tracker (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7);  /* @ 0042df94 */
void cos_set_copy_task_tracker (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7);  /* @ 0042e090 */
undefined4 cos_verify_checkpoint_md5(void);  /* @ 0042e18c */
void cos_build_upload_checkpoint (undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,uint param_7,int param_8);  /* @ 0042e1bc */
undefined4 cos_dump_checkpoint(undefined4 param_1,int param_2);  /* @ 0042e610 */
undefined4 cos_load_checkpoint(undefined4 param_1,int param_2,undefined4 param_3);  /* @ 0042e90c */
undefined4 cos_is_upload_checkpoint_valid(undefined4 param_1,int param_2,int param_3);  /* @ 0042ec88 */
void cos_update_checkpoint(undefined4 param_1,int param_2,int param_3,int param_4);  /* @ 0042ed80 */
void cos_get_checkpoint_undo_parts(int param_1,int *param_2,int param_3);  /* @ 0042ee80 */
int * cos_resumable_upload_file_without_cp (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,int param_11,code *param_12,undefined4 param_13, undefined4 param_14);  /* @ 0042f3b8 */
int * cos_resumable_upload_file_with_cp (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,int param_11,int param_12,code *param_13,undefined4 param_14, undefined4 param_15);  /* @ 00430038 */
int * cos_resumable_upload_file (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 *param_7);  /* @ 00431034 */
int * cos_upload_object_by_part_copy_mt (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9,code *param_10);  /* @ 004317f0 */
undefined8 cos_get_safe_size_for_download(uint param_1,int param_2);  /* @ 00432a88 */
undefined4 cos_fstack_create(undefined4 param_1,undefined4 param_2);  /* @ 004337a0 */
void cos_fstack_push(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00433808 */
undefined4 * cos_fstack_pop(undefined4 param_1);  /* @ 00433890 */
void cos_fstack_destory(undefined4 param_1);  /* @ 004339f0 */
void cos_acl_grantee_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004341c8 */
void cos_acl_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004345b4 */
void cos_acl_owner_parse(undefined4 param_1,undefined4 param_2,undefined4 *param_3);  /* @ 004346d8 */
int cos_acl_parse_from_body(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0043488c */
void cos_replication_rule_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00434a0c */
void cos_replication_rules_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00434de8 */
int cos_copy_object_parse_from_body(undefined4 param_1,undefined4 param_2,undefined4 *param_3);  /* @ 00435098 */
void cos_list_objects_owner_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004352b0 */
void cos_list_objects_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00435464 */
void cos_list_objects_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004358a4 */
void cos_list_objects_prefix_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004359c8 */
void cos_list_objects_common_prefix_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00435ac4 */
int cos_upload_id_parse_from_body(undefined4 param_1,undefined4 param_2,undefined4 *param_3);  /* @ 00435e28 */
void cos_list_parts_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00435f50 */
void cos_list_parts_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00436074 */
int cos_list_parts_parse_from_body (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4, undefined4 *param_5);  /* @ 00436398 */
void cos_list_multipart_uploads_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043657c */
void cos_list_multipart_uploads_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004366a0 */
int cos_list_multipart_uploads_parse_from_body (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6);  /* @ 0043690c */
void cos_cors_rule_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00438850 */
void cos_cors_rule_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00438974 */
void cos_lifecycle_rule_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00438ecc */
void cos_lifecycle_rule_content_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00438ff0 */
void cos_lifecycle_rule_expire_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00439388 */
void cos_lifecycle_rule_transition_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00439528 */
void cos_lifecycle_rule_abort_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 00439780 */
void cos_delete_objects_contents_parse (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00439868 */
void cos_object_key_parse(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0043998c */
undefined4 cos_build_checkpoint_xml(undefined4 param_1,int param_2);  /* @ 0043a374 */
undefined4 cos_checkpoint_parse_from_body(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0043a988 */
undefined4 cos_pstrdup(undefined4 param_1,undefined4 *param_2);  /* @ 0043b340 */
void cos_strip_space(undefined4 param_1);  /* @ 0043b554 */
void cos_trip_space_and_cntrl(undefined4 param_1);  /* @ 0043b5b4 */
undefined4 cos_ends_with(int *param_1,int *param_2);  /* @ 0043b614 */
undefined4 cos_parse_xml_body(undefined4 *param_1,int *param_2);  /* @ 0043ba10 */
undefined4 cos_convert_to_gmt_time(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0043bbd4 */
int cos_get_gmt_str_time(undefined4 param_1);  /* @ 0043bcec */
undefined4 cos_url_encode(byte *param_1,byte *param_2,int param_3);  /* @ 0043bea8 */
undefined4 cos_query_params_to_string(undefined4 param_1,undefined4 param_2,int *param_3);  /* @ 0043c09c */
undefined * cos_http_method_to_string_lower(uint param_1);  /* @ 0043c500 */
int cos_base64_encode(byte *param_1,int param_2,undefined1 *param_3);  /* @ 0043c5c0 */
void COS_HMAC_SHA1(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 0043c820 */
int cos_md5(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043ca64 */
undefined4 cos_url_decode(byte *param_1,byte *param_2);  /* @ 0043cb9c */
undefined4 cos_atoi64(undefined4 param_1);  /* @ 0043d490 */
undefined8 cos_strtoull(byte *param_1,undefined4 *param_2,uint param_3);  /* @ 0043d51c */
undefined4 cos_atoui64(undefined4 param_1);  /* @ 0043da78 */
void cos_get_hex_from_digest(int param_1,int param_2);  /* @ 0043daf4 */
void cos_get_hmac_sha1_hexdigest (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0043dc28 */
void cos_get_sha1_hexdigest(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0043dcc0 */
int * cos_init_multipart_upload (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 0043e21c */
int * cos_list_upload_part (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5, undefined4 param_6);  /* @ 0043e5b4 */
undefined4 cos_complete_multipart_upload (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 0043ed0c */
undefined4 cos_do_complete_multipart_upload (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);  /* @ 0043eda0 */
undefined4 cos_do_upload_part_from_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,undefined4 param_11);  /* @ 0043f038 */
undefined4 cos_upload_part_from_file (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);  /* @ 0043f2cc */
int * cos_do_upload_part_from_file (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,undefined4 param_11);  /* @ 0043f368 */
int * cos_upload_part_copy(int param_1,int param_2,undefined4 param_3,undefined4 param_4);  /* @ 0043f66c */
undefined4 cos_get_sorted_uploaded_part (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int *param_6);  /* @ 0043fa08 */
undefined4 cos_download_part_to_file (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 0044101c */
int * cos_do_download_part_to_file (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 004410a4 */

/* ---- curl ---- */
undefined4 curl_global_init(uint param_1);  /* @ 0044d0f0 */
undefined4 curl_easy_init(void);  /* @ 0044d2f0 */
undefined4 curl_easy_setopt(int param_1);  /* @ 0044d348 */
undefined4 curl_easy_perform(int param_1);  /* @ 0044d378 */
void curl_easy_cleanup(int param_1);  /* @ 0044d564 */
void curl_easy_getinfo(void);  /* @ 0044d57c */
void curl_easy_reset(int param_1);  /* @ 0044d760 */
char * curl_easy_strerror(uint param_1);  /* @ 00452120 */
int curl_slist_append(undefined4 param_1,undefined4 param_2);  /* @ 00452c98 */
void curl_slist_free_all(int *param_1);  /* @ 00452d0c */

/* ---- cyassl ---- */
void CYASSL_MSG(undefined4 param_1);  /* @ 00470430 */
undefined4 CyaSSL_Malloc(undefined4 param_1);  /* @ 00470730 */
void CyaSSL_Free(undefined4 param_1);  /* @ 004707d0 */
undefined4 CyaSSL_Realloc(undefined4 param_1,undefined4 param_2);  /* @ 00470858 */
int CyaSSL_CTX_new(int param_1);  /* @ 00470a54 */
void CyaSSL_CTX_free(int param_1);  /* @ 00470bec */
void CyaSSL_free(int param_1);  /* @ 00470d98 */
undefined1 CyaSSL_get_using_nonblock(int param_1);  /* @ 00471198 */
undefined1 CyaSSL_dtls(int param_1);  /* @ 00471224 */
void CyaSSL_set_using_nonblock(int param_1,int param_2);  /* @ 00471254 */
undefined4 CyaSSL_negotiate(int param_1);  /* @ 00471330 */
int CyaSSL_write(int param_1,int param_2,int param_3);  /* @ 0047143c */
undefined4 CyaSSL_read(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047171c */
undefined4 CyaSSL_get_error(int param_1,int param_2);  /* @ 00471b38 */
int CyaSSL_ERR_error_string(undefined4 param_1,int param_2);  /* @ 00471dc8 */
void CyaSSL_ERR_error_string_n(undefined4 param_1,int param_2,uint param_3);  /* @ 00471e68 */
int CyaSSL_GetMacSecret(int param_1,int param_2);  /* @ 00472040 */
int CyaSSL_CertManagerNew(void);  /* @ 004720d8 */
void CyaSSL_CertManagerFree(int param_1);  /* @ 004721ec */
undefined4 CyaSSL_CertManagerUnloadCAs(int param_1);  /* @ 004722c0 */
uint CyaSSL_CertPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5);  /* @ 004723b4 */
uint CyaSSL_KeyPemToDer(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5);  /* @ 004726b4 */
void CyaSSL_ERR_print_errors_fp(undefined4 param_1,undefined4 param_2);  /* @ 00472954 */
undefined4 CyaSSL_SetMinVersion(int param_1,int param_2);  /* @ 00472b80 */
undefined4 CyaSSL_SetVersion(int param_1,int param_2);  /* @ 00472cd8 */
int CyaSSL_Init(void);  /* @ 004739e0 */
int CyaSSL_CertManagerVerifyBuffer(int param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 0047581c */
undefined4 CyaSSL_CertManagerEnableOCSP(int param_1);  /* @ 00475a18 */
undefined4 CyaSSL_CertManagerDisableOCSP(int param_1);  /* @ 00475aa4 */
int CyaSSL_CTX_load_verify_locations(int param_1,int param_2,int param_3);  /* @ 00475e54 */
undefined4 CyaSSL_CertManagerVerify(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476144 */
undefined4 CyaSSL_CertManagerLoadCA(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476454 */
undefined4 CyaSSL_CertManagerEnableCRL(int param_1);  /* @ 004765d4 */
undefined4 CyaSSL_CertManagerDisableCRL(int param_1);  /* @ 00476660 */
undefined4 CyaSSL_CTX_der_load_verify_locations(int param_1,int param_2,undefined4 param_3);  /* @ 00476740 */
bool CyaSSL_CTX_use_certificate_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476814 */
bool CyaSSL_CTX_use_PrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004768c4 */
bool CyaSSL_CTX_use_certificate_chain_file(undefined4 param_1,undefined4 param_2);  /* @ 00476974 */
bool CyaSSL_use_certificate_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476a24 */
bool CyaSSL_use_PrivateKey_file(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476ae0 */
bool CyaSSL_use_certificate_chain_file(undefined4 *param_1,undefined4 param_2);  /* @ 00476b9c */
undefined4 CyaSSL_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476ce0 */
void CyaSSL_CTX_set_verify(int param_1,uint param_2,undefined4 param_3);  /* @ 00476d68 */
void CyaSSL_set_verify(int param_1,uint param_2,undefined4 param_3);  /* @ 00476e34 */
void CyaSSL_SetCertCbCtx(int param_1,undefined4 param_2);  /* @ 00476f00 */
undefined4 CyaSSL_SetServerID(int param_1,int param_2,int param_3,int param_4);  /* @ 004770f4 */
bool CyaSSL_CTX_set_cipher_list(int param_1,undefined4 param_2);  /* @ 004773e8 */
bool CyaSSL_set_cipher_list(int param_1,undefined4 param_2);  /* @ 00477478 */
undefined4 CyaSSL_connect(int param_1);  /* @ 004775c4 */
undefined4 CyaSSL_accept(int param_1);  /* @ 00477e84 */
undefined4 CyaSSL_Cleanup(void);  /* @ 00478750 */
bool CyaSSL_check_domain_name(int param_1,undefined4 param_2);  /* @ 00479b10 */
undefined4 CyaSSL_set_compression(void);  /* @ 00479c5c */
undefined4 CyaSSL_writev(undefined4 param_1,int param_2,int param_3);  /* @ 00479cbc */
undefined4 CyaSSL_CTX_load_verify_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);  /* @ 00479ed0 */
undefined4 CyaSSL_CTX_use_certificate_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 00479fc8 */
undefined4 CyaSSL_CTX_use_PrivateKey_buffer (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0047a06c */
undefined4 CyaSSL_CTX_use_certificate_chain_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047a114 */
undefined4 CyaSSL_use_certificate_buffer (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0047a1b8 */
undefined4 CyaSSL_use_PrivateKey_buffer (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0047a268 */
undefined4 CyaSSL_use_certificate_chain_buffer(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047a31c */
undefined4 CyaSSL_CTX_UnloadCAs(int param_1);  /* @ 0047a5a0 */
undefined4 CyaSSL_add_all_algorithms(void);  /* @ 0047a638 */
undefined4 CyaSSL_set_rfd(int param_1,undefined4 param_2);  /* @ 0047ac30 */
undefined4 CyaSSL_set_wfd(int param_1,undefined4 param_2);  /* @ 0047acb0 */
undefined1 * CyaSSL_BIO_new(undefined1 *param_1);  /* @ 0047b15c */
undefined4 CyaSSL_BIO_free(int param_1);  /* @ 0047b3f0 */
void CyaSSL_CTX_set_default_passwd_cb_userdata(int param_1,undefined4 param_2);  /* @ 0047b9ac */
void CyaSSL_CTX_set_default_passwd_cb(int param_1,undefined4 param_2);  /* @ 0047ba14 */
int CyaSSL_EVP_BytesToKey (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined4 param_5,int param_6,int param_7,int param_8);  /* @ 0047bb14 */
void CyaSSL_MD5_Init(undefined4 param_1);  /* @ 0047c0a4 */
void CyaSSL_MD5_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c114 */
void CyaSSL_MD5_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c194 */
void CyaSSL_SHA_Init(undefined4 param_1);  /* @ 0047c20c */
void CyaSSL_SHA_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c27c */
void CyaSSL_SHA_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c2fc */
void CyaSSL_SHA256_Init(undefined4 param_1);  /* @ 0047c4dc */
void CyaSSL_SHA256_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c54c */
void CyaSSL_SHA256_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c5cc */
void CyaSSL_SHA384_Init(undefined4 param_1);  /* @ 0047c644 */
void CyaSSL_SHA384_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c6b4 */
void CyaSSL_SHA384_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c734 */
void CyaSSL_SHA512_Init(undefined4 param_1);  /* @ 0047c7ac */
void CyaSSL_SHA512_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c81c */
void CyaSSL_SHA512_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c89c */
undefined4 CyaSSL_EVP_md5(void);  /* @ 0047c914 */
undefined4 CyaSSL_EVP_sha1(void);  /* @ 0047c974 */
undefined4 CyaSSL_EVP_aes_128_cbc(void);  /* @ 0047cb4c */
undefined4 CyaSSL_EVP_aes_192_cbc(void);  /* @ 0047cbac */
undefined4 CyaSSL_EVP_aes_256_cbc(void);  /* @ 0047cc0c */
undefined4 CyaSSL_EVP_aes_128_ctr(void);  /* @ 0047cc6c */
undefined4 CyaSSL_EVP_aes_192_ctr(void);  /* @ 0047cccc */
undefined4 CyaSSL_EVP_aes_256_ctr(void);  /* @ 0047cd2c */
undefined4 CyaSSL_EVP_des_cbc(void);  /* @ 0047cd8c */
undefined4 CyaSSL_EVP_des_ede3_cbc(void);  /* @ 0047cdec */
undefined4 CyaSSL_EVP_rc4(void);  /* @ 0047ce4c */
undefined4 CyaSSL_EVP_enc_null(void);  /* @ 0047ceac */
int CyaSSL_EVP_CipherInit(int *param_1,int param_2,int param_3,int param_4,int param_5);  /* @ 0047d070 */
undefined4 CyaSSL_EVP_CIPHER_CTX_key_length(undefined4 *param_1);  /* @ 0047deb4 */
bool CyaSSL_EVP_CIPHER_CTX_set_key_length(undefined4 *param_1,undefined4 param_2);  /* @ 0047df30 */
undefined4 CyaSSL_EVP_Cipher(int param_1,int param_2,int param_3);  /* @ 0047dfb8 */
undefined4 CyaSSL_StoreExternalIV(int param_1);  /* @ 0047e39c */
undefined4 CyaSSL_SetInternalIV(int param_1);  /* @ 0047e624 */
undefined4 CyaSSL_EVP_DigestFinal(char *param_1,undefined4 param_2,undefined4 *param_3);  /* @ 0047ecd0 */
void CyaSSL_FreeX509(undefined4 param_1);  /* @ 0047f704 */
undefined4 CyaSSL_X509_get_next_altname(int param_1);  /* @ 0047f774 */
undefined1 CyaSSL_X509_get_isCA(int param_1);  /* @ 0047f908 */
undefined4 CyaSSL_X509_ext_isSet_by_NID(int param_1,int param_2);  /* @ 0047f9a4 */
undefined4 CyaSSL_X509_ext_get_critical_by_NID(int param_1,int param_2);  /* @ 0047facc */
undefined1 CyaSSL_X509_get_isSet_pathLength(int param_1);  /* @ 0047fbf4 */
undefined4 CyaSSL_X509_get_pathLength(int param_1);  /* @ 0047fc90 */
undefined2 CyaSSL_X509_get_keyUsage(int param_1);  /* @ 0047fd30 */
int CyaSSL_X509_get_authorityKeyID(int param_1,int param_2,int *param_3);  /* @ 0047fdd0 */
int CyaSSL_X509_get_subjectKeyID(int param_1,int param_2,int *param_3);  /* @ 0047ff40 */
undefined4 CyaSSL_X509_NAME_entry_count(int param_1);  /* @ 004800b0 */
undefined4 CyaSSL_X509_NAME_get_text_by_NID(undefined4 param_1,int param_2);  /* @ 0048014c */
int CyaSSL_X509_NAME_oneline(undefined4 *param_1,int param_2,undefined4 param_3);  /* @ 004803f4 */
undefined4 CyaSSL_X509_get_signature_type(int param_1);  /* @ 0048055c */
undefined4 CyaSSL_X509_get_signature(int param_1,int param_2,int *param_3);  /* @ 004805d8 */
undefined4 CyaSSL_X509_get_serial_number(int param_1,int param_2,int *param_3);  /* @ 004806d0 */
undefined4 CyaSSL_X509_get_der(int param_1,undefined4 *param_2);  /* @ 004807c4 */
undefined4 CyaSSL_X509_version(undefined4 *param_1);  /* @ 00480864 */
int CyaSSL_X509_notBefore(int param_1);  /* @ 004808e0 */
int CyaSSL_X509_notAfter(int param_1);  /* @ 0048095c */
int CyaSSL_X509_d2i(int *param_1,int param_2,int param_3);  /* @ 004809d8 */
undefined4 CyaSSL_X509_d2i_fp(undefined4 *param_1,int param_2);  /* @ 00480b90 */
int CyaSSL_X509_load_certificate(int param_1,int param_2);  /* @ 00480d64 */
int CyaSSL_get_current_cipher(int param_1);  /* @ 00481634 */
undefined * CyaSSL_CIPHER_get_name(int *param_1);  /* @ 004816b0 */
undefined4 CyaSSL_get_cipher(undefined4 param_1);  /* @ 00481928 */
undefined * CyaSSL_BIO_s_mem(void);  /* @ 00481b20 */
int CyaSSL_X509_STORE_add_cert(int param_1,int param_2);  /* @ 00481f08 */
void CyaSSL_X509_STORE_free(int param_1);  /* @ 00482148 */
undefined4 CyaSSL_X509_STORE_CTX_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3);  /* @ 004822dc */
undefined4 CyaSSL_SESSION_get_timeout(int param_1);  /* @ 00483058 */
undefined4 CyaSSL_SESSION_get_time(int param_1);  /* @ 004830bc */
undefined4 CyaSSL_cmp_peer_cert_to_file(int *param_1,int param_2);  /* @ 004831a0 */
undefined4 CyaSSL_RAND_seed(void);  /* @ 004834c4 */
undefined * CyaSSL_BN_CTX_new(void);  /* @ 004836f0 */
void CyaSSL_BN_CTX_init(void);  /* @ 00483750 */
void CyaSSL_BN_CTX_free(void);  /* @ 004837a8 */
int CyaSSL_BN_new(void);  /* @ 00483874 */
void CyaSSL_BN_free(int param_1);  /* @ 00483a0c */
void CyaSSL_BN_clear_free(undefined4 param_1);  /* @ 00483b04 */
undefined4 CyaSSL_BN_sub(int param_1,int param_2,int param_3);  /* @ 00483b74 */
undefined4 CyaSSL_BN_mod(int param_1,int param_2,int param_3);  /* @ 00483c78 */
undefined4 CyaSSL_BN_value_one(void);  /* @ 00483d80 */
undefined4 CyaSSL_BN_num_bytes(int param_1);  /* @ 00483e44 */
undefined4 CyaSSL_BN_num_bits(int param_1);  /* @ 00483eec */
bool CyaSSL_BN_is_zero(int param_1);  /* @ 00483f94 */
undefined4 CyaSSL_BN_is_one(int param_1);  /* @ 0048402c */
undefined4 CyaSSL_BN_is_odd(int param_1);  /* @ 004840f0 */
undefined4 CyaSSL_BN_cmp(int param_1,int param_2);  /* @ 004841b4 */
undefined4 CyaSSL_BN_bn2bin(int param_1,int param_2);  /* @ 00484288 */
int CyaSSL_BN_bin2bn(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004843e0 */
undefined4 CyaSSL_BN_mask_bits(void);  /* @ 004844e4 */
undefined4 CyaSSL_BN_rand(int param_1,uint param_2);  /* @ 00484548 */
undefined4 CyaSSL_BN_is_bit_set(void);  /* @ 00484790 */
undefined4 CyaSSL_BN_hex2bn(int *param_1,int param_2);  /* @ 004847f4 */
int CyaSSL_BN_dup(int param_1);  /* @ 004849f4 */
undefined4 CyaSSL_BN_copy(void);  /* @ 00484b5c */
undefined4 CyaSSL_BN_set_word(void);  /* @ 00484bc0 */
undefined4 CyaSSL_BN_dec2bn(void);  /* @ 00484c24 */
undefined4 CyaSSL_BN_bn2dec(void);  /* @ 00484c88 */
int CyaSSL_RSA_new(void);  /* @ 00484d70 */
void CyaSSL_RSA_free(undefined4 *param_1);  /* @ 00484f68 */
undefined4 CyaSSL_RSA_generate_key_ex(int param_1,undefined4 param_2);  /* @ 004856a8 */
undefined4 CyaSSL_RSA_blinding_on(void);  /* @ 0048582c */
undefined4 CyaSSL_RSA_public_encrypt(void);  /* @ 00485890 */
undefined4 CyaSSL_RSA_private_decrypt(void);  /* @ 004858fc */
undefined4 CyaSSL_RSA_size(undefined4 *param_1);  /* @ 00485968 */
undefined4 CyaSSL_RSA_sign(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5, undefined4 *param_6);  /* @ 00485a00 */
undefined4 CyaSSL_RSA_public_decrypt(void);  /* @ 00485d5c */
undefined4 CyaSSL_RsaGenAdd(int param_1);  /* @ 00485dc8 */
void CyaSSL_HMAC_Init(int param_1,int param_2,int param_3,int param_4);  /* @ 004860a8 */
void CyaSSL_HMAC_Update(int param_1,int param_2,undefined4 param_3);  /* @ 00486304 */
void CyaSSL_HMAC_Final(int param_1,int param_2,undefined4 *param_3);  /* @ 004863c0 */
void CyaSSL_HMAC_cleanup(void);  /* @ 0048651c */
undefined4 CyaSSL_get_digestbynid(int param_1);  /* @ 00486574 */
undefined4 CyaSSL_EVP_PKEY_get1_RSA(void);  /* @ 00486654 */
undefined4 CyaSSL_EVP_PKEY_get1_DSA(void);  /* @ 004866b4 */
int CyaSSL_EVP_X_STATE(int param_1);  /* @ 00486714 */
undefined4 CyaSSL_EVP_X_STATE_LEN(int param_1);  /* @ 004867ec */
void CyaSSL_3des_iv(int param_1,int param_2,int param_3);  /* @ 004868c0 */
void CyaSSL_aes_ctr_iv(int param_1,int param_2,int param_3);  /* @ 004869c0 */
undefined4 CyaSSL_ripemd160(void);  /* @ 00486ac0 */
undefined4 CyaSSL_EVP_MD_size(int param_1);  /* @ 00486b1c */
undefined4 CyaSSL_EVP_CIPHER_CTX_iv_length(int param_1);  /* @ 00486cdc */
void CyaSSL_OPENSSL_free(int param_1);  /* @ 00486e7c */
undefined4 CyaSSL_PEM_write_bio_RSAPrivateKey(void);  /* @ 00486f00 */
undefined4 CyaSSL_PEM_write_bio_DSAPrivateKey(void);  /* @ 00486f6c */
undefined4 CyaSSL_PEM_read_bio_PrivateKey(void);  /* @ 00486fd8 */
int CyaSSL_RSA_LoadDer(int param_1,int param_2,int param_3);  /* @ 00487044 */
undefined4 CyaSSL_DeriveTlsKeys (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 00487e98 */
undefined4 CyaSSL_MakeTlsMasterSecret (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);  /* @ 004880d8 */
undefined4 CyaSSL_GetHmacType(int param_1);  /* @ 00488590 */
undefined4 CyaSSL_SetTlsHmacInner (int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined4 param_5);  /* @ 00488658 */
undefined * CyaSSL_ERR_reason_error_string(int param_1);  /* @ 004cce30 */

/* ---- des ---- */
undefined4 DES_key_sched(undefined4 param_1,undefined4 param_2);  /* @ 0047f1d8 */
void DES_cbc_encrypt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6);  /* @ 0047f25c */
void DES_ncbc_encrypt(undefined4 param_1,int param_2,int param_3,undefined4 param_4, undefined4 param_5,int param_6);  /* @ 0047f360 */
undefined4 Des_SetKey(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004900e8 */
undefined4 Des_CbcEncrypt(undefined4 param_1,int param_2,int param_3,uint param_4);  /* @ 00490b94 */
undefined4 Des_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00490c9c */
void Des_SetIV(int param_1,int param_2);  /* @ 00491134 */
int Des_CbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 004911e8 */

/* ---- des3 ---- */
int Des3_SetKey(int param_1,int param_2,undefined4 param_3,int param_4);  /* @ 00490180 */
undefined4 Des3_CbcEncrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00490e28 */
undefined4 Des3_CbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 00490f40 */
undefined4 Des3_SetIV(int param_1,int param_2);  /* @ 004912a0 */
int Des3_CbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);  /* @ 00491364 */

/* ---- evp ---- */
undefined4 EVP_sha256(void);  /* @ 0047c9d4 */
undefined4 EVP_sha384(void);  /* @ 0047ca34 */
undefined4 EVP_sha512(void);  /* @ 0047ca94 */
void EVP_CIPHER_MD_CTX_init(void);  /* @ 0047caf4 */
undefined4 EVP_MD_CTX_cleanup(void);  /* @ 0047cf0c */
void EVP_CIPHER_CTX_init(undefined4 *param_1);  /* @ 0047cf6c */
undefined4 EVP_CIPHER_CTX_cleanup(undefined4 *param_1);  /* @ 0047cff0 */
undefined4 EVP_DigestInit(undefined1 *param_1,undefined4 param_2);  /* @ 0047e8ac */
undefined4 EVP_DigestUpdate(char *param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047eb0c */
undefined4 EVP_DigestFinal_ex(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047eef8 */

/* ---- fshare ---- */
undefined4 fshare_create(void);  /* @ 0052dbd8 */
undefined4 fshare_open(void);  /* @ 0052dec8 */
undefined4 fshare_read(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 0052e590 */
undefined4 fshare_read_newest(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5);  /* @ 0052e80c */
undefined4 fshare_wait(int param_1);  /* @ 0052eaa0 */

/* ---- get ---- */
int get_ststoken(int param_1);  /* @ 00409520 */
undefined * get_cos_acl_str(int param_1);  /* @ 00428f3c */
int get_content_type_by_suffix(undefined4 param_1);  /* @ 00429924 */
undefined4 get_content_type(undefined4 param_1);  /* @ 004299dc */
undefined4 get_xmldoc(undefined4 param_1,undefined4 param_2);  /* @ 00434044 */
undefined4 get_xmlnode_value(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004340f8 */
bool get_xmlnode_value_str (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0043a148 */
bool get_xmlnode_value_int (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 0043a208 */
bool get_xmlnode_value_int64 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4);  /* @ 0043a2b4 */

/* ---- initssl ---- */
void InitSSL_Method(undefined1 *param_1,undefined2 param_2);  /* @ 004c09bc */
undefined4 InitSSL_Ctx(undefined4 *param_1,undefined2 *param_2);  /* @ 004c0a0c */
int InitSSL(undefined4 *param_1,int *param_2);  /* @ 004c1bc4 */

/* ---- maketlsv1 ---- */
undefined1 * MakeTLSv1(undefined1 *param_1);  /* @ 00487db4 */
undefined1 * MakeTLSv1_1(undefined1 *param_1);  /* @ 00487e00 */
undefined1 * MakeTLSv1_2(undefined1 *param_1);  /* @ 00487e4c */

/* ---- mp ---- */
int mp_init_multi(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 004b4608 */
undefined4 mp_init(undefined4 *param_1);  /* @ 004b4944 */
void mp_clear(int *param_1);  /* @ 004b4a1c */
int mp_unsigned_bin_size(undefined4 param_1);  /* @ 004b4b1c */
int mp_count_bits(int *param_1);  /* @ 004b4ba4 */
int mp_to_unsigned_bin(undefined4 param_1,int param_2);  /* @ 004b4d6c */
int mp_copy(int *param_1,int *param_2);  /* @ 004b4f64 */
int mp_read_unsigned_bin(int *param_1,byte *param_2,int param_3);  /* @ 004b5bb8 */
int mp_exptmod(undefined4 param_1,int param_2,int *param_3,undefined4 param_4);  /* @ 004b61e8 */
undefined4 mp_invmod(undefined4 param_1,int *param_2,undefined4 param_3);  /* @ 004b662c */
undefined4 mp_cmp(int param_1,int param_2);  /* @ 004b7ac8 */
undefined4 mp_cmp_d(int *param_1,uint param_2);  /* @ 004b7bac */
int mp_mod(undefined4 param_1,int param_2,undefined4 param_3);  /* @ 004b7d00 */
undefined4 mp_add(int param_1,int param_2,int param_3);  /* @ 004b8584 */
undefined4 mp_sub(int param_1,int param_2,int param_3);  /* @ 004b8b6c */
int mp_mulmod(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004bb1a0 */
undefined4 mp_mul(int *param_1,int *param_2,int *param_3);  /* @ 004bb390 */
int mp_set_int(int *param_1,uint param_2);  /* @ 004be8c8 */
int mp_add_d(int *param_1,uint param_2,int *param_3);  /* @ 004beb08 */
int mp_sub_d(int *param_1,uint param_2,int *param_3);  /* @ 004bee8c */
int mp_prime_is_prime(undefined4 param_1,int param_2,undefined4 *param_3);  /* @ 004bfd80 */
int mp_lcm(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 004bffec */
int mp_gcd(int *param_1,int *param_2,int param_3);  /* @ 004c020c */

/* ---- mxml ---- */
undefined4 mxml_opaque_cb(void);  /* @ 0052d080 */
int _mxml_global(void);  /* @ 0052d090 */
void mxml_error(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0052d144 */
undefined4 _mxml_strdupf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0052d200 */
undefined4 _mxml_vstrdupf(undefined4 param_1,undefined4 param_2);  /* @ 0052d258 */
undefined4 _mxml_entity_cb(undefined4 param_1);  /* @ 0052d4d0 */

/* ---- oss ---- */
undefined4 oss_report_upload_status(int param_1,int param_2);  /* @ 004090b4 */
undefined4 oss_set_babycry_clear(undefined4 param_1);  /* @ 00409244 */
undefined4 oss_set_abnormal_sound_clear(undefined4 param_1);  /* @ 004092c4 */
undefined4 oss_set_cloud_pic_index_clear(void);  /* @ 00409344 */
undefined4 oss_set_cloud_pic_index_interval(void);  /* @ 004093b8 */
undefined4 oss_set_lapse_video_off(void);  /* @ 00409430 */
undefined4 oss_set_lapse_video_modify(undefined4 param_1);  /* @ 00409bf0 */
undefined4 oss_set_lapse_framerate(void);  /* @ 00409c68 */
undefined4 oss_set_lapse_force_idr(void);  /* @ 00409d00 */
undefined4 oss_buffer_new(int *param_1,size_t param_2);  /* @ 00409f20 */
undefined4 oss_media_write_frame(int *param_1);  /* @ 0040a3a8 */
undefined4 oss_media_packet_frame(int param_1,undefined4 *param_2,int *param_3);  /* @ 0040a68c */
undefined4 oss_media_last_write_frame(int param_1);  /* @ 0040ac34 */
undefined4 oss_prepare_oss(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);  /* @ 0040b4b4 */
uint oss_ts_write(void);  /* @ 0040b5d0 */
undefined4 oss_media_write_pic(void);  /* @ 0040c424 */
void oss_media_write_file(void);  /* @ 0040cc2c */
void oss_op_debug(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);  /* @ 00413084 */
undefined4 oss_media(void);  /* @ 00413748 */
undefined4 oss_media_file_stat(int param_1,undefined4 *param_2);  /* @ 00413ac8 */
int oss_media_file_write(int param_1,undefined4 param_2,int param_3);  /* @ 00414518 */
void oss_put_object_from_buffer (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6);  /* @ 004192d4 */
undefined4 oss_get_object_to_buffer (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 *param_6);  /* @ 00419378 */
void oss_head_object(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5);  /* @ 00419420 */
void oss_append_object_from_buffer(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 004194b4 */
void oss_config_create(undefined4 param_1);  /* @ 004195c8 */
undefined1 * oss_request_options_create(int param_1);  /* @ 004195f0 */
undefined4 oss_get_canonicalized_headers(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0041a0b0 */
undefined4 oss_get_canonicalized_resource(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0041a328 */
int oss_get_string_to_sign (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, int param_5,int *param_6);  /* @ 0041a568 */
int oss_get_signed_headers (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);  /* @ 0041a874 */
undefined4 oss_sign_request(int param_1,int param_2);  /* @ 0041a960 */

/* ---- pthread ---- */
void pthread_mutex_lock(void);  /* @ 0054eae0 */
void pthread_self(void);  /* @ 0054eb80 */
void pthread_cond_signal(void);  /* @ 0054eba0 */
void pthread_exit(void);  /* @ 0054ecd0 */
void pthread_mutex_unlock(void);  /* @ 0054ed80 */
void pthread_mutex_destroy(void);  /* @ 0054edd0 */
void pthread_cond_wait(void);  /* @ 0054eea0 */
void pthread_cond_broadcast(void);  /* @ 0054ef90 */
void pthread_cond_timedwait(void);  /* @ 0054efb0 */
void pthread_join(void);  /* @ 0054f0c0 */
void pthread_create(void);  /* @ 0054f0d0 */
void pthread_mutex_init(void);  /* @ 0054f1a0 */
void pthread_cond_init(void);  /* @ 0054f1c0 */

/* ---- set ---- */
void set_content_type(int param_1,int param_2,undefined4 param_3);  /* @ 00429a74 */
undefined4 set_xmlnode_value_str(undefined4 param_1,undefined4 param_2,undefined4 *param_3);  /* @ 00439ee0 */
undefined4 set_xmlnode_value_int(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00439fb0 */
undefined4 set_xmlnode_value_int64(undefined4 param_1,undefined4 param_2);  /* @ 0043a06c */

/* ---- sha1 ---- */
void SHA1_Init(undefined4 param_1);  /* @ 0047c374 */
void SHA1_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0047c3e4 */
void SHA1_Final(undefined4 param_1,undefined4 param_2);  /* @ 0047c464 */

/* ---- ssl ---- */
int SSL_new(int param_1);  /* @ 00470c88 */
undefined4 SSL_set_fd(int param_1,undefined4 param_2);  /* @ 00470e34 */
undefined4 SSL_get_fd(int param_1);  /* @ 0047110c */
bool SSL_want_read(int param_1);  /* @ 00471cc8 */
bool SSL_want_write(int param_1);  /* @ 00471d48 */
undefined4 SSL_pending(int param_1);  /* @ 004729f0 */
undefined4 SSL_CTX_check_private_key(void);  /* @ 004766e0 */
undefined4 SSL_CTX_use_RSAPrivateKey_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00476c58 */
undefined4 SSL_get_session(int param_1);  /* @ 00476fc8 */
undefined4 SSL_set_session(undefined4 param_1,int param_2);  /* @ 0047705c */
undefined4 SSL_library_init(void);  /* @ 004772c4 */
undefined4 SSL_CTX_set_session_cache_mode(int param_1,int param_2);  /* @ 0047734c */
void SSL_set_bio(int param_1,int param_2,int param_3);  /* @ 0047a7c0 */
void SSL_set_accept_state(int param_1);  /* @ 0047aa28 */
undefined4 SSL_CTX_set_options(undefined4 param_1,undefined4 param_2);  /* @ 0047abcc */
int SSL_CTX_set_mode(int param_1,int param_2);  /* @ 0047f518 */
int SSL_get_peer_certificate(int param_1);  /* @ 0047f684 */
undefined2 SSL_get_current_cipher_suite(int param_1);  /* @ 004815a8 */
void SSL_ResourceFree(int param_1);  /* @ 004c27cc */

/* ---- misc ---- */
void processEntry entry(undefined4 param_1,undefined4 param_2);  /* @ 00408cd0 */
undefined4 check_ststoken(void);  /* @ 00409d74 */
void add_pat_pmt(int param_1,int *param_2,int *param_3,int param_4);  /* @ 0040ad58 */
undefined4 cipher_module_init(void);  /* @ 0040cb20 */
undefined4 restore(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7);  /* @ 00425190 */
undefined4 starts_with(int *param_1,char *param_2);  /* @ 004268f0 */
undefined4 part_sort_cmp(int *param_1,int *param_2);  /* @ 004298cc */
undefined4 is_enable_crc(int param_1);  /* @ 00429c14 */
bool has_crc_in_response(int param_1);  /* @ 00429c4c */
undefined4 has_range_or_process_in_request(int param_1);  /* @ 00429ccc */
undefined4 upload_part(undefined4 param_1,int param_2);  /* @ 0042f040 */
undefined4 upload_part_copy(undefined4 param_1,int param_2);  /* @ 004313c0 */
undefined4 download_part(undefined4 param_1,int param_2);  /* @ 00432678 */
int * LackOfContentLength(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8 ,undefined4 param_9,undefined4 param_10,code *param_11);  /* @ 00432b64 */
int * uploads(int param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 0043e8e4 */
int * trim_threads(int param_1,uint *param_2,int param_3);  /* @ 00444224 */
int * pop_task(int param_1);  /* @ 00444388 */
int add_if_empty(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 param_6);  /* @ 00444aac */
int trim_idle_threads(int param_1,int param_2);  /* @ 00444da0 */
undefined4 * domain(undefined4 param_1,int *param_2,char param_3,char *param_4,char *param_5,int param_6);  /* @ 004573c8 */
int compress(int param_1,int param_2,int *param_3,char *param_4);  /* @ 0045ba08 */
int anonymous(int param_1,int *param_2,char *param_3,undefined1 *param_4);  /* @ 004608ec */
int d41d8cd98f00b204e9800998ecf8427e(int *param_1,char param_2,undefined4 param_3,int param_4);  /* @ 0046873c */
int InitRng(int param_1);  /* @ 0046dea4 */
undefined4 RNG_GenerateBlock(int param_1,int param_2,uint param_3);  /* @ 0046e0a0 */
undefined4 FreeRng(int param_1);  /* @ 0046e360 */
undefined4 InitSha256(undefined4 *param_1);  /* @ 0046ea58 */
int Sha256Update(int *param_1,int param_2,int param_3);  /* @ 0046fc74 */
int Sha256Final(uint *param_1,undefined4 param_2);  /* @ 0046fe24 */
int Sha256Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00470150 */
int AddCA(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5);  /* @ 00473468 */
int CyaSSLv3_client_method(void);  /* @ 00477508 */
int SSLv3_server_method(void);  /* @ 00477dc0 */
undefined * GetSessionClient(int param_1,undefined4 param_2,undefined4 param_3);  /* @ 00478a78 */
undefined4 RSA_generate_key(void);  /* @ 0047ad30 */
int X509_get_issuer_name(int param_1);  /* @ 0047f840 */
int X509_get_subject_name(int param_1);  /* @ 0047f8a4 */
undefined4 RAND_bytes(undefined4 param_1,undefined4 param_2);  /* @ 00483594 */
void InitCyaSSL_BigNum(undefined4 *param_1);  /* @ 00483800 */
int CyaSSLv23_client_method(void);  /* @ 00488b68 */
int HmacSetKey(int param_1,undefined4 param_2);  /* @ 00489090 */
int HmacUpdate(int param_1);  /* @ 004897b0 */
int HmacFinal(int param_1);  /* @ 004899ac */
undefined4 InitRsaKey(int param_1,undefined4 param_2);  /* @ 00489f40 */
undefined4 FreeRsaKey(int param_1);  /* @ 00489fe8 */
int RsaPublicEncrypt(undefined4 param_1,uint param_2,undefined4 param_3,int param_4, undefined4 param_5,undefined4 param_6);  /* @ 0048aab0 */
int RsaPrivateDecryptInline (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0048ac18 */
int RsaSSL_VerifyInline(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0048aea0 */
int RsaSSL_Sign(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6);  /* @ 0048b128 */
undefined4 RsaEncryptSize(undefined4 param_1);  /* @ 0048b294 */
int MakeRsaKey(int param_1,int param_2,uint param_3,int param_4);  /* @ 0048b7cc */
undefined4 AesSetKey(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);  /* @ 0048eb54 */
undefined4 AesSetIV(int param_1,int param_2);  /* @ 0048ec90 */
int AesCbcDecryptWithKey (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);  /* @ 0048ed54 */
undefined4 AesCbcEncrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 0048eeec */
undefined4 AesCbcDecrypt(int param_1,int param_2,int param_3,uint param_4);  /* @ 0048f004 */
void AesCtrEncrypt(int param_1,byte *param_2,byte *param_3,uint param_4);  /* @ 0048f1c0 */
undefined4 InitSha(undefined4 *param_1);  /* @ 0049160c */
undefined4 ShaUpdate(int *param_1,int param_2,int param_3);  /* @ 004953b0 */
undefined4 ShaFinal(uint *param_1,undefined4 param_2);  /* @ 00495544 */
int ShaHash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 00495838 */
undefined4 InitSha512(undefined4 *param_1);  /* @ 00495cfc */
int Sha512Update(int *param_1,int param_2,int param_3);  /* @ 0049cc20 */
int Sha512Final(uint *param_1,undefined4 param_2);  /* @ 0049cdd0 */
int Sha512Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0049d0f4 */
undefined4 InitSha384(undefined4 *param_1);  /* @ 0049d238 */
int Sha384Update(int *param_1,int param_2,int param_3);  /* @ 004a415c */
int Sha384Final(uint *param_1,undefined4 param_2);  /* @ 004a430c */
int Sha384Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004a4630 */
undefined4 InitMutex(undefined4 param_1);  /* @ 004a4780 */
undefined4 FreeMutex(undefined4 param_1);  /* @ 004a47f8 */
undefined4 LockMutex(undefined4 param_1);  /* @ 004a486c */
undefined4 UnLockMutex(undefined4 param_1);  /* @ 004a48e0 */
uint GetMyVersion(int param_1,int *param_2,uint *param_3);  /* @ 004a4e58 */
undefined4 GetExplicitVersion(int param_1,int *param_2,undefined4 *param_3);  /* @ 004a506c */
undefined4 GetAlgoId(int param_1,int *param_2,int *param_3,undefined4 param_4);  /* @ 004a5448 */
undefined4 RsaPrivateKeyDecode(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);  /* @ 004a564c */
int ToTraditional(int param_1,undefined4 param_2);  /* @ 004a58ec */
undefined4 ToTraditionalEnc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004a62d4 */
undefined4 RsaPublicKeyDecode(int param_1,int *param_2,int param_3,undefined4 param_4);  /* @ 004a68d0 */
void InitDecodedCert(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004a6e54 */
void FreeDecodedCert(int *param_1);  /* @ 004a72bc */
int DecodeToKey(int param_1,undefined4 param_2);  /* @ 004a9ea0 */
int EncodeSignature(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004aaca8 */
undefined4 DecodeAltNames(int param_1,undefined4 param_2,int param_3);  /* @ 004abcc8 */
undefined4 DecodeBasicCaConstraint(int param_1,uint param_2,int param_3);  /* @ 004ac294 */
undefined4 DecodeCrlDist(int param_1,uint param_2,int param_3);  /* @ 004ac53c */
undefined4 DecodeAuthInfo(int param_1,uint param_2,int param_3);  /* @ 004ac944 */
int DecodeAuthKeyId(int param_1,undefined4 param_2,int param_3);  /* @ 004acb6c */
int DecodeSubjKeyId(int param_1,undefined4 param_2,int param_3);  /* @ 004acdfc */
undefined4 DecodeKeyUsage(int param_1,undefined4 param_2,int param_3);  /* @ 004ad028 */
undefined4 DecodeExtKeyUsage(int param_1,uint param_2,int param_3);  /* @ 004ad224 */
undefined4 DecodeNameConstraints(int param_1,uint param_2,int param_3);  /* @ 004ad714 */
undefined4 DecodeCertExtensions(int param_1);  /* @ 004ad948 */
int ParseCert(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004ae168 */
int ParseCertRelative(int *param_1,int param_2,int param_3,undefined4 param_4);  /* @ 004ae35c */
undefined4 * MakeSigner(void);  /* @ 004ae8e4 */
void FreeSigner(int param_1,undefined4 param_2);  /* @ 004ae990 */
void FreeSignerTable(int param_1,int param_2,undefined4 param_3);  /* @ 004aeac4 */
int SetSerialNumber(char *param_1,uint param_2,undefined1 *param_3);  /* @ 004aec78 */
int GetNameHash(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);  /* @ 004af7b0 */
undefined4 Base64_Decode(int param_1,uint param_2,int param_3,uint *param_4);  /* @ 004af9e0 */
undefined4 Base64_Encode(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 004b08e4 */
undefined4 Base16_Decode(char *param_1,uint param_2,char *param_3,uint *param_4);  /* @ 004b09e0 */
void Arc4SetKey(undefined1 *param_1,int param_2,uint param_3);  /* @ 004b0cb0 */
void Arc4Process(byte *param_1,byte *param_2,byte *param_3,int param_4);  /* @ 004b0eec */
void InitMd5(undefined4 *param_1);  /* @ 004b108c */
void Md5Update(int *param_1,int param_2,int param_3);  /* @ 004b2b8c */
void Md5Final(uint *param_1,undefined4 param_2);  /* @ 004b2ce4 */
undefined4 Md5Hash(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 004b2f34 */
int PBKDF1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,int param_6,int param_7,int param_8);  /* @ 004b31c4 */
int PBKDF2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6,int param_7,int param_8);  /* @ 004b34f4 */
int PKCS12_PBKDF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7 ,int param_8,undefined4 param_9);  /* @ 004b38a8 */
undefined4 IsAtLeastTLSv1_2(int param_1);  /* @ 004c071c */
void c32to24(undefined4 param_1,undefined1 *param_2);  /* @ 004c07b0 */
void FreeSSL_Ctx(int param_1);  /* @ 004c0e0c */
void InitSuites(int *param_1,undefined2 param_2,char param_3);  /* @ 004c1394 */
void InitX509(undefined4 *param_1,undefined1 param_2);  /* @ 004c186c */
void FreeX509(int param_1);  /* @ 004c19c4 */
void FreeArrays(int param_1,int param_2);  /* @ 004c26f0 */
void FreeHandshakeResources(int param_1);  /* @ 004c2bbc */
void FreeSSL(undefined4 *param_1);  /* @ 004c2d68 */
undefined1 * MakeSSLv3(undefined1 *param_1);  /* @ 004c2e08 */
undefined4 LowResTimer(void);  /* @ 004c2e50 */
undefined4 SendBuffered(int *param_1);  /* @ 004c3738 */
undefined4 CopyDecodedToX509(int *param_1,int *param_2);  /* @ 004c56ec */
int DoHandShakeMsgType(int param_1,int param_2,int *param_3,byte param_4,int param_5,uint param_6);  /* @ 004c79b4 */
int ProcessReply(int param_1);  /* @ 004c9d78 */
int SendChangeCipher(int param_1);  /* @ 004ca804 */
int SendFinished(int param_1);  /* @ 004cb958 */
int SendCertificate(int param_1);  /* @ 004cbcbc */
int SendCertificateRequest(int param_1);  /* @ 004cc134 */
int SendData(int param_1,int param_2,int param_3);  /* @ 004cc44c */
int ReceiveData(int param_1,undefined4 param_2,int param_3,int param_4);  /* @ 004cc894 */
int SendAlert(int param_1,int param_2,undefined4 param_3);  /* @ 004ccbe0 */
void SetErrorString(undefined4 param_1,undefined4 param_2);  /* @ 004cd4d8 */
undefined * GetCipherNames(void);  /* @ 004cd558 */
undefined4 GetCipherNamesSize(void);  /* @ 004cd590 */
int SetCipherList(undefined4 *param_1,char *param_2);  /* @ 004cd5b8 */
int SendClientHello(int param_1);  /* @ 004cdb90 */
bool VerifyClientSuite(int param_1);  /* @ 004ceb90 */
uint SendClientKeyExchange(int param_1);  /* @ 004cf13c */
int SendCertificateVerify(int param_1);  /* @ 004cf6c8 */
int SendServerHello(int param_1);  /* @ 004cfd40 */
undefined4 SendServerKeyExchange(void);  /* @ 004d00e4 */
undefined4 VerifyServerSuite(int param_1,ushort param_2);  /* @ 004d0114 */
int MatchSuite(int param_1,int param_2);  /* @ 004d05f4 */
int SendServerHelloDone(int param_1);  /* @ 004d17fc */
int EmbedReceive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 004d1f98 */
int EmbedSend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);  /* @ 004d2284 */
undefined4 SetCipherSpecs(int param_1);  /* @ 004d2660 */
undefined4 SetKeysSide(int param_1,int param_2);  /* @ 004d3610 */
undefined4 StoreKeys(int param_1,int param_2);  /* @ 004d374c */
int DeriveKeys(int param_1);  /* @ 004d3978 */
undefined4 MakeMasterSecret(int param_1);  /* @ 004d41d0 */
undefined * CTaoCryptGetErrorString(int param_1);  /* @ 004d4270 */
int NmToken(int param_1);  /* @ 004de36c */
int SystemLiteral(int param_1);  /* @ 004dfe60 */
void external(int *param_1);  /* @ 004e3a70 */
void unparseable(int *param_1,byte *param_2,undefined4 param_3,uint param_4,int param_5,int param_6);  /* @ 004e6d24 */
void nbktext(int *param_1);  /* @ 004e97a8 */
int comment(int param_1);  /* @ 004f2098 */
undefined4 textnoenc(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7);  /* @ 004f9610 */
undefined4 switchD_0050f5c4::caseD_5(void);  /* @ 0050f5ec */
undefined8 switchD_00510920::caseD_5(void);  /* @ 00510968 */
void substring(undefined4 param_1);  /* @ 00518fa8 */
int xmlSAX2TextNode(int param_1,byte *param_2,int param_3);  /* @ 0051e9e0 */
void xmlSAX2AttributeNs(int param_1,char *param_2,int param_3,int param_4,char *param_5);  /* @ 0051ec84 */
void xmlSAX2StartElementNs (int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7 ,int param_8,int *param_9);  /* @ 0051eff0 */
void xmlSAX2Characters(int param_1,undefined4 param_2,uint param_3);  /* @ 0051f4e4 */
void xmlSAX2InternalSubset(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0051f778 */
void xmlSAX2ExternalSubset(int *param_1,undefined4 param_2,int param_3,int param_4);  /* @ 0051f854 */
void xmlSAX2StartDocument(int param_1);  /* @ 0051fabc */
void xmlns(int *param_1,undefined4 param_2,char *param_3);  /* @ 0051fc00 */
void MAX_ENCODING_HANDLERS(int param_1);  /* @ 005247c8 */
undefined4 mxmlElementGetAttr(int *param_1,int param_2);  /* @ 005282ec */
void mxmlElementSetAttr(int *param_1,int param_2,int param_3);  /* @ 0052840c */
undefined * integer(undefined *param_1,undefined4 param_2,code *param_3,code *param_4,code *param_5, undefined4 param_6);  /* @ 00529fbc */
void mxmlLoadString(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0052bde0 */
int mxmlSaveString(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4);  /* @ 0052bfd8 */
void mxmlRemove(int param_1);  /* @ 0052c498 */
void mxmlAdd(int param_1,int param_2,int param_3,int param_4);  /* @ 0052c4f0 */
void mxmlNewCustom(undefined4 param_1,undefined4 param_2,undefined4 param_3);  /* @ 0052c758 */
int mxmlNewElement(undefined4 param_1,int param_2);  /* @ 0052c7b4 */
void mxmlNewInteger(undefined4 param_1,undefined4 param_2);  /* @ 0052c828 */
int mxmlNewOpaque(undefined4 param_1,int param_2);  /* @ 0052c874 */
void mxmlNewReal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);  /* @ 0052c96c */
int mxmlNewText(undefined4 param_1,undefined4 param_2,int param_3);  /* @ 0052c9bc */
void mxmlDelete(int param_1);  /* @ 0052cad0 */
void mxmlNewXML(undefined *param_1);  /* @ 0052cb98 */
int mxmlRelease(int param_1);  /* @ 0052cc04 */
int mxmlWalkNext(int param_1,int param_2,int param_3);  /* @ 0052cc80 */
int * mxmlFindElement(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);  /* @ 0052ccfc */
undefined * mxmlEntityGetName(int param_1);  /* @ 0052d32c */
int mxmlEntityGetValue(undefined4 param_1);  /* @ 0052d3a0 */
undefined4 try_adjust_buf(int *param_1,int *param_2,int param_3);  /* @ 0052da74 */
void ms_sleep(uint param_1);  /* @ 0052f858 */
void __divdi3(int param_1,uint param_2,uint param_3,uint param_4);  /* @ 0052fe30 */
void __moddi3(int param_1,uint param_2,uint param_3,uint param_4);  /* @ 00530400 */
undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 005309c0 */
undefined8 __umoddi3(uint param_1,uint param_2,uint param_3,uint param_4);  /* @ 00530f40 */
void __PLT_HEAD(void);  /* @ 0054ea60 */
void printf(void);  /* @ 0054ea90 */
void exit(void);  /* @ 0054eaa0 */
void alarm(void);  /* @ 0054eab0 */
void memmove(void);  /* @ 0054ead0 */
void __sigsetjmp(void);  /* @ 0054eaf0 */
void ftruncate(void);  /* @ 0054eb00 */
void strstr(void);  /* @ 0054eb10 */
void clock_gettime(void);  /* @ 0054eb20 */
void fcntl64(void);  /* @ 0054eb40 */
void fgets(void);  /* @ 0054eb50 */
void fopen64(void);  /* @ 0054eb60 */
void close(void);  /* @ 0054eb70 */
void strchr(void);  /* @ 0054eb90 */
void siglongjmp(void);  /* @ 0054ebb0 */
void __fpclassify(void);  /* @ 0054ebd0 */
void strncmp(void);  /* @ 0054ebe0 */
void freeaddrinfo(void);  /* @ 0054ebf0 */
void strrchr(void);  /* @ 0054ec10 */
void strerror(void);  /* @ 0054ec30 */
void fputs(void);  /* @ 0054ec50 */
void modf(void);  /* @ 0054ec70 */
void unlink(void);  /* @ 0054ec80 */
void strtoll(void);  /* @ 0054ec90 */
void AES_set_encrypt_key(void);  /* @ 0054eca0 */
void __isinf(void);  /* @ 0054ecb0 */
void mmap(void);  /* @ 0054ecc0 */
void fflush(void);  /* @ 0054ece0 */
void waitpid(void);  /* @ 0054ed00 */
void memcpy(void);  /* @ 0054ed10 */
void fmod(void);  /* @ 0054ed20 */
void getsockname(void);  /* @ 0054ed30 */
void usleep(void);  /* @ 0054ed40 */
void stat64(void);  /* @ 0054ed50 */
void pclose(void);  /* @ 0054ed60 */
void recv(void);  /* @ 0054ed70 */
void tolower(void);  /* @ 0054ed90 */
void localtime(void);  /* @ 0054eda0 */
void qsort(void);  /* @ 0054edb0 */
void fstat(void);  /* @ 0054edc0 */
void fileno(void);  /* @ 0054ede0 */
void putchar(void);  /* @ 0054edf0 */
void memset(void);  /* @ 0054ee00 */
void sigaction(void);  /* @ 0054ee10 */
void getenv(void);  /* @ 0054ee20 */
void strtok_r(void);  /* @ 0054ee30 */
void __assert(void);  /* @ 0054ee40 */
void __xpg_basename(void);  /* @ 0054ee50 */
void getcwd(void);  /* @ 0054ee60 */
void freeifaddrs(void);  /* @ 0054ee70 */
void AES_cbc_encrypt(void);  /* @ 0054ee80 */
void popen(void);  /* @ 0054ee90 */
void perror(void);  /* @ 0054eeb0 */
void strncasecmp(void);  /* @ 0054eec0 */
void strcpy(void);  /* @ 0054eed0 */
void read(void);  /* @ 0054eee0 */
void system(void);  /* @ 0054eef0 */
void __signbit(void);  /* @ 0054ef00 */
void setsockopt(void);  /* @ 0054ef10 */
void sendto(void);  /* @ 0054ef20 */
void strcat(void);  /* @ 0054ef30 */
void geteuid(void);  /* @ 0054ef40 */
void if_nametoindex(void);  /* @ 0054ef60 */
void getpwuid_r(void);  /* @ 0054ef70 */
void mq_send(void);  /* @ 0054ef80 */
void atoi(void);  /* @ 0054efa0 */
void puts(void);  /* @ 0054efd0 */
void vsnprintf(void);  /* @ 0054efe0 */
void fopen(void);  /* @ 0054eff0 */
void rand_r(void);  /* @ 0054f000 */
void ferror(void);  /* @ 0054f010 */
void snprintf(void);  /* @ 0054f020 */
void fcntl(void);  /* @ 0054f030 */
void access(void);  /* @ 0054f040 */
void getpid(void);  /* @ 0054f050 */
void __glibc_strerror_r(void);  /* @ 0054f060 */
void memchr(void);  /* @ 0054f070 */
void write(void);  /* @ 0054f080 */
void strcasecmp(void);  /* @ 0054f090 */
void vfprintf(void);  /* @ 0054f0a0 */
void socket(void);  /* @ 0054f0b0 */
void gettimeofday(void);  /* @ 0054f0e0 */
void __xpg_strerror_r(void);  /* @ 0054f0f0 */
void time(void);  /* @ 0054f100 */
void fseek(void);  /* @ 0054f110 */
void strncpy(void);  /* @ 0054f120 */
void memcmp(void);  /* @ 0054f130 */
void getifaddrs(void);  /* @ 0054f140 */
void fclose(void);  /* @ 0054f150 */
void inet_ntop(void);  /* @ 0054f170 */
void getaddrinfo(void);  /* @ 0054f180 */
void pow(void);  /* @ 0054f190 */
void gai_strerror(void);  /* @ 0054f1b0 */
void lseek(void);  /* @ 0054f1e0 */
void kill(void);  /* @ 0054f1f0 */
void strtoul(void);  /* @ 0054f200 */
void open(void);  /* @ 0054f210 */
void sprintf(void);  /* @ 0054f220 */
void sleep(void);  /* @ 0054f230 */
void signal(void);  /* @ 0054f240 */
void iconv(void);  /* @ 0054f250 */
void connect(void);  /* @ 0054f260 */
void select(void);  /* @ 0054f270 */
void poll(void);  /* @ 0054f280 */
void sscanf(void);  /* @ 0054f290 */
void bind(void);  /* @ 0054f2a0 */
void strlen(void);  /* @ 0054f2b0 */
void strtol(void);  /* @ 0054f2c0 */
void rename(void);  /* @ 0054f2f0 */
void inet_pton(void);  /* @ 0054f300 */
void getsockopt(void);  /* @ 0054f310 */
void localtime_r(void);  /* @ 0054f320 */
void mq_open(void);  /* @ 0054f330 */
void getpeername(void);  /* @ 0054f340 */
void gmtime_r(void);  /* @ 0054f350 */
void __errno_location(void);  /* @ 0054f370 */
void send(void);  /* @ 0054f390 */
void strcmp(void);  /* @ 0054f3a0 */

#endif /* OSS_H */
