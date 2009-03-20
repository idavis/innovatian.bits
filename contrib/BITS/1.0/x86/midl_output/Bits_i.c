

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:23:20 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\Bits.idl:
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

MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyFile,0x01b7bd23,0xfb88,0x4a77,0x84,0x90,0x58,0x91,0xd3,0xe4,0x65,0x3a);


MIDL_DEFINE_GUID(IID, IID_IEnumBackgroundCopyFiles,0xca51e165,0xc365,0x424c,0x8d,0x41,0x24,0xaa,0xa4,0xff,0x3c,0x40);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyError,0x19c613a0,0xfcb8,0x4f28,0x81,0xae,0x89,0x7c,0x3d,0x07,0x8f,0x81);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyJob,0x37668d37,0x507e,0x4160,0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12);


MIDL_DEFINE_GUID(IID, IID_IEnumBackgroundCopyJobs,0x1af4f612,0x3b71,0x466f,0x8f,0x58,0x7b,0x6f,0x73,0xac,0x57,0xad);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyCallback,0x97ea99c7,0x0186,0x4ad4,0x8d,0xf9,0xc5,0xb4,0xe0,0xed,0x6b,0x22);


MIDL_DEFINE_GUID(IID, IID_AsyncIBackgroundCopyCallback,0xca29d251,0xb4bb,0x4679,0xa3,0xd9,0xae,0x80,0x06,0x11,0x9d,0x54);


MIDL_DEFINE_GUID(IID, IID_IBackgroundCopyManager,0x5ce34c0d,0x0dc9,0x4c1f,0x89,0x7c,0xda,0xa1,0xb7,0x8c,0xee,0x7c);


MIDL_DEFINE_GUID(IID, LIBID_BackgroundCopyManager,0x1deeb74f,0x7915,0x4560,0xb5,0x58,0x91,0x8c,0x83,0xf1,0x76,0xa6);


MIDL_DEFINE_GUID(CLSID, CLSID_BackgroundCopyManager,0x4991d34b,0x80a1,0x4291,0x83,0xb6,0x33,0x28,0x36,0x6b,0x90,0x97);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



