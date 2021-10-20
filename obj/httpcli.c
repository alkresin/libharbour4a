/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\contrib\hbtip\httpcli.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIPCLIENTHTTP );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TIPCLIENT );
HB_FUNC_STATIC( TIPCLIENTHTTP_NEW );
HB_FUNC_STATIC( TIPCLIENTHTTP_GET );
HB_FUNC_STATIC( TIPCLIENTHTTP_POST );
HB_FUNC_STATIC( TIPCLIENTHTTP_PUT );
HB_FUNC_STATIC( TIPCLIENTHTTP_DELETE );
HB_FUNC_STATIC( TIPCLIENTHTTP_HEAD );
HB_FUNC_STATIC( TIPCLIENTHTTP_READHEADERS );
HB_FUNC_STATIC( TIPCLIENTHTTP_READ );
HB_FUNC_STATIC( TIPCLIENTHTTP_READALL );
HB_FUNC_STATIC( TIPCLIENTHTTP_SETCOOKIE );
HB_FUNC_STATIC( TIPCLIENTHTTP_GETCOOKIES );
HB_FUNC_STATIC( TIPCLIENTHTTP_BOUNDARY );
HB_FUNC_STATIC( TIPCLIENTHTTP_ATTACH );
HB_FUNC_STATIC( TIPCLIENTHTTP_POSTMULTIPART );
HB_FUNC_STATIC( TIPCLIENTHTTP_WRITEALL );
HB_FUNC_STATIC( TIPCLIENTHTTP_STANDARDFIELDS );
HB_FUNC_STATIC( TIPCLIENTHTTP_POSTBYVERB );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( HB_HCASEMATCH );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISHASH );
HB_FUNC_EXTERN( TIP_URLENCODE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( TIPENCODERBASE64 );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_REGEX );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_REGEXSPLIT );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_HEXTONUM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_HKEYS );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( HB_RANDNUM );
HB_FUNC_EXTERN( HB_FNAMENAMEEXT );
HB_FUNC_EXTERN( HB_DIRSEPTOOS );
HB_FUNC_EXTERN( HB_VFOPEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_VFREAD );
HB_FUNC_EXTERN( HB_BLEFT );
HB_FUNC_EXTERN( HB_VFCLOSE );
HB_FUNC_EXTERN( HB_VFWRITE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTTPCLI )
{ "TIPCLIENTHTTP", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TIPCLIENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCLIENTHTTP_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_NEW )}, NULL },
{ "TIPCLIENTHTTP_GET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_GET )}, NULL },
{ "TIPCLIENTHTTP_POST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_POST )}, NULL },
{ "TIPCLIENTHTTP_PUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_PUT )}, NULL },
{ "TIPCLIENTHTTP_DELETE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_DELETE )}, NULL },
{ "TIPCLIENTHTTP_HEAD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_HEAD )}, NULL },
{ "TIPCLIENTHTTP_READHEADERS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_READHEADERS )}, NULL },
{ "TIPCLIENTHTTP_READ", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_READ )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CAUTHMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCLIENTHTTP_READALL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_READALL )}, NULL },
{ "TIPCLIENTHTTP_SETCOOKIE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_SETCOOKIE )}, NULL },
{ "TIPCLIENTHTTP_GETCOOKIES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_GETCOOKIES )}, NULL },
{ "TIPCLIENTHTTP_BOUNDARY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_BOUNDARY )}, NULL },
{ "TIPCLIENTHTTP_ATTACH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_ATTACH )}, NULL },
{ "TIPCLIENTHTTP_POSTMULTIPART", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_POSTMULTIPART )}, NULL },
{ "TIPCLIENTHTTP_WRITEALL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_WRITEALL )}, NULL },
{ "TIPCLIENTHTTP_STANDARDFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_STANDARDFIELDS )}, NULL },
{ "_LPERSISTENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INETERRORCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SOCKETCON", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCLIENTHTTP_POSTBYVERB", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCLIENTHTTP_POSTBYVERB )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "_NDEFAULTPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPROTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OURL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCONNTIMEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCHUNKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_HCASEMATCH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HCASEMATCH )}, NULL },
{ "HHEADERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "BUILDQUERY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INETSENDALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCRLF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STANDARDFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READHEADERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POSTBYVERB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISHASH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISHASH )}, NULL },
{ "TIP_URLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLENCODE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "__ENUMKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMISLAST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "HFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "_BINITIALIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSERAGENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LPERSISTENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CAUTHMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPENCODERBASE64", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODERBASE64 )}, NULL },
{ "_BHTTPEXCEPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSERID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOOKIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "INETRECVLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_REGEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEX )}, NULL },
{ "_CREPLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NVERSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NSUBVERSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NREPLYCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CREPLYDESCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "_NLENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HHEADERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_REGEXSPLIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEXSPLIT )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "BCHUNKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SETCOOKIE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINITIALIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_HEXTONUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HEXTONUM )}, NULL },
{ "NREAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMISFIRST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "HCOOKIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_HKEYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HKEYS )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "CBOUNDARY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CBOUNDARY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "HB_RANDNUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RANDNUM )}, NULL },
{ "AATTACHMENTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOUNDARY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_FNAMENAMEEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMENAMEEXT )}, NULL },
{ "HB_DIRSEPTOOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSEPTOOS )}, NULL },
{ "HB_VFOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFOPEN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_VFREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFREAD )}, NULL },
{ "HB_BLEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEFT )}, NULL },
{ "HB_VFCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFCLOSE )}, NULL },
{ "READALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_VFWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFWRITE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HTTPCLI, "c:\\harbour\\contrib\\hbtip\\httpcli.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HTTPCLI
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HTTPCLI )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIPCLIENTHTTP )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,124,0,36,51,0,103,1,0,100,8,
		29,120,5,176,1,0,104,1,0,12,1,29,109,5,
		166,47,5,0,122,80,1,48,2,0,176,3,0,12,
		0,106,14,84,73,80,67,108,105,101,110,116,72,84,
		84,80,0,108,4,4,1,0,108,0,112,3,80,2,
		36,53,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,8,99,77,101,116,104,111,100,0,
		4,1,0,9,112,5,73,36,54,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,11,110,
		82,101,112,108,121,67,111,100,101,0,4,1,0,9,
		112,5,73,36,55,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,12,99,82,101,112,108,
		121,68,101,115,99,114,0,4,1,0,9,112,5,73,
		36,56,0,48,5,0,95,2,100,122,95,1,121,72,
		121,72,121,72,106,9,110,86,101,114,115,105,111,110,
		0,4,1,0,9,112,5,73,36,57,0,48,5,0,
		95,2,100,121,95,1,121,72,121,72,121,72,106,12,
		110,83,117,98,118,101,114,115,105,111,110,0,4,1,
		0,9,112,5,73,36,58,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,9,98,67,104,
		117,110,107,101,100,0,4,1,0,9,112,5,73,36,
		59,0,48,5,0,95,2,100,177,0,0,95,1,121,
		72,121,72,121,72,106,9,104,72,101,97,100,101,114,
		115,0,4,1,0,9,112,5,73,36,60,0,48,5,
		0,95,2,100,177,0,0,95,1,121,72,121,72,121,
		72,106,9,104,67,111,111,107,105,101,115,0,4,1,
		0,9,112,5,73,36,61,0,48,5,0,95,2,100,
		177,0,0,95,1,121,72,121,72,121,72,106,8,104,
		70,105,101,108,100,115,0,4,1,0,9,112,5,73,
		36,62,0,48,5,0,95,2,100,106,23,77,111,122,
		105,108,108,97,47,51,46,48,32,99,111,109,112,97,
		116,105,98,108,101,0,95,1,121,72,121,72,121,72,
		106,11,99,85,115,101,114,65,103,101,110,116,0,4,
		1,0,9,112,5,73,36,63,0,48,5,0,95,2,
		100,106,1,0,95,1,121,72,121,72,121,72,106,10,
		99,65,117,116,104,77,111,100,101,0,4,1,0,9,
		112,5,73,36,64,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,10,99,66,111,117,110,
		100,97,114,121,0,4,1,0,9,112,5,73,36,65,
		0,48,5,0,95,2,100,4,0,0,95,1,121,72,
		121,72,121,72,106,13,97,65,116,116,97,99,104,109,
		101,110,116,115,0,4,1,0,9,112,5,73,36,66,
		0,48,5,0,95,2,100,9,95,1,121,72,121,72,
		121,72,106,12,108,80,101,114,115,105,115,116,101,110,
		116,0,4,1,0,9,112,5,73,36,68,0,48,6,
		0,95,2,106,4,78,101,119,0,108,7,95,1,121,
		72,121,72,121,72,112,3,73,36,69,0,48,6,0,
		95,2,106,4,71,101,116,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,70,0,48,6,0,95,
		2,106,5,80,111,115,116,0,108,9,95,1,121,72,
		121,72,121,72,112,3,73,36,71,0,48,6,0,95,
		2,106,4,80,117,116,0,108,10,95,1,121,72,121,
		72,121,72,112,3,73,36,72,0,48,6,0,95,2,
		106,7,68,101,108,101,116,101,0,108,11,95,1,121,
		72,121,72,121,72,112,3,73,36,73,0,48,6,0,
		95,2,106,5,72,101,97,100,0,108,12,95,1,121,
		72,121,72,121,72,112,3,73,36,74,0,48,6,0,
		95,2,106,12,82,101,97,100,72,101,97,100,101,114,
		115,0,108,13,95,1,121,72,121,72,121,72,112,3,
		73,36,75,0,48,6,0,95,2,106,5,82,101,97,
		100,0,108,14,95,1,121,72,121,72,121,72,112,3,
		73,36,76,0,48,15,0,95,2,106,13,85,115,101,
		66,97,115,105,99,65,117,116,104,0,89,23,0,1,
		0,0,0,48,16,0,95,1,106,6,66,97,115,105,
		99,0,112,1,6,95,1,121,72,121,72,121,72,112,
		3,73,36,77,0,48,6,0,95,2,106,8,82,101,
		97,100,65,108,108,0,108,17,95,1,121,72,121,72,
		121,72,112,3,73,36,78,0,48,6,0,95,2,106,
		10,115,101,116,67,111,111,107,105,101,0,108,18,95,
		1,121,72,121,72,121,72,112,3,73,36,79,0,48,
		6,0,95,2,106,11,103,101,116,99,111,111,107,105,
		101,115,0,108,19,95,1,121,72,121,72,121,72,112,
		3,73,36,80,0,48,6,0,95,2,106,9,66,111,
		117,110,100,97,114,121,0,108,20,95,1,121,72,121,
		72,121,72,112,3,73,36,81,0,48,6,0,95,2,
		106,7,65,116,116,97,99,104,0,108,21,95,1,121,
		72,121,72,121,72,112,3,73,36,82,0,48,6,0,
		95,2,106,14,80,111,115,116,77,117,108,116,105,80,
		97,114,116,0,108,22,95,1,121,72,121,72,121,72,
		112,3,73,36,83,0,48,6,0,95,2,106,9,87,
		114,105,116,101,65,108,108,0,108,23,95,1,121,72,
		121,72,121,72,112,3,73,36,84,0,48,6,0,95,
		2,106,15,83,116,97,110,100,97,114,100,70,105,101,
		108,100,115,0,108,24,95,1,121,72,121,72,121,72,
		112,3,73,36,85,0,48,15,0,95,2,106,24,83,
		101,116,67,111,110,110,101,99,116,105,111,110,80,101,
		114,115,105,115,116,101,110,116,0,89,16,0,1,0,
		0,0,48,25,0,95,1,120,112,1,6,95,1,121,
		72,121,72,121,72,112,3,73,36,86,0,48,15,0,
		95,2,106,18,73,115,67,111,110,110,101,99,116,105,
		111,110,65,108,105,118,101,0,89,24,0,1,0,0,
		0,48,26,0,95,1,48,27,0,95,1,112,0,112,
		1,121,8,6,95,1,121,72,121,72,121,72,112,3,
		73,36,88,0,92,2,80,1,36,90,0,48,6,0,
		95,2,106,11,80,111,115,116,66,121,86,101,114,98,
		0,108,28,95,1,121,72,121,72,121,72,112,3,73,
		36,92,0,48,29,0,95,2,112,0,73,167,14,0,
		0,176,30,0,104,1,0,95,2,20,2,168,48,31,
		0,95,2,112,0,80,3,176,32,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,33,0,95,3,164,146,1,0,73,95,3,110,7,
		48,31,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,96,0,48,2,0,48,34,0,102,112,
		0,95,1,176,35,0,95,2,9,12,2,28,11,106,
		5,104,116,116,112,0,25,4,95,2,95,3,112,3,
		73,36,98,0,48,36,0,102,48,37,0,48,38,0,
		102,112,0,112,0,106,6,104,116,116,112,115,0,8,
		28,7,93,187,1,25,4,92,80,112,1,73,36,99,
		0,48,39,0,102,93,136,19,112,1,73,36,100,0,
		48,40,0,102,9,112,1,73,36,102,0,176,41,0,
		48,42,0,102,112,0,9,20,2,36,104,0,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_GET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,108,0,176,43,0,95,1,12,1,31,
		18,36,109,0,48,44,0,48,38,0,102,112,0,112,
		0,80,1,36,112,0,48,45,0,102,48,27,0,102,
		112,0,106,5,71,69,84,32,0,95,1,72,106,10,
		32,72,84,84,80,47,49,46,49,0,72,48,46,0,
		102,112,0,72,112,2,73,36,113,0,48,47,0,102,
		112,0,73,36,114,0,48,45,0,102,48,27,0,102,
		112,0,48,46,0,102,112,0,112,2,73,36,115,0,
		48,26,0,102,48,27,0,102,112,0,112,1,121,8,
		28,13,36,116,0,48,48,0,102,112,0,110,7,36,
		119,0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_POST )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,122,0,48,49,0,102,95,1,95,2,
		106,5,80,79,83,84,0,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_PUT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,125,0,48,49,0,102,95,1,95,2,
		106,4,80,85,84,0,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_DELETE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,128,0,48,49,0,102,95,1,95,2,
		106,7,68,69,76,69,84,69,0,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_HEAD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,131,0,48,49,0,102,95,1,95,2,
		106,5,72,69,65,68,0,112,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_POSTBYVERB )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,139,0,176,50,0,95,1,12,1,28,
		105,36,140,0,106,1,0,80,4,36,141,0,95,1,
		96,5,0,129,1,1,28,80,36,144,0,96,4,0,
		176,51,0,176,52,0,176,53,0,48,54,0,96,5,
		0,112,0,12,1,12,1,12,1,106,2,61,0,72,
		176,51,0,176,53,0,95,5,12,1,12,1,72,135,
		36,145,0,48,55,0,96,5,0,112,0,31,13,36,
		146,0,96,4,0,106,2,38,0,135,36,148,0,130,
		31,180,132,26,143,0,36,149,0,176,56,0,95,1,
		12,1,28,103,36,150,0,106,1,0,80,4,36,151,
		0,95,1,96,5,0,129,1,1,28,79,36,154,0,
		96,4,0,176,51,0,176,52,0,176,53,0,95,5,
		122,1,12,1,12,1,12,1,106,2,61,0,72,176,
		51,0,176,53,0,95,5,92,2,1,12,1,12,1,
		72,135,36,155,0,48,55,0,96,5,0,112,0,31,
		13,36,156,0,96,4,0,106,2,38,0,135,36,158,
		0,130,31,181,132,25,29,36,159,0,176,43,0,95,
		1,12,1,28,11,36,160,0,95,1,80,4,25,8,
		36,162,0,9,110,7,36,165,0,176,43,0,95,2,
		12,1,31,18,36,166,0,48,44,0,48,38,0,102,
		112,0,112,0,80,2,36,169,0,48,45,0,102,48,
		27,0,102,112,0,176,35,0,95,3,106,5,80,79,
		83,84,0,12,2,106,2,32,0,72,95,2,72,106,
		10,32,72,84,84,80,47,49,46,49,0,72,48,46,
		0,102,112,0,72,112,2,73,36,171,0,48,47,0,
		102,112,0,73,36,172,0,106,13,67,111,110,116,101,
		110,116,45,84,121,112,101,0,48,57,0,102,112,0,
		24,31,75,36,173,0,48,45,0,102,48,27,0,102,
		112,0,106,48,67,111,110,116,101,110,116,45,84,121,
		112,101,58,32,97,112,112,108,105,99,97,116,105,111,
		110,47,120,45,119,119,119,45,102,111,114,109,45,117,
		114,108,101,110,99,111,100,101,100,0,48,46,0,102,
		112,0,72,112,2,73,36,175,0,48,45,0,102,48,
		27,0,102,112,0,106,17,67,111,110,116,101,110,116,
		45,76,101,110,103,116,104,58,32,0,176,58,0,176,
		59,0,95,4,12,1,12,1,72,48,46,0,102,112,
		0,72,112,2,73,36,178,0,48,45,0,102,48,27,
		0,102,112,0,48,46,0,102,112,0,112,2,73,36,
		180,0,48,26,0,102,48,27,0,102,112,0,112,1,
		121,8,28,42,36,181,0,48,45,0,102,48,27,0,
		102,112,0,95,4,112,2,73,36,182,0,48,60,0,
		102,120,112,1,73,36,183,0,48,48,0,102,112,0,
		110,7,36,186,0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_STANDARDFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,193,0,48,45,0,102,48,27,0,102,
		112,0,106,7,72,111,115,116,58,32,0,48,61,0,
		48,38,0,102,112,0,112,0,72,48,46,0,102,112,
		0,72,112,2,73,36,194,0,48,45,0,102,48,27,
		0,102,112,0,106,13,85,115,101,114,45,97,103,101,
		110,116,58,32,0,48,62,0,102,112,0,72,48,46,
		0,102,112,0,72,112,2,73,36,195,0,48,63,0,
		102,112,0,31,45,36,196,0,48,45,0,102,48,27,
		0,102,112,0,106,18,67,111,110,110,101,99,116,105,
		111,110,58,32,99,108,111,115,101,0,48,46,0,102,
		112,0,72,112,2,73,36,200,0,48,64,0,102,112,
		0,106,6,66,97,115,105,99,0,8,29,138,0,106,
		14,65,117,116,104,111,114,105,122,97,116,105,111,110,
		0,48,57,0,102,112,0,24,31,112,36,201,0,48,
		2,0,176,65,0,12,0,112,0,80,1,36,202,0,
		48,66,0,95,1,120,112,1,73,36,204,0,48,45,
		0,102,48,27,0,102,112,0,106,22,65,117,116,104,
		111,114,105,122,97,116,105,111,110,58,32,66,97,115,
		105,99,32,0,48,67,0,95,1,48,68,0,48,38,
		0,102,112,0,112,0,106,2,58,0,72,48,69,0,
		48,38,0,102,112,0,112,0,72,112,1,72,48,46,
		0,102,112,0,72,112,2,73,36,208,0,48,70,0,
		102,112,0,80,2,36,209,0,176,71,0,95,2,12,
		1,31,39,36,210,0,48,45,0,102,48,27,0,102,
		112,0,106,9,67,111,111,107,105,101,58,32,0,95,
		2,72,48,46,0,102,112,0,72,112,2,73,36,214,
		0,48,57,0,102,112,0,96,3,0,129,1,1,28,
		48,36,215,0,48,45,0,102,48,27,0,102,112,0,
		48,54,0,96,3,0,112,0,106,3,58,32,0,72,
		95,3,72,48,46,0,102,112,0,72,112,2,73,36,
		216,0,130,31,212,132,36,218,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_READHEADERS )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,226,0,176,35,0,48,72,0,102,48,
		27,0,102,112,0,96,3,0,93,244,1,112,3,106,
		1,0,12,2,165,80,2,106,1,0,8,28,8,36,
		228,0,9,110,7,36,232,0,176,73,0,106,40,94,
		72,84,84,80,47,40,46,41,92,46,40,46,41,32,
		40,91,48,45,57,93,91,48,45,57,93,91,48,45,
		57,93,41,32,43,40,46,42,41,36,0,95,2,12,
		2,80,4,36,233,0,48,74,0,102,95,2,112,1,
		73,36,235,0,176,71,0,95,4,12,1,28,51,36,
		236,0,48,75,0,102,121,112,1,73,36,237,0,48,
		76,0,102,92,9,112,1,73,36,238,0,48,77,0,
		102,121,112,1,73,36,239,0,48,78,0,102,106,1,
		0,112,1,73,25,77,36,241,0,48,75,0,102,176,
		79,0,95,4,92,2,1,12,1,112,1,73,36,242,
		0,48,76,0,102,176,79,0,95,4,92,3,1,12,
		1,112,1,73,36,243,0,48,77,0,102,176,79,0,
		95,4,92,4,1,12,1,112,1,73,36,244,0,48,
		78,0,102,95,4,92,5,1,112,1,73,36,247,0,
		48,80,0,102,92,255,112,1,73,36,248,0,48,40,
		0,102,9,112,1,73,36,249,0,176,35,0,95,1,
		9,12,2,28,28,176,71,0,48,42,0,102,112,0,
		12,1,31,15,36,250,0,48,81,0,102,177,0,0,
		112,1,73,36,252,0,48,72,0,102,48,27,0,102,
		112,0,96,3,0,93,244,1,112,3,80,2,36,253,
		0,48,26,0,102,48,27,0,102,112,0,112,1,121,
		8,29,71,1,176,43,0,95,2,12,1,29,61,1,
		95,2,106,1,0,8,32,52,1,36,255,0,176,82,
		0,176,83,0,106,2,58,0,95,2,100,100,122,12,
		5,165,80,5,12,1,92,2,69,28,27,36,0,1,
		48,72,0,102,48,27,0,102,112,0,96,3,0,93,
		244,1,112,3,80,2,25,164,36,4,1,176,84,0,
		95,5,92,2,1,12,1,48,42,0,102,112,0,95,
		5,122,1,2,36,8,1,176,85,0,95,5,122,1,
		12,1,106,15,99,111,110,116,101,110,116,45,108,101,
		110,103,116,104,0,8,28,44,48,86,0,102,112,0,
		31,36,36,9,1,176,87,0,95,2,92,16,12,2,
		80,2,36,10,1,48,80,0,102,176,79,0,95,2,
		12,1,112,1,73,26,129,0,36,13,1,176,85,0,
		95,5,122,1,12,1,106,18,116,114,97,110,115,102,
		101,114,45,101,110,99,111,100,105,110,103,0,8,28,
		50,36,14,1,106,8,99,104,117,110,107,101,100,0,
		176,85,0,95,2,12,1,24,28,70,36,15,1,48,
		40,0,102,120,112,1,73,36,16,1,48,80,0,102,
		92,255,112,1,73,25,45,36,18,1,176,85,0,95,
		5,122,1,12,1,106,11,115,101,116,45,99,111,111,
		107,105,101,0,8,28,17,36,19,1,48,88,0,102,
		95,5,92,2,1,112,1,73,36,22,1,48,72,0,
		102,48,27,0,102,112,0,96,3,0,93,244,1,112,
		3,80,2,26,171,254,36,24,1,48,26,0,102,48,
		27,0,102,112,0,112,1,121,69,28,8,36,25,1,
		9,110,7,36,28,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_READ )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,34,1,48,89,0,102,112,0,31,30,
		36,35,1,48,60,0,102,120,112,1,73,36,36,1,
		48,90,0,102,112,0,31,8,36,37,1,100,110,7,
		36,46,1,48,91,0,102,112,0,92,255,8,29,245,
		0,48,86,0,102,112,0,29,236,0,36,48,1,48,
		72,0,102,48,27,0,102,112,0,96,3,0,93,0,
		4,112,3,80,4,36,50,1,176,43,0,95,4,12,
		1,28,10,95,4,106,1,0,8,28,8,36,51,1,
		100,110,7,36,55,1,95,4,106,2,48,0,8,28,
		113,36,58,1,176,35,0,48,72,0,102,48,27,0,
		102,112,0,96,3,0,93,0,4,112,3,106,1,0,
		12,2,165,80,4,106,1,0,8,31,58,36,60,1,
		176,82,0,176,83,0,106,2,58,0,95,4,100,100,
		122,12,5,165,80,5,12,1,92,2,8,28,190,36,
		61,1,176,84,0,95,5,92,2,1,12,1,48,42,
		0,102,112,0,95,5,122,1,2,25,164,36,66,1,
		48,92,0,102,120,112,1,73,36,67,1,100,110,7,
		36,73,1,176,93,0,106,2,59,0,95,4,12,2,
		165,80,3,121,15,28,18,36,74,1,176,94,0,95,
		4,95,3,122,49,12,2,80,4,36,79,1,48,80,
		0,102,176,95,0,95,4,12,1,48,96,0,102,112,
		0,72,112,1,73,36,84,1,48,97,0,48,34,0,
		102,112,0,95,1,112,1,80,2,36,87,1,48,98,
		0,102,112,0,28,55,48,86,0,102,112,0,28,47,
		36,88,1,48,92,0,102,9,112,1,73,36,89,1,
		48,80,0,102,92,255,112,1,73,36,91,1,48,72,
		0,102,48,27,0,102,112,0,96,3,0,93,0,4,
		112,3,73,36,94,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_READALL )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,98,1,106,1,0,80,1,36,100,1,
		48,89,0,102,112,0,31,30,36,101,1,48,60,0,
		102,120,112,1,73,36,102,1,48,90,0,102,112,0,
		31,8,36,103,1,100,110,7,36,106,1,48,86,0,
		102,112,0,28,29,36,107,1,48,97,0,102,112,0,
		165,80,2,100,69,28,24,36,108,1,96,1,0,95,
		2,135,25,231,36,112,1,48,97,0,102,112,0,110,
		7,36,115,1,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_SETCOOKIE )
{
	static const HB_BYTE pcode[] =
	{
		13,8,1,36,121,1,48,61,0,48,38,0,102,112,
		0,112,0,80,7,48,99,0,48,38,0,102,112,0,
		112,0,80,8,36,124,1,95,8,106,1,0,8,28,
		11,36,125,1,106,2,47,0,80,8,36,130,1,106,
		1,0,165,80,5,80,4,36,131,1,95,7,80,2,
		36,132,1,95,8,80,3,36,133,1,176,83,0,106,
		2,59,0,95,1,12,2,96,9,0,129,1,1,29,
		158,0,36,134,1,176,82,0,176,83,0,106,2,61,
		0,95,9,122,12,3,165,80,6,12,1,92,2,8,
		28,122,36,135,1,48,100,0,96,9,0,112,0,28,
		33,36,136,1,176,52,0,95,6,122,1,12,1,80,
		4,36,137,1,176,52,0,95,6,92,2,1,12,1,
		80,5,25,78,36,139,1,25,36,36,145,1,176,52,
		0,95,6,92,2,1,12,1,80,3,25,56,36,148,
		1,176,52,0,95,6,92,2,1,12,1,80,2,25,
		39,176,101,0,176,52,0,95,6,122,1,12,1,12,
		1,133,2,0,106,5,80,65,84,72,0,25,198,106,
		7,68,79,77,65,73,78,0,25,204,36,153,1,130,
		32,104,255,132,36,154,1,176,71,0,95,4,12,1,
		31,86,36,157,1,95,2,48,102,0,102,112,0,24,
		31,17,36,158,1,177,0,0,48,102,0,102,112,0,
		95,2,2,36,160,1,95,3,48,102,0,102,112,0,
		95,2,1,24,31,20,36,161,1,177,0,0,48,102,
		0,102,112,0,95,2,1,95,3,2,36,163,1,95,
		5,48,102,0,102,112,0,95,2,1,95,3,1,95,
		4,2,36,166,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_GETCOOKIES )
{
	static const HB_BYTE pcode[] =
	{
		13,9,2,36,170,1,4,0,0,80,4,36,171,1,
		106,1,0,80,10,36,173,1,176,103,0,96,1,0,
		48,61,0,48,38,0,102,112,0,112,0,20,2,36,
		175,1,176,43,0,95,2,12,1,31,38,36,176,1,
		48,99,0,48,38,0,102,112,0,112,0,80,2,36,
		177,1,95,2,106,1,0,8,28,11,36,178,1,106,
		2,47,0,80,2,36,181,1,95,1,106,1,0,8,
		28,9,36,182,1,95,10,110,7,36,186,1,176,82,
		0,95,1,12,1,80,5,36,187,1,176,101,0,95,
		1,12,1,80,1,36,188,1,176,104,0,48,102,0,
		102,112,0,12,1,96,3,0,129,1,1,28,72,36,
		189,1,176,101,0,176,105,0,95,3,95,5,12,2,
		12,1,95,1,8,28,44,176,82,0,95,3,12,1,
		95,5,8,31,20,176,87,0,95,3,95,5,66,122,
		12,3,106,2,46,0,8,28,14,36,190,1,176,106,
		0,95,4,95,3,20,2,36,192,1,130,31,188,132,
		36,195,1,176,82,0,95,2,12,1,80,8,36,196,
		1,176,107,0,95,4,100,100,89,23,0,2,0,0,
		0,176,82,0,95,1,12,1,176,82,0,95,2,12,
		1,15,6,12,4,96,3,0,129,1,1,29,238,0,
		36,197,1,4,0,0,80,7,36,198,1,176,104,0,
		48,102,0,102,112,0,95,3,1,12,1,96,6,0,
		129,1,1,28,58,36,199,1,95,6,106,2,47,0,
		8,31,28,176,82,0,95,6,12,1,95,8,34,28,
		28,176,94,0,95,6,95,8,12,2,95,6,8,28,
		14,36,200,1,176,106,0,95,7,95,6,20,2,36,
		202,1,130,31,202,132,36,204,1,176,107,0,95,7,
		100,100,89,23,0,2,0,0,0,176,82,0,95,1,
		12,1,176,82,0,95,2,12,1,15,6,12,4,96,
		9,0,129,1,1,28,96,36,205,1,176,104,0,48,
		102,0,102,112,0,95,3,1,95,9,1,12,1,96,
		11,0,129,1,1,28,61,36,206,1,95,10,106,1,
		0,8,31,14,36,207,1,96,10,0,106,3,59,32,
		0,135,36,209,1,96,10,0,95,11,106,2,61,0,
		72,48,102,0,102,112,0,95,3,1,95,9,1,95,
		11,1,72,135,36,210,1,130,31,199,132,36,211,1,
		130,31,164,132,36,212,1,130,32,24,255,132,36,214,
		1,95,10,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_BOUNDARY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,226,1,48,108,0,102,112,0,100,8,
		28,46,36,227,1,48,109,0,102,176,110,0,106,2,
		45,0,92,27,12,2,176,111,0,176,112,0,128,255,
		231,118,72,23,0,0,0,12,1,92,11,121,12,3,
		72,112,1,73,36,230,1,176,103,0,96,1,0,121,
		20,2,36,235,1,95,1,122,34,28,9,106,3,45,
		45,0,25,5,106,1,0,48,108,0,102,112,0,72,
		95,1,122,8,28,9,106,3,45,45,0,25,5,106,
		1,0,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_ATTACH )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,239,1,176,106,0,48,113,0,102,112,
		0,95,1,95,2,95,3,4,3,0,20,2,36,241,
		1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_POSTMULTIPART )
{
	static const HB_BYTE pcode[] =
	{
		13,10,2,36,246,1,106,1,0,80,3,48,114,0,
		102,112,0,80,5,36,247,1,48,46,0,102,112,0,
		80,6,36,252,1,176,71,0,95,1,12,1,32,81,
		1,36,253,1,176,50,0,95,1,12,1,29,140,0,
		36,254,1,95,1,96,4,0,129,1,1,28,122,36,
		2,2,96,3,0,95,5,95,6,72,106,38,67,111,
		110,116,101,110,116,45,68,105,115,112,111,115,105,116,
		105,111,110,58,32,102,111,114,109,45,100,97,116,97,
		59,32,110,97,109,101,61,0,72,106,2,34,0,72,
		176,51,0,176,52,0,176,53,0,48,54,0,96,4,
		0,112,0,12,1,12,1,12,1,72,106,2,34,0,
		72,95,6,72,95,6,72,176,51,0,176,52,0,176,
		53,0,95,4,12,1,12,1,12,1,72,95,6,72,
		135,36,3,2,130,31,138,132,26,187,0,36,4,2,
		176,56,0,95,1,12,1,29,155,0,36,5,2,95,
		1,96,4,0,129,1,1,29,138,0,36,6,2,176,
		82,0,95,4,12,1,92,2,16,28,115,36,10,2,
		96,3,0,95,5,95,6,72,106,38,67,111,110,116,
		101,110,116,45,68,105,115,112,111,115,105,116,105,111,
		110,58,32,102,111,114,109,45,100,97,116,97,59,32,
		110,97,109,101,61,0,72,106,2,34,0,72,176,51,
		0,176,52,0,176,53,0,95,4,122,1,12,1,12,
		1,12,1,72,106,2,34,0,72,95,6,72,95,6,
		72,176,51,0,176,52,0,176,53,0,95,4,92,2,
		1,12,1,12,1,12,1,72,95,6,72,135,36,12,
		2,130,32,124,255,132,25,21,36,13,2,176,43,0,
		95,1,12,1,28,9,36,14,2,95,1,80,3,36,
		17,2,48,113,0,102,112,0,96,7,0,129,1,1,
		29,80,1,36,19,2,176,35,0,95,7,92,2,1,
		106,1,0,12,2,80,8,36,21,2,95,7,92,3,
		1,80,9,36,22,2,176,43,0,95,9,12,1,28,
		11,176,71,0,95,9,12,1,28,19,36,23,2,106,
		10,116,101,120,116,47,104,116,109,108,0,80,9,36,
		31,2,96,3,0,95,5,95,6,72,106,33,67,111,
		110,116,101,110,116,45,68,105,115,112,111,115,105,116,
		105,111,110,58,32,102,111,114,109,45,100,97,116,97,
		59,32,0,72,106,6,110,97,109,101,61,0,72,106,
		2,34,0,72,176,35,0,95,7,122,1,106,12,117,
		110,115,112,101,99,105,102,105,101,100,0,12,2,72,
		106,2,34,0,72,106,3,59,32,0,72,106,10,102,
		105,108,101,110,97,109,101,61,0,72,106,2,34,0,
		72,176,115,0,176,116,0,95,8,12,1,12,1,72,
		106,2,34,0,72,95,6,72,106,15,67,111,110,116,
		101,110,116,45,84,121,112,101,58,32,0,72,95,9,
		72,95,6,72,95,6,72,135,36,33,2,176,117,0,
		95,8,121,12,2,165,80,10,100,69,28,72,36,34,
		2,176,118,0,97,0,0,1,0,12,1,80,11,36,
		35,2,176,119,0,95,10,96,11,0,176,59,0,95,
		11,12,1,12,3,165,80,12,121,15,28,20,36,36,
		2,96,3,0,176,120,0,95,11,95,12,12,2,135,
		25,213,36,38,2,176,121,0,95,10,20,1,36,41,
		2,96,3,0,95,6,135,36,42,2,130,32,182,254,
		132,36,44,2,96,3,0,95,5,106,3,45,45,0,
		72,95,6,72,135,36,46,2,176,43,0,95,2,12,
		1,31,18,36,47,2,48,44,0,48,38,0,102,112,
		0,112,0,80,2,36,50,2,48,45,0,102,48,27,
		0,102,112,0,106,6,80,79,83,84,32,0,95,2,
		72,106,10,32,72,84,84,80,47,49,46,49,0,72,
		48,46,0,102,112,0,72,112,2,73,36,51,2,48,
		47,0,102,112,0,73,36,53,2,106,13,67,111,110,
		116,101,110,116,45,84,121,112,101,0,48,57,0,102,
		112,0,24,31,81,36,54,2,48,45,0,102,48,27,
		0,102,112,0,106,45,67,111,110,116,101,110,116,45,
		84,121,112,101,58,32,109,117,108,116,105,112,97,114,
		116,47,102,111,114,109,45,100,97,116,97,59,32,98,
		111,117,110,100,97,114,121,61,0,48,114,0,102,92,
		2,112,1,72,48,46,0,102,112,0,72,112,2,73,
		36,57,2,48,45,0,102,48,27,0,102,112,0,106,
		17,67,111,110,116,101,110,116,45,76,101,110,103,116,
		104,58,32,0,176,58,0,176,59,0,95,3,12,1,
		12,1,72,48,46,0,102,112,0,72,112,2,73,36,
		59,2,48,45,0,102,48,27,0,102,112,0,48,46,
		0,102,112,0,112,2,73,36,61,2,48,26,0,102,
		48,27,0,102,112,0,112,1,121,8,28,42,36,62,
		2,48,45,0,102,48,27,0,102,112,0,95,3,112,
		2,73,36,63,2,48,60,0,102,120,112,1,73,36,
		64,2,48,48,0,102,112,0,110,7,36,67,2,9,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCLIENTHTTP_WRITEALL )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,75,2,176,117,0,95,1,93,17,3,
		12,2,165,80,2,100,69,28,47,36,76,2,48,122,
		0,102,112,0,80,4,36,77,2,176,123,0,95,2,
		95,4,12,2,176,59,0,95,4,12,1,8,80,3,
		36,78,2,176,121,0,95,2,20,1,25,8,36,80,
		2,9,80,3,36,83,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,124,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

