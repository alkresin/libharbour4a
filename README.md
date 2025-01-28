# libharbour4a
Just a set of makefiles to build libharbour.so with Android NDK tools.

The base list of Harbour sources was borrowed from http://code.google.com/p/fivedroid/wiki/BuildingHarbourFromEclipseWindows
, reworked and expanded. I was forced to exclude some 
codepages from the build, because there is a known problem with the size of the list under Windows.
In fact, for Android development most of codepage files may be needed only for the data in dbfs.
The codepage of an application must be the utf-8.

To build your copy of libharbour.so you will need to change some paths in the ndkBuild.bat or ndkbuild.sh.

<b> Attention! Since October 6, 2023, we have been forced to use two-factor identification in order to 
   log in to github.com under your account. I can still do <i>git push</i> from the command line, but I can't
   use other services, for example, to answer questions. That's why I'm opening new projects on 
   https://gitflic.ru /, Sourceforge, or somewhere else. Follow the news on my website http://www.kresin.ru/

   Внимание! С 6 октября 2023 года нас вынуждили использовать двухфакторную идентификацию для того, чтобы 
   входить на github.com под своим аккаунтом. Я пока могу делать <i>git push<i> из командной строки, но не могу
   использовать другие сервисы, например, отвечать на вопросы. Поэтому новые проекты я открываю на 
   https://gitflic.ru/, Sourceforge, или где-то еще. Следите за новостями на моем сайте http://www.kresin.ru/ </b>
