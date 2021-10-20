/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rtl\tobject.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HBOBJECT );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( __OBJDERIVEDFROM );
HB_FUNC_STATIC( HBOBJECT_NEW );
HB_FUNC_STATIC( HBOBJECT_INIT );
HB_FUNC_STATIC( HBOBJECT_ERROR );
HB_FUNC_STATIC( HBOBJECT_DFTONERROR );
HB_FUNC_EXTERN( HB_LEFTEQ );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __GETMESSAGE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( __ERRRT_SBASE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TOBJECT )
{ "HBOBJECT", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJDERIVEDFROM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJDERIVEDFROM )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBOBJECT_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBOBJECT_NEW )}, NULL },
{ "HBOBJECT_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBOBJECT_INIT )}, NULL },
{ "HBOBJECT_ERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBOBJECT_ERROR )}, NULL },
{ "SETONERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBOBJECT_DFTONERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBOBJECT_DFTONERROR )}, NULL },
{ "ERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_LEFTEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LEFTEQ )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGNOTFOUND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GETMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETMESSAGE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "__ERRRT_SBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ERRRT_SBASE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TOBJECT, "c:\\harbour\\src\\rtl\\tobject.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TOBJECT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TOBJECT )
   #include "hbiniseg.h"
#endif

HB_FUNC( HBOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,116,23,0,36,58,0,103,1,0,100,8,
		29,75,1,176,1,0,104,1,0,12,1,29,64,1,
		36,60,0,166,40,1,0,36,62,0,48,2,0,176,
		3,0,12,0,106,9,72,66,79,98,106,101,99,116,
		0,100,108,0,112,3,80,1,36,65,0,48,4,0,
		95,1,106,14,73,83,68,69,82,73,86,69,68,70,
		82,79,77,0,89,17,0,2,0,0,0,176,5,0,
		95,1,95,2,12,2,6,122,112,3,73,36,68,0,
		48,4,0,95,1,106,9,73,83,75,73,78,68,79,
		70,0,89,17,0,2,0,0,0,176,5,0,95,1,
		95,2,12,2,6,122,112,3,73,36,70,0,48,6,
		0,95,1,106,4,78,69,87,0,108,7,122,112,3,
		73,36,71,0,48,6,0,95,1,106,5,73,78,73,
		84,0,108,8,122,112,3,73,36,73,0,48,6,0,
		95,1,106,6,69,82,82,79,82,0,108,9,122,112,
		3,73,36,75,0,48,10,0,95,1,108,11,112,1,
		73,36,77,0,48,4,0,95,1,106,12,77,83,71,
		78,79,84,70,79,85,78,68,0,89,65,0,2,0,
		0,0,48,12,0,95,1,106,18,77,101,115,115,97,
		103,101,32,110,111,116,32,102,111,117,110,100,0,48,
		13,0,95,1,112,0,95,2,176,14,0,95,2,106,
		2,95,0,12,2,28,7,93,237,3,25,5,93,236,
		3,112,4,6,122,112,3,73,36,113,0,48,15,0,
		95,1,112,0,73,167,17,0,0,36,117,0,176,16,
		0,104,1,0,95,1,20,2,168,36,130,0,48,17,
		0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBOBJECT_NEW )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,36,134,0,48,18,0,102,164,146,1,0,
		73,36,136,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBOBJECT_INIT )
{
	static const HB_BYTE pcode[] =
	{
		36,139,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBOBJECT_DFTONERROR )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,36,142,0,48,19,0,102,176,20,0,12,
		0,122,164,146,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBOBJECT_ERROR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,146,0,176,21,0,96,4,0,93,236,
		3,20,2,36,148,0,176,22,0,95,4,93,237,3,
		8,28,6,92,16,25,4,92,13,95,4,95,1,95,
		2,106,2,58,0,72,95,3,72,122,102,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,23,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

