/*
 * Harbour 3.2.0dev (r1901140418)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "c:\harbour\src\rdd\rddsys.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( _DBF );
HB_FUNC_EXTERN( DBFNTX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC( RDDSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RDDSYS )
{ "_DBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DBF )}, NULL },
{ "DBFNTX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFNTX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "RDDSYS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( RDDSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RDDSYS, "c:\\harbour\\src\\rdd\\rddsys.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RDDSYS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RDDSYS )
   #include "hbiniseg.h"
#endif

HB_FUNC( RDDSYS )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

