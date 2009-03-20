

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 11:26:25 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bitscfg.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IBITSExtensionSetup,0x29cfbbf7,0x09e4,0x4b97,0xb0,0xbc,0xf2,0x28,0x7e,0x3d,0x8e,0xb3);


MIDL_DEFINE_GUID(IID, IID_IBITSExtensionSetupFactory,0xd5d2d542,0x5503,0x4e64,0x8b,0x48,0x72,0xef,0x91,0xa3,0x2e,0xe1);


MIDL_DEFINE_GUID(IID, LIBID_BITSExtensionSetup,0xB0937B9C,0xD66D,0x4d9b,0xB7,0x41,0x49,0xC6,0xD6,0x6A,0x1C,0xD5);


MIDL_DEFINE_GUID(CLSID, CLSID_BITSExtensionSetupFactory,0xefbbab68,0x7286,0x4783,0x94,0xbf,0x94,0x61,0xd8,0xb7,0xe7,0xe9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



