#!/bin/bash
#  get parent dir
if [ "$#" -ne 4 ]; then
    echo "Usage: $0 <executable> <core_file> <path_to_rsdk> <solib_path>"
    exit 1
fi
if [ ! -f "$1" ]; then
    echo "Executable file $1 does not exist."
    exit 1
fi
if [ ! -f "$2" ]; then
    echo "Core file $2 does not exist."
    exit 1
fi
if [ ! -d "$4" ]; then
    echo "Solib path $4 does not exist."
    exit 1
fi


sysroot="$3/mips-linux-uclibc"
gdb_path="$3bin/mips-linux-uclibc-gdb"

echo "Using solib path: $4"
echo "Using sysroot: $sysroot"

$gdb_path \
 --init-eval-command="set solib-search-path $3" \
 --init-eval-command="set sysroot $sysroot" \
 --se=$1 --core=$2 --batch
