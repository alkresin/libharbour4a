/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rdd\hbsix\sxcompat.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SXCHAR );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( HB_TTOS );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC( SXNUM );
HB_FUNC_EXTERN( VAL );
HB_FUNC( SXDATE );
HB_FUNC_EXTERN( HB_TTOD );
HB_FUNC_EXTERN( CTOD );
HB_FUNC( SXLOG );
HB_FUNC( SX_COMPRESS );
HB_FUNC_EXTERN( _SX_STRCOMPRESS );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC( SX_DECOMPRESS );
HB_FUNC_EXTERN( _SX_STRDECOMPRESS );
HB_FUNC( SX_TAGINFO );
HB_FUNC_EXTERN( USED );
HB_FUNC_EXTERN( ORDCOUNT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( DBORDERINFO );
HB_FUNC_EXTERN( ORDNAME );
HB_FUNC_EXTERN( ORDKEY );
HB_FUNC_EXTERN( ORDFOR );
HB_FUNC_EXTERN( ORDISUNIQUE );
HB_FUNC_EXTERN( ORDDESCEND );
HB_FUNC_EXTERN( ORDCUSTOM );
HB_FUNC( SX_TAGCOUNT );
HB_FUNC_EXTERN( SX_TAGORDER );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC( SX_TAGS );
HB_FUNC_EXTERN( ORDNUMBER );
HB_FUNC_EXTERN( AADD );
HB_FUNC( SX_SETTAG );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC( SX_KILLTAG );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( SX_INDEXNAME );
HB_FUNC_EXTERN( ORDBAGCLEAR );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( ORDDESTROY );
HB_FUNC( SX_FILEORDER );
HB_FUNC( SX_SETFILEORD );
HB_FUNC( RDD_COUNT );
HB_FUNC_EXTERN( RDDLIST );
HB_FUNC( RDD_NAME );
HB_FUNC( RDD_INFO );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( RDDNAME );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( RDDSETDEFAULT );
HB_FUNC_EXTERN( HB_RDDINFO );
HB_FUNC( SX_ISDBT );
HB_FUNC( SX_MEMOEXT );
HB_FUNC( SX_MEMOBLK );
HB_FUNC( SX_SETMEMOBLOCK );
HB_FUNC( SX_STRXCHECK );
HB_FUNC( SX_LOCKRETRY );
HB_FUNC( SX_AUTOOPEN );
HB_FUNC( SX_AUTOSHARE );
HB_FUNC( SX_BLOB2FILE );
HB_FUNC_EXTERN( DBFILEGET );
HB_FUNC( SX_FILE2BLOB );
HB_FUNC_EXTERN( HB_BITAND );
HB_FUNC_EXTERN( HB_BITOR );
HB_FUNC_EXTERN( DBFILEPUT );
HB_FUNC( SX_DBCREATE );
HB_FUNC_EXTERN( ACLONE );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC( SX_VSIGLEN );
HB_FUNC_EXTERN( FIELDPOS );
HB_FUNC_EXTERN( FCOUNT );
HB_FUNC_EXTERN( FIELDLEN );
HB_FUNC_EXTERN( FIELDTYPE );
HB_FUNC( SX_VFGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC( SX_ISLOCKED );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( SX_RLOCK );
HB_FUNC_EXTERN( SX_UNLOCK );
HB_FUNC( SX_SETTRIGGER );
HB_FUNC_EXTERN( DBINFO );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SXCOMPAT )
{ "SXCHAR", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SXCHAR )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "HB_TTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TTOS )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "SXNUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SXNUM )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SXDATE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SXDATE )}, NULL },
{ "HB_TTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TTOD )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SXLOG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SXLOG )}, NULL },
{ "SX_COMPRESS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_COMPRESS )}, NULL },
{ "_SX_STRCOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( _SX_STRCOMPRESS )}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "SX_DECOMPRESS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_DECOMPRESS )}, NULL },
{ "_SX_STRDECOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( _SX_STRDECOMPRESS )}, NULL },
{ "SX_TAGINFO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_TAGINFO )}, NULL },
{ "USED", {HB_FS_PUBLIC}, {HB_FUNCNAME( USED )}, NULL },
{ "ORDCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCOUNT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "DBORDERINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBORDERINFO )}, NULL },
{ "ORDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDNAME )}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDKEY )}, NULL },
{ "ORDFOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDFOR )}, NULL },
{ "ORDISUNIQUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDISUNIQUE )}, NULL },
{ "ORDDESCEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDDESCEND )}, NULL },
{ "ORDCUSTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCUSTOM )}, NULL },
{ "SX_TAGCOUNT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_TAGCOUNT )}, NULL },
{ "SX_TAGORDER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SX_TAGORDER )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SX_TAGS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_TAGS )}, NULL },
{ "ORDNUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDNUMBER )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "SX_SETTAG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_SETTAG )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "SX_KILLTAG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_KILLTAG )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "SX_INDEXNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SX_INDEXNAME )}, NULL },
{ "ORDBAGCLEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDBAGCLEAR )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "ORDDESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDDESTROY )}, NULL },
{ "SX_FILEORDER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_FILEORDER )}, NULL },
{ "SX_SETFILEORD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_SETFILEORD )}, NULL },
{ "RDD_COUNT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RDD_COUNT )}, NULL },
{ "RDDLIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDLIST )}, NULL },
{ "RDD_NAME", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RDD_NAME )}, NULL },
{ "RDD_INFO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RDD_INFO )}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "RDDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDNAME )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "RDDSETDEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDSETDEFAULT )}, NULL },
{ "HB_RDDINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RDDINFO )}, NULL },
{ "SX_ISDBT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_ISDBT )}, NULL },
{ "SX_MEMOEXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_MEMOEXT )}, NULL },
{ "SX_MEMOBLK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_MEMOBLK )}, NULL },
{ "SX_SETMEMOBLOCK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_SETMEMOBLOCK )}, NULL },
{ "SX_STRXCHECK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_STRXCHECK )}, NULL },
{ "SX_LOCKRETRY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_LOCKRETRY )}, NULL },
{ "SX_AUTOOPEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_AUTOOPEN )}, NULL },
{ "SX_AUTOSHARE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_AUTOSHARE )}, NULL },
{ "SX_BLOB2FILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_BLOB2FILE )}, NULL },
{ "DBFILEGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFILEGET )}, NULL },
{ "SX_FILE2BLOB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_FILE2BLOB )}, NULL },
{ "HB_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITAND )}, NULL },
{ "HB_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITOR )}, NULL },
{ "DBFILEPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFILEPUT )}, NULL },
{ "SX_DBCREATE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_DBCREATE )}, NULL },
{ "ACLONE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACLONE )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "SX_VSIGLEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_VSIGLEN )}, NULL },
{ "FIELDPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDPOS )}, NULL },
{ "FCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCOUNT )}, NULL },
{ "FIELDLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDLEN )}, NULL },
{ "FIELDTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDTYPE )}, NULL },
{ "SX_VFGET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_VFGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "SX_ISLOCKED", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_ISLOCKED )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "SX_RLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SX_RLOCK )}, NULL },
{ "SX_UNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SX_UNLOCK )}, NULL },
{ "SX_SETTRIGGER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SX_SETTRIGGER )}, NULL },
{ "DBINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBINFO )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SXCOMPAT, "c:\\harbour\\src\\rdd\\hbsix\\sxcompat.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SXCOMPAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SXCOMPAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( SXCHAR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,86,0,26,99,0,26,149,0,36,91,
		0,176,1,0,95,2,12,1,80,2,26,134,0,36,
		94,0,176,2,0,95,2,12,1,80,2,26,119,0,
		36,97,0,176,3,0,95,2,12,1,80,2,25,104,
		36,100,0,95,2,28,8,106,2,84,0,25,6,106,
		2,70,0,80,2,25,83,36,103,0,176,4,0,95,
		1,12,1,28,7,106,1,0,25,9,176,5,0,92,
		10,12,1,80,2,25,55,176,6,0,95,2,12,1,
		133,7,0,106,2,67,0,26,146,255,106,2,77,0,
		26,139,255,106,2,78,0,26,135,255,106,2,68,0,
		26,143,255,106,2,84,0,25,151,106,2,76,0,25,
		159,100,25,177,36,107,0,176,4,0,95,1,12,1,
		28,21,36,108,0,176,7,0,176,8,0,95,2,12,
		1,95,1,12,2,80,2,36,111,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SXNUM )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,115,0,25,66,26,113,0,36,120,0,
		176,10,0,95,1,12,1,80,1,25,98,36,124,0,
		96,1,0,134,0,0,0,0,136,25,84,36,127,0,
		95,1,28,5,122,25,3,121,80,1,25,69,36,130,
		0,101,0,0,0,0,0,0,0,0,10,2,80,1,
		25,51,176,6,0,95,1,12,1,133,7,0,106,2,
		78,0,25,178,106,2,67,0,25,175,106,2,77,0,
		25,169,106,2,84,0,25,177,106,2,68,0,25,171,
		106,2,76,0,25,179,100,25,191,36,134,0,95,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SXDATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,138,0,25,59,25,100,36,142,0,176,
		12,0,95,1,12,1,80,1,25,86,36,146,0,176,
		13,0,95,1,12,1,80,1,25,72,36,149,0,134,
		0,0,0,0,95,1,72,80,1,25,57,36,152,0,
		134,0,0,0,0,80,1,25,45,176,6,0,95,1,
		12,1,133,6,0,106,2,68,0,25,185,106,2,84,
		0,25,181,106,2,67,0,25,189,106,2,77,0,25,
		183,106,2,78,0,25,191,100,25,203,36,156,0,95,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SXLOG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,160,0,25,111,26,147,0,36,165,0,
		25,18,36,168,0,120,80,1,25,74,36,171,0,9,
		80,1,25,66,95,1,133,9,0,106,2,84,0,25,
		231,106,2,116,0,25,225,106,2,89,0,25,219,106,
		2,121,0,25,213,106,4,46,84,46,0,25,205,106,
		4,46,116,46,0,25,197,106,4,46,89,46,0,25,
		189,106,4,46,121,46,0,25,181,100,25,186,25,59,
		36,176,0,95,1,121,69,80,1,25,48,36,179,0,
		9,80,1,25,40,176,6,0,95,1,12,1,133,5,
		0,106,2,76,0,25,133,106,2,67,0,25,130,106,
		2,77,0,26,124,255,106,2,78,0,25,204,100,25,
		212,36,183,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_COMPRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,189,0,25,70,36,192,0,176,16,0,
		95,1,20,1,7,36,194,0,176,17,0,176,18,0,
		95,1,12,1,12,1,80,2,36,195,0,176,19,0,
		95,1,89,23,0,2,0,1,0,2,0,176,15,0,
		95,1,12,1,165,95,255,95,2,2,6,20,2,36,
		196,0,95,2,110,7,176,6,0,95,1,12,1,133,
		3,0,106,2,67,0,25,174,106,2,77,0,25,168,
		106,2,65,0,25,173,36,199,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_DECOMPRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,205,0,25,70,36,208,0,176,21,0,
		95,1,20,1,7,36,210,0,176,17,0,176,18,0,
		95,1,12,1,12,1,80,2,36,211,0,176,19,0,
		95,1,89,23,0,2,0,1,0,2,0,176,20,0,
		95,1,12,1,165,95,255,95,2,2,6,20,2,36,
		212,0,95,2,110,7,176,6,0,95,1,12,1,133,
		3,0,106,2,67,0,25,174,106,2,77,0,25,168,
		106,2,65,0,25,173,36,215,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_TAGINFO )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,221,0,176,23,0,12,0,29,212,0,
		176,24,0,95,1,12,1,165,80,3,121,15,29,197,
		0,36,222,0,176,17,0,95,3,92,6,12,2,80,
		2,36,223,0,176,25,0,95,1,12,1,28,29,36,
		224,0,176,26,0,92,113,95,1,12,2,80,4,36,
		225,0,96,3,0,95,4,122,49,135,25,8,36,227,
		0,122,80,4,36,229,0,95,4,165,80,5,25,115,
		36,230,0,176,27,0,95,5,12,1,95,2,95,5,
		1,122,2,36,231,0,176,28,0,95,5,12,1,95,
		2,95,5,1,92,2,2,36,232,0,176,29,0,95,
		5,12,1,95,2,95,5,1,92,3,2,36,233,0,
		176,30,0,95,5,12,1,95,2,95,5,1,92,4,
		2,36,234,0,176,31,0,95,5,12,1,95,2,95,
		5,1,92,5,2,36,235,0,176,32,0,95,5,12,
		1,95,2,95,5,1,92,6,2,36,229,0,175,5,
		0,95,3,15,28,140,36,237,0,95,2,110,7,36,
		240,0,4,0,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_TAGCOUNT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,244,0,121,80,2,36,246,0,176,23,
		0,12,0,28,115,36,248,0,176,4,0,95,1,12,
		1,28,37,36,249,0,176,34,0,122,95,1,12,2,
		165,80,4,121,69,28,61,36,250,0,176,26,0,92,
		20,100,95,4,12,3,80,3,25,44,36,252,0,176,
		25,0,95,1,12,1,28,20,176,35,0,95,1,12,
		1,31,11,36,253,0,95,1,80,3,25,14,36,255,
		0,176,26,0,92,20,12,1,80,3,36,1,1,176,
		35,0,95,3,12,1,31,14,36,2,1,176,24,0,
		95,3,12,1,80,2,36,6,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_TAGS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,10,1,4,0,0,80,2,36,12,1,
		176,23,0,12,0,29,140,0,36,14,1,176,4,0,
		95,1,12,1,28,17,36,15,1,176,34,0,122,95,
		1,12,2,80,3,25,49,36,16,1,176,25,0,95,
		1,12,1,28,27,176,35,0,95,1,12,1,31,18,
		36,17,1,176,26,0,92,113,95,1,12,2,80,3,
		25,12,36,19,1,176,37,0,12,0,80,3,36,21,
		1,95,3,121,69,28,56,36,22,1,176,24,0,176,
		26,0,92,20,100,95,3,12,3,12,1,80,4,36,
		23,1,173,4,0,95,4,121,16,28,24,36,24,1,
		176,38,0,95,2,176,27,0,95,3,174,3,0,12,
		1,20,2,25,224,36,29,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_SETTAG )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,36,33,1,9,80,3,121,80,4,36,35,
		1,176,23,0,12,0,29,114,1,176,6,0,95,1,
		12,1,106,3,67,78,0,24,29,98,1,36,36,1,
		176,4,0,95,1,12,1,28,113,36,37,1,176,35,
		0,95,2,12,1,31,17,176,6,0,95,2,12,1,
		106,3,67,78,0,24,31,12,36,38,1,95,1,80,
		4,26,217,0,36,39,1,176,25,0,95,2,12,1,
		28,47,36,40,1,95,1,122,16,29,195,0,95,1,
		176,24,0,95,2,12,1,34,29,182,0,36,41,1,
		176,26,0,92,113,95,2,12,2,95,1,72,122,49,
		80,4,26,160,0,36,44,1,176,34,0,95,1,95,
		2,12,2,80,4,26,143,0,36,47,1,176,35,0,
		95,2,12,1,31,17,176,6,0,95,2,12,1,106,
		3,67,78,0,24,31,16,36,48,1,176,37,0,95,
		1,12,1,80,4,25,101,36,49,1,176,25,0,95,
		2,12,1,28,18,36,50,1,176,34,0,95,1,95,
		2,12,2,80,4,25,73,36,52,1,176,34,0,122,
		95,2,12,2,80,4,36,53,1,95,4,121,69,28,
		51,36,54,1,176,26,0,92,20,100,95,4,12,3,
		80,6,36,55,1,176,35,0,95,6,12,1,28,10,
		36,56,1,121,80,4,25,16,36,58,1,176,34,0,
		95,1,95,6,12,2,80,4,36,63,1,95,4,121,
		69,28,54,36,64,1,176,37,0,12,0,80,5,36,
		65,1,176,40,0,95,4,20,1,36,66,1,95,4,
		176,37,0,12,0,8,80,3,36,67,1,95,3,31,
		41,36,68,1,176,40,0,95,5,20,1,25,29,36,
		70,1,176,35,0,95,1,12,1,28,17,36,71,1,
		176,40,0,121,20,1,36,72,1,120,80,3,36,76,
		1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_KILLTAG )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,80,1,9,80,3,36,82,1,176,42,
		0,95,1,12,1,29,155,0,36,83,1,95,1,29,
		178,1,36,85,1,176,35,0,95,2,12,1,28,14,
		36,86,1,176,43,0,12,0,80,5,25,79,36,87,
		1,176,4,0,95,2,12,1,28,17,36,88,1,176,
		43,0,122,95,2,12,2,80,5,25,52,36,89,1,
		176,25,0,95,2,12,1,28,40,36,90,1,176,26,
		0,92,113,95,2,12,2,80,4,36,91,1,95,4,
		121,69,28,17,36,92,1,176,26,0,92,20,100,95,
		4,12,3,80,5,36,95,1,176,35,0,95,5,12,
		1,32,64,1,36,96,1,176,44,0,95,5,12,1,
		28,17,36,97,1,176,45,0,95,5,12,1,92,255,
		69,80,3,26,34,1,36,102,1,176,4,0,95,1,
		12,1,28,120,36,103,1,176,35,0,95,2,12,1,
		31,17,176,6,0,95,2,12,1,106,3,67,78,0,
		24,31,12,36,104,1,95,1,80,4,26,220,0,36,
		105,1,176,25,0,95,2,12,1,28,54,36,106,1,
		95,1,122,16,28,36,95,1,176,24,0,95,2,12,
		1,34,28,24,36,107,1,176,26,0,92,113,95,2,
		12,2,95,1,72,122,49,80,4,26,165,0,36,109,
		1,121,80,4,26,156,0,36,112,1,176,34,0,95,
		1,95,2,12,2,80,4,26,139,0,36,115,1,176,
		35,0,95,2,12,1,31,17,176,6,0,95,2,12,
		1,106,3,67,78,0,24,31,16,36,116,1,176,37,
		0,95,1,12,1,80,4,25,97,36,117,1,176,25,
		0,95,2,12,1,28,18,36,118,1,176,34,0,95,
		1,95,2,12,2,80,4,25,69,36,120,1,176,34,
		0,122,95,2,12,2,165,80,4,121,69,28,51,36,
		121,1,176,26,0,92,20,100,95,4,12,3,80,5,
		36,122,1,176,35,0,95,5,12,1,28,10,36,123,
		1,121,80,4,25,16,36,125,1,176,34,0,95,1,
		95,5,12,2,80,4,36,130,1,95,4,121,69,28,
		14,36,131,1,176,46,0,95,4,12,1,80,3,36,
		135,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_FILEORDER )
{
	static const HB_BYTE pcode[] =
	{
		36,138,1,176,26,0,92,112,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_SETFILEORD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,143,1,176,4,0,95,1,12,1,28,
		17,176,40,0,176,34,0,122,95,1,12,2,12,1,
		25,7,176,40,0,12,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RDD_COUNT )
{
	static const HB_BYTE pcode[] =
	{
		36,146,1,176,18,0,176,50,0,12,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RDD_NAME )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,152,1,176,4,0,95,1,12,1,28,
		43,95,1,122,16,28,37,36,153,1,176,50,0,12,
		0,80,2,36,154,1,95,1,176,18,0,95,2,12,
		1,34,28,12,36,155,1,95,2,95,1,1,110,7,
		36,159,1,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RDD_INFO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,166,1,176,4,0,95,1,12,1,28,
		33,36,167,1,176,53,0,95,1,12,1,106,1,0,
		8,31,110,36,168,1,85,95,1,74,176,54,0,20,
		0,74,25,95,36,170,1,176,25,0,95,1,12,1,
		28,64,36,171,1,176,55,0,176,56,0,95,1,12,
		1,12,1,80,2,36,172,1,176,57,0,176,50,0,
		12,0,89,20,0,1,0,1,0,2,0,176,55,0,
		95,1,12,1,95,255,8,6,12,2,121,8,28,29,
		36,173,1,100,80,2,25,21,36,175,1,95,1,100,
		8,28,12,36,176,1,176,58,0,12,0,80,2,36,
		179,1,176,35,0,95,2,12,1,28,10,36,180,1,
		4,0,0,110,7,36,189,1,95,2,120,176,59,0,
		92,5,100,95,2,12,3,176,59,0,92,7,100,95,
		2,12,3,176,59,0,92,8,100,95,2,12,3,176,
		59,0,92,6,100,95,2,12,3,4,6,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_ISDBT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,192,1,176,59,0,92,14,100,95,1,
		12,3,122,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_MEMOEXT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,195,1,176,59,0,92,6,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_MEMOBLK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,198,1,176,59,0,92,32,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_SETMEMOBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,201,1,176,59,0,92,32,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_STRXCHECK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,204,1,176,59,0,92,23,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_LOCKRETRY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,207,1,176,59,0,92,43,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_AUTOOPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,210,1,176,59,0,92,26,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_AUTOSHARE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,213,1,176,59,0,92,28,95,1,95,
		2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_BLOB2FILE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,216,1,176,69,0,95,2,95,1,121,
		20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_FILE2BLOB )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,36,220,1,121,80,4,36,222,1,176,71,
		0,95,3,122,12,2,121,69,28,15,36,223,1,176,
		72,0,95,4,122,12,2,80,4,36,225,1,176,71,
		0,95,3,92,2,12,2,121,69,28,16,36,226,1,
		176,72,0,95,4,92,2,12,2,80,4,36,229,1,
		176,73,0,95,2,95,1,95,4,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_DBCREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,235,1,176,75,0,95,2,12,1,80,
		5,36,236,1,95,5,96,4,0,129,1,1,28,106,
		36,237,1,25,69,36,239,1,95,4,92,3,148,92,
		6,135,25,82,36,242,1,95,4,92,3,1,92,3,
		8,28,14,36,243,1,106,2,86,0,95,4,92,2,
		2,25,55,36,247,1,95,4,92,3,1,92,4,8,
		28,14,36,248,1,106,2,86,0,95,4,92,2,2,
		25,28,95,4,92,2,1,133,3,0,106,2,86,0,
		25,177,106,2,68,0,25,184,106,2,73,0,25,205,
		36,252,1,130,31,154,132,36,254,1,176,76,0,95,
		1,95,5,95,3,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_VSIGLEN )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,2,2,121,80,2,121,80,3,36,4,
		2,176,23,0,12,0,28,109,36,6,2,176,25,0,
		95,1,12,1,28,16,36,7,2,176,78,0,95,1,
		12,1,80,3,25,21,36,8,2,176,4,0,95,1,
		12,1,28,9,36,9,2,95,1,80,3,36,11,2,
		95,3,122,16,28,55,95,3,176,79,0,12,0,34,
		28,45,36,12,2,176,80,0,95,3,12,1,80,2,
		36,13,2,176,81,0,95,3,12,1,106,2,86,0,
		8,28,16,95,2,92,6,16,28,9,36,14,2,126,
		2,250,255,36,19,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_VFGET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,26,2,176,23,0,12,0,28,29,176,
		83,0,12,0,92,2,8,28,19,36,27,2,176,7,
		0,95,1,42,11,95,2,122,124,2,0,7,36,30,
		2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_ISLOCKED )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,36,2,176,23,0,12,0,28,52,36,
		37,2,95,1,100,8,28,9,176,85,0,12,0,25,
		4,95,1,80,2,36,41,2,176,86,0,95,2,12,
		1,28,14,36,42,2,176,87,0,95,2,20,1,25,
		8,36,44,2,120,110,7,36,48,2,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SX_SETTRIGGER )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,36,52,2,106,1,0,80,4,36,54,2,
		176,4,0,95,1,12,1,29,176,0,36,55,2,95,
		1,92,5,8,28,32,36,56,2,176,25,0,95,2,
		12,1,29,153,0,36,57,2,176,59,0,92,40,95,
		2,95,3,20,3,26,136,0,36,59,2,176,23,0,
		12,0,29,125,0,36,60,2,176,89,0,93,138,0,
		12,1,80,4,36,61,2,25,73,36,63,2,176,89,
		0,93,138,0,120,20,2,25,92,36,66,2,176,89,
		0,93,138,0,9,20,2,25,78,36,69,2,176,89,
		0,93,138,0,106,1,0,20,2,25,62,36,72,2,
		176,25,0,95,2,12,1,28,15,36,73,2,176,89,
		0,93,138,0,95,2,20,2,25,35,95,1,133,4,
		0,97,1,0,0,0,25,175,97,2,0,0,0,25,
		182,97,3,0,0,0,25,189,97,4,0,0,0,25,
		198,36,80,2,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}
