/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\contrib\hbtip\encurl.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIPENCODERURL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TIPENCODER );
HB_FUNC_STATIC( TIPENCODERURL_NEW );
HB_FUNC_STATIC( TIPENCODERURL_ENCODE );
HB_FUNC_STATIC( TIPENCODERURL_DECODE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TIP_URLENCODE );
HB_FUNC_EXTERN( TIP_URLDECODE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ENCURL )
{ "TIPENCODERURL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERURL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TIPENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODER )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPENCODERURL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERURL_NEW )}, NULL },
{ "TIPENCODERURL_ENCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERURL_ENCODE )}, NULL },
{ "TIPENCODERURL_DECODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPENCODERURL_DECODE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_URLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLENCODE )}, NULL },
{ "TIP_URLDECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLDECODE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ENCURL, "c:\\harbour\\contrib\\hbtip\\encurl.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ENCURL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ENCURL )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIPENCODERURL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,17,0,36,49,0,103,1,0,100,8,
		29,214,0,176,1,0,104,1,0,12,1,29,203,0,
		166,141,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,14,84,73,80,69,110,99,111,100,101,114,85,
		114,108,0,108,4,4,1,0,108,0,112,3,80,2,
		36,51,0,48,5,0,95,2,106,4,78,101,119,0,
		108,6,95,1,92,8,72,121,72,121,72,112,3,73,
		36,52,0,48,5,0,95,2,106,7,69,110,99,111,
		100,101,0,108,7,95,1,121,72,121,72,121,72,112,
		3,73,36,53,0,48,5,0,95,2,106,7,68,101,
		99,111,100,101,0,108,8,95,1,121,72,121,72,121,
		72,112,3,73,36,55,0,48,9,0,95,2,112,0,
		73,167,14,0,0,176,10,0,104,1,0,95,2,20,
		2,168,48,11,0,95,2,112,0,80,3,176,12,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,13,0,95,3,164,146,1,0,73,
		95,3,110,7,48,11,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPENCODERURL_NEW )
{
	static const HB_BYTE pcode[] =
	{
		36,59,0,48,14,0,102,106,11,117,114,108,101,110,
		99,111,100,101,100,0,112,1,73,36,61,0,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPENCODERURL_ENCODE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,64,0,176,15,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPENCODERURL_DECODE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,67,0,176,16,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,17,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

