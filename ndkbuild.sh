#!/bin/bash

export NDK_HOME=/apps/android/android-ndk-r10d
export NDK_LIBS_OUT=lib

export HARBOUR_DIR=/apps/harbour
export HC_DIR=obj/linux/gcc
export LETO_DIR=/apps/harbour/letodb

$NDK_HOME/prebuilt/linux-x86/bin/make -f $NDK_HOME/build/core/build-local.mk "$@" >a1.out 2>a2.out