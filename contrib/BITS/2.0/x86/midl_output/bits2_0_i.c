

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:27:04 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits2_0.idl:
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

MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyJob3,0x443c8934,0x90ff,0x48ed,0xbc,0xde,0x26,0xf5,0xc7,0x45,0x00,0x42);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyFile2,0x83e81b93,0x0873,0x474d,0x8a,0x8c,0xf2,0x01,0x8b,0x1a,0x93,0x9c);


MIDL_DEFINE_GUID(IID, LIBID_BackgroundCopyManager2_0,0x2289a9af,0xdc96,0x486e,0xb2,0x68,0x89,0xc9,0xe3,0x39,0x7c,0x3d);


MIDL_DEFINE_GUID(CLSID, CLSID_BackgroundCopyManager2_0,0x6d18ad12,0xbde3,0x4393,0xb3,0x11,0x09,0x9c,0x34,0x6e,0x6d,0xf9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



