#!/bin/sh

cp include-frama-c/*.h `frama-c-config -print-share-path`/libc/

MAIN=`egrep -o [a-zA-Z0-9_]+_main $1`

frama-c-gui -cpp-extra-args="-I include" -warn-decimal-float none \
    $* -main $MAIN -val

# Options?:
# -nonterm -> endless_loop.c
# -warn-signed-downcast -> sign_conv.c # requires trunk
# -warn-unsigned-downcast -> sign_conv.c # requires trunk
