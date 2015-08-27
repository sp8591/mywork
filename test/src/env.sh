#!/bin/sh
dir=$(cd .. ;pwd)
echo ${dir}
export LD_LIBRARY_PATH=${dir}/lib
echo ${LD_LIBRARY_PATH}
