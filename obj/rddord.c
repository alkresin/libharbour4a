/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rdd\rddord.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( DBCREATEINDEX );
HB_FUNC_EXTERN( ORDCREATE );
HB_FUNC( DBSETINDEX );
HB_FUNC_EXTERN( ORDLISTADD );
HB_FUNC( DBCLEARINDEX );
HB_FUNC_EXTERN( ORDLISTCLEAR );
HB_FUNC( DBREINDEX );
HB_FUNC_EXTERN( ORDLISTREBUILD );
HB_FUNC( DBSETORDER );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC( INDEXEXT );
HB_FUNC_EXTERN( ORDBAGEXT );
HB_FUNC( INDEXKEY );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( ORDKEY );
HB_FUNC_EXTERN( USED );
HB_FUNC( ORDSETRELATION );
HB_FUNC_EXTERN( DBSETRELATION );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RDDORD )
{ "DBCREATEINDEX", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( DBCREATEINDEX )}, NULL },
{ "ORDCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCREATE )}, NULL },
{ "DBSETINDEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBSETINDEX )}, NULL },
{ "ORDLISTADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDLISTADD )}, NULL },
{ "DBCLEARINDEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBCLEARINDEX )}, NULL },
{ "ORDLISTCLEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDLISTCLEAR )}, NULL },
{ "DBREINDEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBREINDEX )}, NULL },
{ "ORDLISTREBUILD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDLISTREBUILD )}, NULL },
{ "DBSETORDER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBSETORDER )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "INDEXEXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INDEXEXT )}, NULL },
{ "ORDBAGEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDBAGEXT )}, NULL },
{ "INDEXKEY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INDEXKEY )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDKEY )}, NULL },
{ "USED", {HB_FS_PUBLIC}, {HB_FUNCNAME( USED )}, NULL },
{ "ORDSETRELATION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ORDSETRELATION )}, NULL },
{ "DBSETRELATION", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSETRELATION )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RDDORD, "c:\\harbour\\src\\rdd\\rddord.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RDDORD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RDDORD )
   #include "hbiniseg.h"
#endif

HB_FUNC( DBCREATEINDEX )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,52,0,176,1,0,95,1,95,5,95,
		2,95,3,95,4,20,5,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DBSETINDEX )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,55,0,176,3,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DBCLEARINDEX )
{
	static const HB_BYTE pcode[] =
	{
		36,58,0,176,5,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DBREINDEX )
{
	static const HB_BYTE pcode[] =
	{
		36,61,0,176,7,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DBSETORDER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,65,0,176,9,0,95,1,12,1,28,
		28,176,10,0,176,11,0,95,1,12,1,12,1,31,
		14,36,66,0,176,11,0,95,1,12,1,80,1,36,
		69,0,176,12,0,95,1,20,1,36,71,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( INDEXEXT )
{
	static const HB_BYTE pcode[] =
	{
		36,74,0,176,14,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( INDEXKEY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,78,0,176,16,0,95,1,12,1,31,
		13,36,79,0,176,17,0,95,1,20,1,7,36,82,
		0,176,18,0,12,0,28,13,36,83,0,176,17,0,
		95,1,20,1,7,36,86,0,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ORDSETRELATION )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,89,0,176,20,0,95,1,95,2,95,
		3,120,20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

