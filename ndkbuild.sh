#!/bin/bash

export NDK_HOME=/apps/android/android-ndk-r10d
export NDK_LIBS_OUT=lib

export HARBOUR_DIR=/apps/harbour
export HC_DIR=obj/linux/gcc
export LETO_DIR=/apps/harbour/letodb

VM=$HARBOUR_DIR/src/vm
RDD=$HARBOUR_DIR/src/rdd
RTL=$HARBOUR_DIR/src/rtl
TIP=$HARBOUR_DIR/contrib/hbtip

PRGLIST=$VM/harbinit.prg $RDD/dbstrux.prg $RDD/rddsys.prg $RDD/rddord.prg $RDD/hbsix/sxcompat.prg $RDD/hbsix/sxtrig.prg
$HARBOUR_DIR/bin/harbour %PRGLIST% -n -w -i%HARBOUR_DIR%/include -oobj/

PRGLIST=$RTL/adir.prg $RTL/hbfilehi.prg $RTL/hbini.prg $RTL/memvarhb.prg $RTL/objfunc.prg $RTL/tclass.prg $RTL/tobject.prg $RTL/valtoexp.prg
$HARBOUR_DIR/bin/harbour %PRGLIST% -n -w -i%HARBOUR_DIR%/include -oobj/

PRGLIST=$TIP/cgi.prg $TIP/client.prg $TIP/credent.prg $TIP/encb64.prg $TIP/encoder.prg $TIP/encqp.prg $TIP/encurl.prg $TIP/ftpcli.prg $TIP/httpcli.prg $TIP/log.prg $TIP/mail.prg $TIP/popcli.prg $TIP/sendmail.prg $TIP/sessid.prg $TIP/smtpcli.prg $TIP/thtml.prg $TIP/url.prg
$HARBOUR_DIR/bin/harbour %PRGLIST% -n -w -i%HARBOUR_DIR%/include;%HARBOUR_DIR%/contrib/hbssl -oobj/

$NDK_HOME/prebuilt/linux-x86/bin/make -f $NDK_HOME/build/core/build-local.mk "$@" >a1.out 2>a2.out