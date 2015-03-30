@set NDK_HOME=e:\Android\android-ndk-r10d
@set NDK_LIBS_OUT=lib

@set HARBOUR_DIR=\harbour
@set HC_DIR=obj/android/gccarm
@set LETO_DIR=\papps\letodb

@set VM=%HARBOUR_DIR%\src\vm
@set RDD=%HARBOUR_DIR%\src\rdd
@set RTL=%HARBOUR_DIR%\src\rtl
@set TIP=%HARBOUR_DIR%\contrib\hbtip

@set PRGLIST=%VM%\harbinit.prg %RDD%\dbstrux.prg %RDD%\rddsys.prg %RDD%\rddord.prg %RDD%\hbsix\sxcompat.prg %RDD%\hbsix\sxtrig.prg
%HARBOUR_DIR%\bin\harbour.exe %PRGLIST% -n -w -i%HARBOUR_DIR%\include -oobj\

@set PRGLIST=%RTL%\adir.prg %RTL%\hbfilehi.prg %RTL%\hbini.prg %RTL%\memvarhb.prg %RTL%\objfunc.prg %RTL%\tclass.prg %RTL%\tobject.prg %RTL%\valtoexp.prg
%HARBOUR_DIR%\bin\harbour.exe %PRGLIST% -n -w -i%HARBOUR_DIR%\include -oobj\

@set PRGLIST=%TIP%\cgi.prg %TIP%\client.prg %TIP%\credent.prg %TIP%\encb64.prg %TIP%\encoder.prg %TIP%\encqp.prg %TIP%\encurl.prg %TIP%\ftpcli.prg %TIP%\httpcli.prg %TIP%\log.prg %TIP%\mail.prg %TIP%\popcli.prg %TIP%\sendmail.prg %TIP%\sessid.prg %TIP%\smtpcli.prg %TIP%\thtml.prg %TIP%\url.prg
%HARBOUR_DIR%\bin\harbour.exe %PRGLIST% -n -w -i%HARBOUR_DIR%\include;%HARBOUR_DIR%\contrib\hbssl -oobj\

%NDK_HOME%\prebuilt\windows\bin\make.exe -f %NDK_HOME%/build/core/build-local.mk %* >a1.out 2>a2.out