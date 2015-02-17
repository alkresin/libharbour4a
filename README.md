# libharbour4a
Just a set of makefiles to build libharbour.so with Android NDK tools.

The base list of Harbour sources was borrowed from http://code.google.com/p/fivedroid/wiki/BuildingHarbourFromEclipseWindows
, reworked and expanded, Leto RDD files have been added. I was forced to exclude some 
codepages from the build, because there is a known problem with the size of the list under Windows.
In fact, for Android development most of codepage files may be needed only for the data in dbfs.
The codepage of an application must be the utf-8.

To build your copy of libharbour.so you will need to change some paths in the ndkBuild.bat.
The HC_DIR variable is the relative path to the compiled Harbour sources, where .o, .obj, .c ( compiled from prg ) are placed.
It depends of the compiler and platform you use to build Harbour. For example, if you use the Borland C compiler under Windows,
this path will be obj/win/bcc, for Linux it is usually obj/linux/gcc.

