# libharbour4a
Just a set of makefiles to build libharbour.so with Android NDK tools.

<b> Attention! Since October 6, 2023 we are forced to use two-factor authentication to be able to
   update the repository. Because it's not suitable for me, I will probably use another place for projects.
   Maybe, https://gitflic.ru/, maybe, Sourceforge... Follow the news on my website, http://www.kresin.ru/

   Внимание! С 6 октября 2023 года нас вынуждают использовать двухфакторную идентификацию для того, чтобы 
   продолжать работать над проектами. Поскольку для меня это крайне неудобно, я, возможно, переведу проекты
   на другое место. Это может быть https://gitflic.ru/, Sourceforge, или что-то еще. Следите за новостями
   на моем сайте http://www.kresin.ru/ </b>

The base list of Harbour sources was borrowed from http://code.google.com/p/fivedroid/wiki/BuildingHarbourFromEclipseWindows
, reworked and expanded. I was forced to exclude some 
codepages from the build, because there is a known problem with the size of the list under Windows.
In fact, for Android development most of codepage files may be needed only for the data in dbfs.
The codepage of an application must be the utf-8.

To build your copy of libharbour.so you will need to change some paths in the ndkBuild.bat or ndkbuild.sh.
