

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:27:52 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits2_5.idl:
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


#include "bits2_5.h"

#define TYPE_FORMAT_STRING_SIZE   51                                
#define PROC_FORMAT_STRING_SIZE   341                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _bits2_5_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } bits2_5_MIDL_TYPE_FORMAT_STRING;

typedef struct _bits2_5_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } bits2_5_MIDL_PROC_FORMAT_STRING;

typedef struct _bits2_5_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } bits2_5_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const bits2_5_MIDL_TYPE_FORMAT_STRING bits2_5__MIDL_TypeFormatString;
extern const bits2_5_MIDL_PROC_FORMAT_STRING bits2_5__MIDL_ProcFormatString;
extern const bits2_5_MIDL_EXPR_FORMAT_STRING bits2_5__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJobHttpOptions_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJobHttpOptions_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const bits2_5_MIDL_PROC_FORMAT_STRING bits2_5__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SetClientCertificateByID */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter StoreLocation */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter StoreName */

/* 32 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pCertHashBlob */

/* 38 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 44 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClientCertificateByName */

/* 50 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 60 */	NdrFcShort( 0x6 ),	/* 6 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 66 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter StoreLocation */

/* 76 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 78 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 80 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter StoreName */

/* 82 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 84 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 86 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter SubjectName */

/* 88 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 90 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 92 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveClientCertificate */

/* 100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x5 ),	/* 5 */
/* 108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 116 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClientCertificate */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x22 ),	/* 34 */
/* 146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 148 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStoreLocation */

/* 158 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 160 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 162 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pStoreName */

/* 164 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 166 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 168 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter ppCertHashBlob */

/* 170 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 174 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter pSubjectName */

/* 176 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 178 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 180 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 184 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCustomHeaders */

/* 188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x7 ),	/* 7 */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 204 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RequestHeaders */

/* 214 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 218 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCustomHeaders */

/* 226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRequestHeaders */

/* 252 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSecurityFlags */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x9 ),	/* 9 */
/* 272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 280 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 292 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 298 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSecurityFlags */

/* 302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0xa ),	/* 10 */
/* 310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 318 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFlags */

/* 328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const bits2_5_MIDL_TYPE_FORMAT_STRING bits2_5__MIDL_TypeFormatString =
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
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x40,		/* Corr desc:  constant, val=20 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x14 ),	/* 20 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 32 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	
			0x13, 0x0,	/* FC_OP */
/* 40 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (10) */
/* 42 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 44 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 48 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBackgroundCopyJobHttpOptions, ver. 0.0,
   GUID={0xf1bd1079,0x9f01,0x4bdc,{0x80,0x36,0xf0,0x9b,0x70,0x09,0x50,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJobHttpOptions_FormatStringOffsetTable[] =
    {
    0,
    50,
    100,
    132,
    188,
    226,
    264,
    302
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJobHttpOptions_ProxyInfo =
    {
    &Object_StubDesc,
    bits2_5__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJobHttpOptions_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJobHttpOptions_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits2_5__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJobHttpOptions_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IBackgroundCopyJobHttpOptionsProxyVtbl = 
{
    &IBackgroundCopyJobHttpOptions_ProxyInfo,
    &IID_IBackgroundCopyJobHttpOptions,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::SetClientCertificateByID */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::SetClientCertificateByName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::RemoveClientCertificate */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::GetClientCertificate */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::SetCustomHeaders */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::GetCustomHeaders */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::SetSecurityFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJobHttpOptions::GetSecurityFlags */
};

const CInterfaceStubVtbl _IBackgroundCopyJobHttpOptionsStubVtbl =
{
    &IID_IBackgroundCopyJobHttpOptions,
    &IBackgroundCopyJobHttpOptions_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_bits2_5_0000_0001, ver. 0.0,
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
    bits2_5__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * _bits2_5_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJobHttpOptionsProxyVtbl,
    0
};

const CInterfaceStubVtbl * _bits2_5_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJobHttpOptionsStubVtbl,
    0
};

PCInterfaceName const _bits2_5_InterfaceNamesList[] = 
{
    "IBackgroundCopyJobHttpOptions",
    0
};


#define _bits2_5_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _bits2_5, pIID, n)

int __stdcall _bits2_5_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_bits2_5_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo bits2_5_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _bits2_5_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _bits2_5_StubVtblList,
    (const PCInterfaceName * ) & _bits2_5_InterfaceNamesList,
    0, // no delegation
    & _bits2_5_IID_Lookup, 
    1,
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

