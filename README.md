# libharbour4a
Just a set of makefiles to build libharbour.so with Android NDK tools.

The base list of Harbour sources was borrowed from http://code.google.com/p/fivedroid/wiki/BuildingHarbourFromEclipseWindows
, reworked and expanded. I was forced to exclude some 
codepages from the build, because there is a known problem with the size of the list under Windows.
In fact, for Android development most of codepage files may be needed only for the data in dbfs.
The codepage of an application must be the utf-8.

To build your copy of libharbour.so you will need to change some paths in the ndkBuild.bat or ndkbuild.sh.
