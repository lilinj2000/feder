#! /bin/sh

home_libs=~/libs

if test -d /llj/libs ; then
   home_libs=/llj/libs
fi

home_feder=${home_libs}/feder

./configure --prefix=${home_feder}

if test -d ${home_feder}; then
    rm -rf ${home_feder}
fi

make install

make distclean
