@set NDK_HOME=e:\Android\android-ndk-r10d
@set NDK_LIBS_OUT=lib

@set HARBOUR_DIR=c:/harbour
@set HC_DIR=obj/android/gccarm
@set LETO_DIR=c:/papps/letodb

%NDK_HOME%\prebuilt\windows\bin\make.exe -f %NDK_HOME%/build/core/build-local.mk %* >a1.out 2>a2.out