/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rtl\memvarhb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_MVSAVE );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( HB_FNAMEEXTSETDEF );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_LEFTEQ );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( __MVDBGINFO );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HB_WILDMATCHI );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_FCREATE );
HB_FUNC_EXTERN( ERRORNEW );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( HB_SERIALIZE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC( HB_MVRESTORE );
HB_FUNC_EXTERN( __MVCLEAR );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( HB_FREADLEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_DESERIALIZE );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( __MVPUT );
HB_FUNC_EXTERN( __MVSETBASE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MEMVARHB )
{ "HB_MVSAVE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( HB_MVSAVE )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "HB_FNAMEEXTSETDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEEXTSETDEF )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_LEFTEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LEFTEQ )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "__MVDBGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVDBGINFO )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "HB_WILDMATCHI", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_WILDMATCHI )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "HB_FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FCREATE )}, NULL },
{ "ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORNEW )}, NULL },
{ "_SEVERITY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_GENCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBSYSTEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CANRETRY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CANDEFAULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FILENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "_TRIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "HB_SERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SERIALIZE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "_ARGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "_OPERATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "HB_MVRESTORE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_MVRESTORE )}, NULL },
{ "__MVCLEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVCLEAR )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "HB_FREADLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FREADLEN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_DESERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DESERIALIZE )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "__MVPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUT )}, NULL },
{ "__MVSETBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVSETBASE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MEMVARHB, "c:\\harbour\\src\\rtl\\memvarhb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MEMVARHB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MEMVARHB )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_MVSAVE )
{
	static const HB_BYTE pcode[] =
	{
		13,10,3,36,89,0,176,1,0,95,1,12,1,29,
		230,1,36,91,0,176,2,0,92,109,12,1,28,21,
		36,92,0,176,3,0,95,1,106,5,46,104,98,118,
		0,12,2,80,1,36,96,0,176,1,0,95,2,12,
		1,28,24,176,4,0,95,2,12,1,31,15,176,5,
		0,95,2,106,2,42,0,12,2,28,11,36,97,0,
		106,2,42,0,80,2,36,100,0,176,6,0,96,3,
		0,120,20,2,36,102,0,4,0,0,80,9,36,104,
		0,122,92,6,4,2,0,96,7,0,129,1,1,28,
		125,36,105,0,176,7,0,95,7,12,1,80,4,36,
		106,0,122,165,80,11,25,93,36,107,0,176,7,0,
		95,7,95,11,96,6,0,12,3,80,5,36,108,0,
		176,8,0,95,5,12,1,106,6,67,78,68,84,76,
		0,24,28,49,36,109,0,176,9,0,95,2,95,6,
		12,2,80,8,36,110,0,95,3,28,6,95,8,25,
		5,95,8,68,28,19,36,111,0,176,10,0,95,9,
		95,6,95,5,4,2,0,20,2,36,106,0,175,11,
		0,95,4,15,28,162,36,115,0,130,31,135,132,36,
		117,0,121,80,13,36,119,0,176,11,0,95,1,121,
		93,18,3,12,3,165,80,10,92,255,8,29,162,0,
		36,120,0,176,12,0,12,0,80,12,36,122,0,48,
		13,0,95,12,92,2,112,1,73,36,123,0,48,14,
		0,95,12,92,21,112,1,73,36,124,0,48,15,0,
		95,12,106,5,66,65,83,69,0,112,1,73,36,125,
		0,48,16,0,95,12,93,214,7,112,1,73,36,126,
		0,48,17,0,95,12,120,112,1,73,36,127,0,48,
		18,0,95,12,120,112,1,73,36,128,0,48,19,0,
		95,12,95,1,112,1,73,36,129,0,48,20,0,95,
		12,176,21,0,12,0,112,1,73,36,130,0,48,22,
		0,95,12,175,13,0,112,1,73,36,132,0,176,23,
		0,48,24,0,176,25,0,12,0,95,12,112,1,9,
		12,2,32,77,255,36,139,0,95,10,92,255,69,29,
		191,0,36,140,0,176,26,0,95,10,106,7,192,72,
		66,86,1,0,0,20,2,36,141,0,176,26,0,95,
		10,176,27,0,95,9,12,1,20,2,36,142,0,176,
		28,0,95,10,20,1,26,142,0,36,145,0,176,12,
		0,12,0,80,12,36,147,0,48,13,0,95,12,92,
		2,112,1,73,36,148,0,48,14,0,95,12,122,112,
		1,73,36,149,0,48,15,0,95,12,106,5,66,65,
		83,69,0,112,1,73,36,150,0,48,16,0,95,12,
		93,216,7,112,1,73,36,151,0,48,17,0,95,12,
		9,112,1,73,36,152,0,48,18,0,95,12,9,112,
		1,73,36,153,0,48,29,0,95,12,176,30,0,12,
		0,112,1,73,36,154,0,48,31,0,95,12,176,32,
		0,12,0,112,1,73,36,156,0,48,24,0,176,25,
		0,12,0,95,12,112,1,73,36,159,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_MVRESTORE )
{
	static const HB_BYTE pcode[] =
	{
		13,9,4,36,176,0,176,1,0,95,1,12,1,29,
		94,2,36,178,0,176,23,0,95,2,120,12,2,31,
		10,36,179,0,176,34,0,20,0,36,182,0,176,2,
		0,92,109,12,1,28,21,36,183,0,176,3,0,95,
		1,106,5,46,104,98,118,0,12,2,80,1,36,187,
		0,176,1,0,95,1,12,1,28,24,176,4,0,95,
		3,12,1,31,15,176,5,0,95,3,106,2,42,0,
		12,2,28,11,36,188,0,106,2,42,0,80,3,36,
		191,0,176,6,0,96,4,0,120,20,2,36,193,0,
		121,80,13,36,196,0,176,35,0,95,1,12,1,165,
		80,11,92,255,8,29,162,0,36,197,0,176,12,0,
		12,0,80,12,36,199,0,48,13,0,95,12,92,2,
		112,1,73,36,200,0,48,14,0,95,12,92,21,112,
		1,73,36,201,0,48,15,0,95,12,106,5,66,65,
		83,69,0,112,1,73,36,202,0,48,16,0,95,12,
		93,213,7,112,1,73,36,203,0,48,17,0,95,12,
		120,112,1,73,36,204,0,48,18,0,95,12,120,112,
		1,73,36,205,0,48,19,0,95,12,95,1,112,1,
		73,36,206,0,48,20,0,95,12,176,21,0,12,0,
		112,1,73,36,207,0,48,22,0,95,12,175,13,0,
		112,1,73,36,209,0,176,23,0,48,24,0,176,25,
		0,12,0,95,12,112,1,9,12,2,32,81,255,36,
		216,0,95,11,92,255,8,28,8,36,217,0,9,110,
		7,36,220,0,100,80,10,36,222,0,176,36,0,95,
		11,92,6,12,2,106,7,192,72,66,86,1,0,0,
		8,29,251,0,36,224,0,176,37,0,176,38,0,95,
		11,121,92,2,12,3,92,6,49,12,1,80,9,36,
		225,0,176,38,0,95,11,92,6,121,20,3,36,226,
		0,176,39,0,95,11,96,9,0,176,40,0,95,9,
		12,1,20,3,36,227,0,176,28,0,95,11,20,1,
		36,229,0,176,41,0,95,9,12,1,80,8,36,230,
		0,100,80,9,36,232,0,176,42,0,95,8,12,1,
		29,164,0,36,233,0,95,8,96,5,0,129,1,1,
		29,129,0,36,236,0,176,42,0,95,5,12,1,28,
		109,176,40,0,95,5,12,1,92,2,8,28,97,176,
		1,0,95,5,122,1,12,1,28,86,176,4,0,95,
		5,122,1,12,1,31,75,36,238,0,95,5,122,1,
		80,6,36,239,0,176,9,0,95,3,95,6,12,2,
		80,7,36,240,0,95,4,28,6,95,7,25,5,95,
		7,68,28,36,36,241,0,95,10,100,8,28,12,36,
		242,0,95,5,92,2,1,80,10,36,244,0,176,43,
		0,95,6,95,5,92,2,1,20,2,36,247,0,130,
		32,133,255,132,36,248,0,176,44,0,20,0,25,12,
		36,251,0,176,28,0,95,11,20,1,36,254,0,95,
		10,110,7,36,0,1,176,12,0,12,0,80,12,36,
		2,1,48,13,0,95,12,92,2,112,1,73,36,3,
		1,48,14,0,95,12,122,112,1,73,36,4,1,48,
		15,0,95,12,106,5,66,65,83,69,0,112,1,73,
		36,5,1,48,16,0,95,12,93,215,7,112,1,73,
		36,6,1,48,17,0,95,12,9,112,1,73,36,7,
		1,48,18,0,95,12,9,112,1,73,36,8,1,48,
		29,0,95,12,176,30,0,12,0,112,1,73,36,9,
		1,48,31,0,95,12,176,32,0,12,0,112,1,73,
		36,11,1,48,24,0,176,25,0,12,0,95,12,112,
		1,73,36,14,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

