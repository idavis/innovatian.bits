

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:28:59 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits3_0.idl:
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

MIDL_DEFINE_GUID(IID, IID_IBitsPeerCacheRecord,0x659cdeaf,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IEnumBitsPeerCacheRecords,0x659cdea4,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IBitsPeer,0x659cdea2,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IEnumBitsPeers,0x659cdea5,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IBitsPeerCacheAdministration,0x659cdead,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyJob4,0x659cdeae,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyFile3,0x659cdeaa,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyCallback2,0x659cdeac,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(IID, LIBID_BackgroundCopyManager3_0,0x659cdea6,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_BackgroundCopyManager3_0,0x659cdea7,0x489e,0x11d9,0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



