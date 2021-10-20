#!/bin/bash

export NDK_HOME=~/apps/android/sdk/ndk/21.3.6528147
export NDK_LIBS_OUT=lib

export HARBOUR_DIR=../hrb
export HARBOUR_INC=hrb

export NDK_PLATFORM=android-19
export NDK_TARGET=armeabi-v7a

$NDK_HOME/prebuilt/linux-x86_64/bin/make -f $NDK_HOME/build/core/build-local.mk "$@" >a1.out 2>a2.out