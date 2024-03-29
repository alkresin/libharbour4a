/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rtl\tclass.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HBCLASS );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( __CLSNEW );
HB_FUNC_EXTERN( __CLSADDMSG );
HB_FUNC_STATIC( NEW );
HB_FUNC_STATIC( CREATE );
HB_FUNC_STATIC( ADDDATA );
HB_FUNC_STATIC( ADDMULTIDATA );
HB_FUNC_STATIC( ADDCLASSDATA );
HB_FUNC_STATIC( ADDMULTICLSDATA );
HB_FUNC_STATIC( ADDINLINE );
HB_FUNC_STATIC( ADDMETHOD );
HB_FUNC_STATIC( ADDCLSMETHOD );
HB_FUNC_STATIC( ADDVIRTUAL );
HB_FUNC_STATIC( ADDDELEGATE );
HB_FUNC_STATIC( ADDFRIENDFUNC );
HB_FUNC_STATIC( ADDFRIENDCLASS );
HB_FUNC_STATIC( INSTANCE );
HB_FUNC_STATIC( SETONERROR );
HB_FUNC_STATIC( SETDESTRUCTOR );
HB_FUNC_STATIC( INITCLASS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( HB_ISSYMBOL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( __DYNSN2SYM );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_ASCIIUPPER );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( __CLSINSTSUPER );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( __CLS_CNTCLSDATA );
HB_FUNC_EXTERN( __CLSADDFRIEND );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( HB_BITOR );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TCLASS )
{ "HBCLASS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "__CLSNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSNEW )}, NULL },
{ "__CLSADDMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSADDMSG )}, NULL },
{ "NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( NEW )}, NULL },
{ "CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CREATE )}, NULL },
{ "ADDDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDDATA )}, NULL },
{ "ADDMULTIDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDMULTIDATA )}, NULL },
{ "ADDCLASSDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDCLASSDATA )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDMULTICLSDATA )}, NULL },
{ "ADDINLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDINLINE )}, NULL },
{ "ADDMETHOD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDMETHOD )}, NULL },
{ "ADDCLSMETHOD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDCLSMETHOD )}, NULL },
{ "ADDVIRTUAL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDVIRTUAL )}, NULL },
{ "ADDDELEGATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDDELEGATE )}, NULL },
{ "ADDFRIENDFUNC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDFRIENDFUNC )}, NULL },
{ "ADDFRIENDCLASS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADDFRIENDCLASS )}, NULL },
{ "INSTANCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( INSTANCE )}, NULL },
{ "SETONERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETONERROR )}, NULL },
{ "SETDESTRUCTOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETDESTRUCTOR )}, NULL },
{ "INITCLASS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( INITCLASS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ASSUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "HB_ISSYMBOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSYMBOL )}, NULL },
{ "_ASSUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "__DYNSN2SYM", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DYNSN2SYM )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "_CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ASCIIUPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ASCIIUPPER )}, NULL },
{ "_SCLASSFUNC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LMODFRIENDLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "_ADATAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AMETHODS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACLSDATAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACLSMETHODS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AINLINES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AVIRTUALS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ADELEGATES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ASFRIENDCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ASFRIENDFUNC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSINSTSUPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINSTSUPER )}, NULL },
{ "_HCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ADATAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCLASSFUNC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LMODFRIENDLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AMETHODS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLS_CNTCLSDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLS_CNTCLSDATA )}, NULL },
{ "ACLSDATAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AINLINES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AVIRTUALS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADELEGATES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SONERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SDESTRUCTOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASFRIENDCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSADDFRIEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSADDFRIEND )}, NULL },
{ "ASFRIENDFUNC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "ADDDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITOR )}, NULL },
{ "ADDCLASSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACLSMETHODS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "_SONERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SDESTRUCTOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TCLASS, "c:\\harbour\\src\\rtl\\tclass.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TCLASS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TCLASS )
   #include "hbiniseg.h"
#endif

HB_FUNC( HBCLASS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,116,76,0,36,74,0,103,1,0,100,8,
		29,137,5,176,1,0,104,1,0,12,1,29,126,5,
		36,76,0,166,102,5,0,36,81,0,176,2,0,106,
		8,72,66,67,76,65,83,83,0,92,16,100,108,0,
		12,4,80,1,36,84,0,176,3,0,95,1,106,4,
		78,101,119,0,108,4,121,20,4,36,85,0,176,3,
		0,95,1,106,7,67,114,101,97,116,101,0,108,5,
		121,20,4,36,86,0,176,3,0,95,1,106,8,65,
		100,100,68,97,116,97,0,108,6,121,20,4,36,87,
		0,176,3,0,95,1,106,13,65,100,100,77,117,108,
		116,105,68,97,116,97,0,108,7,121,20,4,36,88,
		0,176,3,0,95,1,106,13,65,100,100,67,108,97,
		115,115,68,97,116,97,0,108,8,121,20,4,36,89,
		0,176,3,0,95,1,106,16,65,100,100,77,117,108,
		116,105,67,108,115,68,97,116,97,0,108,9,121,20,
		4,36,90,0,176,3,0,95,1,106,10,65,100,100,
		73,110,108,105,110,101,0,108,10,121,20,4,36,91,
		0,176,3,0,95,1,106,10,65,100,100,77,101,116,
		104,111,100,0,108,11,121,20,4,36,92,0,176,3,
		0,95,1,106,13,65,100,100,67,108,115,77,101,116,
		104,111,100,0,108,12,121,20,4,36,93,0,176,3,
		0,95,1,106,11,65,100,100,86,105,114,116,117,97,
		108,0,108,13,121,20,4,36,94,0,176,3,0,95,
		1,106,12,65,100,100,68,101,108,101,103,97,116,101,
		0,108,14,121,20,4,36,95,0,176,3,0,95,1,
		106,14,65,100,100,70,114,105,101,110,100,70,117,110,
		99,0,108,15,121,20,4,36,96,0,176,3,0,95,
		1,106,15,65,100,100,70,114,105,101,110,100,67,108,
		97,115,115,0,108,16,121,20,4,36,97,0,176,3,
		0,95,1,106,9,73,110,115,116,97,110,99,101,0,
		108,17,121,20,4,36,98,0,176,3,0,95,1,106,
		11,83,101,116,79,110,69,114,114,111,114,0,108,18,
		121,20,4,36,99,0,176,3,0,95,1,106,14,83,
		101,116,68,101,115,116,114,117,99,116,111,114,0,108,
		19,121,20,4,36,100,0,176,3,0,95,1,106,10,
		73,110,105,116,67,108,97,115,115,0,108,20,121,20,
		4,36,101,0,176,3,0,95,1,106,7,99,83,117,
		112,101,114,0,89,39,0,1,0,0,0,176,21,0,
		48,22,0,95,1,112,0,12,1,28,5,100,25,16,
		48,23,0,48,22,0,95,1,112,0,122,1,112,0,
		6,92,3,20,4,36,102,0,176,3,0,95,1,106,
		7,104,67,108,97,115,115,0,122,92,9,20,4,36,
		103,0,176,3,0,95,1,106,8,95,104,67,108,97,
		115,115,0,122,92,8,20,4,36,104,0,176,3,0,
		95,1,106,6,99,78,97,109,101,0,92,2,92,9,
		20,4,36,105,0,176,3,0,95,1,106,7,95,99,
		78,97,109,101,0,92,2,92,8,20,4,36,106,0,
		176,3,0,95,1,106,7,97,68,97,116,97,115,0,
		92,3,92,9,20,4,36,107,0,176,3,0,95,1,
		106,8,95,97,68,97,116,97,115,0,92,3,92,8,
		20,4,36,108,0,176,3,0,95,1,106,9,97,77,
		101,116,104,111,100,115,0,92,4,92,9,20,4,36,
		109,0,176,3,0,95,1,106,10,95,97,77,101,116,
		104,111,100,115,0,92,4,92,8,20,4,36,110,0,
		176,3,0,95,1,106,10,97,67,108,115,68,97,116,
		97,115,0,92,5,92,9,20,4,36,111,0,176,3,
		0,95,1,106,11,95,97,67,108,115,68,97,116,97,
		115,0,92,5,92,8,20,4,36,112,0,176,3,0,
		95,1,106,12,97,67,108,115,77,101,116,104,111,100,
		115,0,92,6,92,9,20,4,36,113,0,176,3,0,
		95,1,106,13,95,97,67,108,115,77,101,116,104,111,
		100,115,0,92,6,92,8,20,4,36,114,0,176,3,
		0,95,1,106,9,97,73,110,108,105,110,101,115,0,
		92,7,92,9,20,4,36,115,0,176,3,0,95,1,
		106,10,95,97,73,110,108,105,110,101,115,0,92,7,
		92,8,20,4,36,116,0,176,3,0,95,1,106,10,
		97,86,105,114,116,117,97,108,115,0,92,8,92,9,
		20,4,36,117,0,176,3,0,95,1,106,11,95,97,
		86,105,114,116,117,97,108,115,0,92,8,92,8,20,
		4,36,119,0,176,3,0,95,1,106,11,97,68,101,
		108,101,103,97,116,101,115,0,92,9,92,9,20,4,
		36,120,0,176,3,0,95,1,106,12,95,97,68,101,
		108,101,103,97,116,101,115,0,92,9,92,8,20,4,
		36,121,0,176,3,0,95,1,106,8,97,115,83,117,
		112,101,114,0,92,10,92,9,20,4,36,122,0,176,
		3,0,95,1,106,9,95,97,115,83,117,112,101,114,
		0,92,10,92,8,20,4,36,123,0,176,3,0,95,
		1,106,9,115,79,110,69,114,114,111,114,0,92,11,
		92,9,20,4,36,124,0,176,3,0,95,1,106,10,
		95,115,79,110,69,114,114,111,114,0,92,11,92,8,
		20,4,36,125,0,176,3,0,95,1,106,12,115,68,
		101,115,116,114,117,99,116,111,114,0,92,12,92,9,
		20,4,36,126,0,176,3,0,95,1,106,13,95,115,
		68,101,115,116,114,117,99,116,111,114,0,92,12,92,
		8,20,4,36,127,0,176,3,0,95,1,106,13,108,
		77,111,100,70,114,105,101,110,100,108,121,0,92,13,
		92,9,20,4,36,128,0,176,3,0,95,1,106,14,
		95,108,77,111,100,70,114,105,101,110,100,108,121,0,
		92,13,92,8,20,4,36,129,0,176,3,0,95,1,
		106,14,97,115,70,114,105,101,110,100,67,108,97,115,
		115,0,92,14,92,9,20,4,36,130,0,176,3,0,
		95,1,106,15,95,97,115,70,114,105,101,110,100,67,
		108,97,115,115,0,92,14,92,8,20,4,36,131,0,
		176,3,0,95,1,106,13,97,115,70,114,105,101,110,
		100,70,117,110,99,0,92,15,92,9,20,4,36,132,
		0,176,3,0,95,1,106,14,95,97,115,70,114,105,
		101,110,100,70,117,110,99,0,92,15,92,8,20,4,
		36,133,0,176,3,0,95,1,106,11,115,67,108,97,
		115,115,70,117,110,99,0,92,16,92,9,20,4,36,
		134,0,176,3,0,95,1,106,12,95,115,67,108,97,
		115,115,70,117,110,99,0,92,16,92,8,20,4,167,
		17,0,0,36,142,0,176,24,0,104,1,0,95,1,
		20,2,168,36,148,0,176,25,0,103,1,0,20,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,36,161,0,176,26,0,95,2,12,1,28,
		20,36,162,0,48,27,0,102,95,2,4,1,0,112,
		1,73,26,182,0,36,163,0,176,21,0,95,2,12,
		1,28,18,36,164,0,48,27,0,102,4,0,0,112,
		1,73,26,154,0,36,165,0,176,28,0,95,2,12,
		1,28,24,36,166,0,48,27,0,102,176,29,0,95,
		2,12,1,4,1,0,112,1,73,25,119,36,167,0,
		176,30,0,95,2,12,1,28,107,36,168,0,48,27,
		0,102,4,0,0,112,1,73,36,169,0,95,2,96,
		5,0,129,1,1,28,80,36,171,0,176,26,0,95,
		5,12,1,28,20,36,172,0,176,31,0,48,22,0,
		102,112,0,95,5,20,2,25,44,36,173,0,176,28,
		0,95,5,12,1,28,32,176,21,0,95,5,12,1,
		31,23,36,174,0,176,31,0,48,22,0,102,112,0,
		176,29,0,95,5,12,1,20,2,36,176,0,130,31,
		180,132,36,179,0,48,32,0,102,176,33,0,95,1,
		12,1,112,1,73,36,180,0,48,34,0,102,95,3,
		112,1,73,36,181,0,48,35,0,102,176,36,0,95,
		4,9,12,2,112,1,73,36,183,0,48,37,0,102,
		4,0,0,112,1,73,36,184,0,48,38,0,102,4,
		0,0,112,1,73,36,185,0,48,39,0,102,4,0,
		0,112,1,73,36,186,0,48,40,0,102,4,0,0,
		112,1,73,36,187,0,48,41,0,102,4,0,0,112,
		1,73,36,188,0,48,42,0,102,4,0,0,112,1,
		73,36,189,0,48,43,0,102,4,0,0,112,1,73,
		36,190,0,48,44,0,102,4,0,0,112,1,73,36,
		191,0,48,45,0,102,4,0,0,112,1,73,36,193,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,201,0,4,0,0,80,4,36,207,0,
		48,22,0,102,112,0,96,1,0,129,1,1,28,37,
		36,208,0,176,46,0,95,1,12,1,165,80,3,121,
		69,28,14,36,209,0,176,31,0,95,4,95,3,20,
		2,36,211,0,130,31,223,132,36,213,0,48,47,0,
		102,176,2,0,48,48,0,102,112,0,176,49,0,48,
		50,0,102,112,0,12,1,95,4,48,51,0,102,112,
		0,48,52,0,102,112,0,12,5,165,80,3,112,1,
		73,36,215,0,176,21,0,95,4,12,1,31,68,95,
		4,122,1,121,69,28,60,36,216,0,176,3,0,95,
		3,106,6,83,85,80,69,82,0,121,92,5,95,4,
		122,1,93,1,2,20,6,36,217,0,176,3,0,95,
		3,106,8,95,95,83,85,80,69,82,0,121,92,5,
		95,4,122,1,93,1,2,20,6,36,219,0,176,3,
		0,95,3,106,10,82,69,65,76,67,76,65,83,83,
		0,121,92,12,121,122,20,6,36,231,0,48,50,0,
		102,112,0,96,1,0,129,1,1,28,81,36,233,0,
		176,3,0,95,3,95,1,122,1,48,53,0,96,1,
		0,112,0,92,9,95,1,92,2,1,95,1,92,4,
		1,20,6,36,235,0,176,3,0,95,3,106,2,95,
		0,95,1,122,1,72,48,53,0,96,1,0,112,0,
		92,8,95,1,92,3,1,95,1,92,4,1,20,6,
		36,236,0,130,31,179,132,36,238,0,48,54,0,102,
		112,0,96,1,0,129,1,1,28,34,36,240,0,176,
		3,0,95,3,95,1,122,1,95,1,92,2,1,121,
		100,95,1,92,3,1,20,6,36,241,0,130,31,226,
		132,36,243,0,176,55,0,95,3,12,1,80,2,36,
		244,0,48,56,0,102,112,0,96,1,0,129,1,1,
		28,83,36,246,0,176,3,0,95,3,95,1,122,1,
		48,53,0,96,1,0,112,0,95,2,72,92,11,95,
		1,92,2,1,95,1,92,4,1,20,6,36,248,0,
		176,3,0,95,3,106,2,95,0,95,1,122,1,72,
		48,53,0,96,1,0,112,0,95,2,72,92,10,100,
		95,1,92,4,1,20,6,36,249,0,130,31,177,132,
		36,251,0,48,57,0,102,112,0,96,1,0,129,1,
		1,28,35,36,253,0,176,3,0,95,3,95,1,122,
		1,95,1,92,2,1,92,3,100,95,1,92,3,1,
		20,6,36,254,0,130,31,225,132,36,0,1,48,58,
		0,102,112,0,96,1,0,129,1,1,28,30,36,1,
		1,176,3,0,95,3,95,1,48,53,0,96,1,0,
		112,0,92,4,20,4,36,2,1,130,31,230,132,36,
		4,1,48,59,0,102,112,0,96,1,0,129,1,1,
		28,43,36,7,1,176,3,0,48,60,0,102,112,0,
		95,1,122,1,95,1,92,2,1,92,16,95,1,92,
		3,1,95,1,92,4,1,20,6,36,8,1,130,31,
		217,132,36,10,1,48,61,0,102,112,0,100,69,28,
		32,36,11,1,176,3,0,95,3,106,10,95,95,79,
		110,69,114,114,111,114,0,48,61,0,102,112,0,92,
		6,20,4,36,14,1,48,62,0,102,112,0,100,69,
		28,35,36,15,1,176,3,0,95,3,106,13,95,95,
		68,101,115,116,114,117,99,116,111,114,0,48,62,0,
		102,112,0,92,13,20,4,36,19,1,48,63,0,102,
		112,0,96,1,0,129,1,1,28,24,36,20,1,176,
		64,0,48,60,0,102,112,0,95,1,20,2,36,21,
		1,130,31,236,132,36,24,1,48,65,0,102,112,0,
		96,1,0,129,1,1,28,24,36,25,1,176,64,0,
		48,60,0,102,112,0,95,1,20,2,36,26,1,130,
		31,236,132,36,28,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( INSTANCE )
{
	static const HB_BYTE pcode[] =
	{
		36,31,1,176,25,0,48,60,0,102,112,0,20,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,37,1,176,36,0,95,5,9,12,2,
		32,148,0,95,3,100,69,29,141,0,95,2,100,8,
		29,134,0,36,39,1,25,48,36,42,1,9,80,2,
		26,120,0,36,48,1,121,80,2,26,111,0,36,52,
		1,134,0,0,0,0,80,2,25,98,36,56,1,22,
		0,0,0,0,0,0,0,0,80,2,25,82,176,66,
		0,95,3,12,1,133,10,0,97,76,0,0,0,25,
		195,97,108,0,0,0,25,188,97,73,0,0,0,25,
		190,97,105,0,0,0,25,183,97,78,0,0,0,25,
		176,97,110,0,0,0,25,169,97,68,0,0,0,25,
		171,97,100,0,0,0,25,164,97,84,0,0,0,25,
		169,97,116,0,0,0,25,162,36,61,1,176,31,0,
		48,50,0,102,112,0,95,1,95,2,95,3,176,36,
		0,95,4,122,12,2,4,4,0,20,2,36,63,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDMULTIDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,36,69,1,95,4,96,6,0,129,1,1,
		28,40,36,70,1,176,28,0,95,6,12,1,28,22,
		36,71,1,48,67,0,102,95,6,95,2,95,1,95,
		3,95,5,112,5,73,36,73,1,130,31,220,132,36,
		75,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDCLASSDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,81,1,176,36,0,95,5,9,12,2,
		32,148,0,95,3,100,69,29,141,0,95,2,100,8,
		29,134,0,36,83,1,25,48,36,86,1,9,80,2,
		26,120,0,36,92,1,121,80,2,26,111,0,36,96,
		1,134,0,0,0,0,80,2,25,98,36,100,1,22,
		0,0,0,0,0,0,0,0,80,2,25,82,176,66,
		0,95,3,12,1,133,10,0,97,76,0,0,0,25,
		195,97,108,0,0,0,25,188,97,73,0,0,0,25,
		190,97,105,0,0,0,25,183,97,78,0,0,0,25,
		176,97,110,0,0,0,25,169,97,68,0,0,0,25,
		171,97,100,0,0,0,25,164,97,84,0,0,0,25,
		169,97,116,0,0,0,25,162,36,107,1,176,31,0,
		48,56,0,102,112,0,95,1,95,2,95,3,176,68,
		0,176,36,0,95,4,122,12,2,92,64,12,2,4,
		4,0,20,2,36,109,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDMULTICLSDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,36,115,1,95,4,96,6,0,129,1,1,
		28,40,36,116,1,176,28,0,95,6,12,1,28,22,
		36,117,1,48,69,0,102,95,6,95,2,95,1,95,
		3,95,5,112,5,73,36,119,1,130,31,220,132,36,
		121,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDINLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,125,1,176,31,0,48,57,0,102,112,
		0,95,1,95,2,176,36,0,95,3,122,12,2,4,
		3,0,20,2,36,127,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDMETHOD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,131,1,176,31,0,48,54,0,102,112,
		0,95,1,95,2,176,36,0,95,3,122,12,2,4,
		3,0,20,2,36,133,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDCLSMETHOD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,139,1,176,31,0,48,70,0,102,112,
		0,95,1,95,2,176,68,0,176,36,0,95,3,122,
		12,2,92,64,12,2,4,3,0,20,2,36,141,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDVIRTUAL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,145,1,176,31,0,48,58,0,102,112,
		0,95,1,20,2,36,147,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDDELEGATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,36,154,1,176,28,0,95,1,12,1,28,
		29,36,155,1,176,31,0,48,59,0,102,112,0,95,
		1,95,2,95,3,95,4,4,4,0,20,2,25,59,
		36,156,1,176,30,0,95,1,12,1,28,47,36,157,
		1,95,1,96,5,0,129,1,1,28,33,36,158,1,
		176,31,0,48,59,0,102,112,0,95,5,95,2,95,
		3,95,4,4,4,0,20,2,36,159,1,130,31,227,
		132,36,162,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDFRIENDCLASS )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,36,166,1,102,80,1,36,168,1,176,71,
		0,176,72,0,12,0,89,24,0,1,0,1,0,1,
		0,176,31,0,48,63,0,95,255,112,0,95,1,12,
		2,6,20,2,36,170,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADDFRIENDFUNC )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,36,174,1,102,80,1,36,176,1,176,71,
		0,176,72,0,12,0,89,24,0,1,0,1,0,1,
		0,176,31,0,48,65,0,95,255,112,0,95,1,12,
		2,6,20,2,36,178,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SETONERROR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,182,1,48,73,0,102,95,1,112,1,
		73,36,184,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SETDESTRUCTOR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,188,1,48,74,0,102,95,1,112,1,
		73,36,190,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( INITCLASS )
{
	static const HB_BYTE pcode[] =
	{
		36,193,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,76,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

