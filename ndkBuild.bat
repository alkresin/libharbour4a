@set ANDROID_HOME=\android\sdk
@set NDK_HOME=%ANDROID_HOME%\ndk\21.3.6528147
@set NDK_LIBS_OUT=lib

@set NDK_PLATFORM=android-19
@set NDK_TARGET=armeabi-v7a

@set HARBOUR_DIR=../hrb
@set HARBOUR_INC=hrb

%NDK_HOME%\prebuilt\windows-x86_64\bin\make.exe -f %NDK_HOME%/build/core/build-local.mk %* >a1.out 2>a2.out
@rem %NDK_HOME%\prebuilt\windows\bin\make.exe -f %NDK_HOME%/build/core/build-local.mk %* >a1.out 2>a2.out