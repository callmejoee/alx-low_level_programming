#!/bin/bash
wget /tmp https://github.com/callmejoee/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librand.so
export  LD_PRELOAD= /tmp/librand.so ./gm
