

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:27:22 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits2_0.idl:
    Oicf, W1, Zp8, env=Win64 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "bits2_0.h"

#define TYPE_FORMAT_STRING_SIZE   69                                
#define PROC_FORMAT_STRING_SIZE   259                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _bits2_0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_TYPE_FORMAT_STRING;

typedef struct _bits2_0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_PROC_FORMAT_STRING;

typedef struct _bits2_0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } bits2_0_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const bits2_0_MIDL_TYPE_FORMAT_STRING bits2_0__MIDL_TypeFormatString;
extern const bits2_0_MIDL_PROC_FORMAT_STRING bits2_0__MIDL_ProcFormatString;
extern const bits2_0_MIDL_EXPR_FORMAT_STRING bits2_0__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJob3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyFile2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile2_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const bits2_0_MIDL_PROC_FORMAT_STRING bits2_0__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ReplaceRemotePrefix */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x2b ),	/* 43 */
/*  8 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OldPrefix */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter NewPrefix */

/* 32 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFileWithRanges */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x2c ),	/* 44 */
/* 52 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 60 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RemoteUrl */

/* 70 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter LocalName */

/* 76 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RangeCount */

/* 82 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Ranges */

/* 88 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 90 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 92 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFileACLFlags */

/* 100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2d ),	/* 45 */
/* 108 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 116 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileACLFlags */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x2e ),	/* 46 */
/* 146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileRanges */

/* 176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x6 ),	/* 6 */
/* 184 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 186 */	NdrFcShort( 0x1c ),	/* 28 */
/* 188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 192 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RangeCount */

/* 202 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 206 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter Ranges */

/* 208 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 212 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRemoteName */

/* 220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x7 ),	/* 7 */
/* 228 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 236 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 246 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 250 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const bits2_0_MIDL_TYPE_FORMAT_STRING bits2_0__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 12 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 20 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xffec ),	/* Offset= -20 (6) */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 32 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 36 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x13, 0x0,	/* FC_OP */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 52 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 54 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 56 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 60 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 62 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (6) */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_bits2_0_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBackgroundCopyJob, ver. 0.0,
   GUID={0x37668d37,0x507e,0x4160,{0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12}} */


/* Object interface: IBackgroundCopyJob2, ver. 0.0,
   GUID={0x54b50739,0x686f,0x45eb,{0x9d,0xff,0xd6,0xa9,0xa0,0xfa,0xa9,0xaf}} */


/* Object interface: IBackgroundCopyJob3, ver. 0.0,
   GUID={0x443c8934,0x90ff,0x48ed,{0xbc,0xde,0x26,0xf5,0xc7,0x45,0x00,0x42}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJob3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    44,
    100,
    138
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob3_ProxyInfo =
    {
    &Object_StubDesc,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJob3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(47) _IBackgroundCopyJob3ProxyVtbl = 
{
    &IBackgroundCopyJob3_ProxyInfo,
    &IID_IBackgroundCopyJob3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFileSet */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFile */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::EnumFiles */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Suspend */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Resume */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Cancel */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Complete */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetId */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetType */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProgress */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetTimes */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetState */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetError */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetOwner */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDisplayName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDisplayName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDescription */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDescription */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetPriority */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetPriority */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyFlags */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyFlags */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyInterface */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyInterface */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetMinimumRetryDelay */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetMinimumRetryDelay */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNoProgressTimeout */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNoProgressTimeout */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetErrorCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetProxySettings */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProxySettings */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob::TakeOwnership */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetNotifyCmdLine */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetNotifyCmdLine */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyProgress */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyData */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetReplyFileName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyFileName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetCredentials */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::RemoveCredentials */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::ReplaceRemotePrefix */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::AddFileWithRanges */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::SetFileACLFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::GetFileACLFlags */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyJob3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyJob3StubVtbl =
{
    &IID_IBackgroundCopyJob3,
    &IBackgroundCopyJob3_ServerInfo,
    47,
    &IBackgroundCopyJob3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBackgroundCopyFile, ver. 0.0,
   GUID={0x01b7bd23,0xfb88,0x4a77,{0x84,0x90,0x58,0x91,0xd3,0xe4,0x65,0x3a}} */


/* Object interface: IBackgroundCopyFile2, ver. 0.0,
   GUID={0x83e81b93,0x0873,0x474d,{0x8a,0x8c,0xf2,0x01,0x8b,0x1a,0x93,0x9c}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyFile2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    176,
    220
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile2_ProxyInfo =
    {
    &Object_StubDesc,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyFile2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits2_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IBackgroundCopyFile2ProxyVtbl = 
{
    &IBackgroundCopyFile2_ProxyInfo,
    &IID_IBackgroundCopyFile2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetRemoteName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetLocalName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetProgress */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::GetFileRanges */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::SetRemoteName */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyFile2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyFile2StubVtbl =
{
    &IID_IBackgroundCopyFile2,
    &IBackgroundCopyFile2_ServerInfo,
    8,
    &IBackgroundCopyFile2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_bits2_0_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    bits2_0__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _bits2_0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJob3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyFile2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _bits2_0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJob3StubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyFile2StubVtbl,
    0
};

PCInterfaceName const _bits2_0_InterfaceNamesList[] = 
{
    "IBackgroundCopyJob3",
    "IBackgroundCopyFile2",
    0
};

const IID *  _bits2_0_BaseIIDList[] = 
{
    &IID_IBackgroundCopyJob2,
    &IID_IBackgroundCopyFile,
    0
};


#define _bits2_0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _bits2_0, pIID, n)

int __stdcall _bits2_0_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _bits2_0, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _bits2_0, 2, *pIndex )
    
}

const ExtendedProxyFileInfo bits2_0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _bits2_0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _bits2_0_StubVtblList,
    (const PCInterfaceName * ) & _bits2_0_InterfaceNamesList,
    (const IID ** ) & _bits2_0_BaseIIDList,
    & _bits2_0_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

