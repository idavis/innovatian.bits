

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "bits3_0.h"

#define TYPE_FORMAT_STRING_SIZE   269                               
#define PROC_FORMAT_STRING_SIZE   1417                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _bits3_0_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } bits3_0_MIDL_TYPE_FORMAT_STRING;

typedef struct _bits3_0_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } bits3_0_MIDL_PROC_FORMAT_STRING;

typedef struct _bits3_0_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } bits3_0_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const bits3_0_MIDL_TYPE_FORMAT_STRING bits3_0__MIDL_TypeFormatString;
extern const bits3_0_MIDL_PROC_FORMAT_STRING bits3_0__MIDL_ProcFormatString;
extern const bits3_0_MIDL_EXPR_FORMAT_STRING bits3_0__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBitsPeerCacheRecord_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBitsPeerCacheRecord_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumBitsPeerCacheRecords_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumBitsPeerCacheRecords_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBitsPeer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBitsPeer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumBitsPeers_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumBitsPeers_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBitsPeerCacheAdministration_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBitsPeerCacheAdministration_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJob4_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob4_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyFile3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyCallback2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyCallback2_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const bits3_0_MIDL_PROC_FORMAT_STRING bits3_0__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetId */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x4c ),	/* 76 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 24 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOriginUrl */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 60 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileSize */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x2c ),	/* 44 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileModificationTime */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x6 ),	/* 6 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x34 ),	/* 52 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 132 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastAccessTime */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x7 ),	/* 7 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x34 ),	/* 52 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 168 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsFileValidated */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileRanges */

/* 210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x9 ),	/* 9 */
/* 218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x24 ),	/* 36 */
/* 224 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 226 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 228 */	NdrFcShort( 0x1 ),	/* 1 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRangeCount */

/* 234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRanges */

/* 240 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 244 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x3 ),	/* 3 */
/* 260 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 264 */	NdrFcShort( 0x24 ),	/* 36 */
/* 266 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 268 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 282 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Parameter pceltFetched */

/* 288 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumCacheSize */


	/* Procedure Skip */


	/* Procedure Skip */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Bytes */


	/* Parameter celt */


	/* Parameter celt */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x5 ),	/* 5 */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x6 ),	/* 6 */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetConfigurationFlags */


	/* Procedure GetCount */


	/* Procedure GetCount */

/* 402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x7 ),	/* 7 */
/* 410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x24 ),	/* 36 */
/* 416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFlags */


	/* Parameter puCount */


	/* Parameter puCount */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPeerName */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x3 ),	/* 3 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 452 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 462 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAuthenticated */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAuth */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumContentAge */


	/* Procedure IsAvailable */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x5 ),	/* 5 */
/* 518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x24 ),	/* 36 */
/* 524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 526 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSeconds */


	/* Parameter pOnline */

/* 534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x3 ),	/* 3 */
/* 554 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 556 */	NdrFcShort( 0x24 ),	/* 36 */
/* 558 */	NdrFcShort( 0x24 ),	/* 36 */
/* 560 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 562 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 576 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 580 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter pceltFetched */

/* 582 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x6 ),	/* 6 */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 610 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 618 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumCacheSize */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x3 ),	/* 3 */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x24 ),	/* 36 */
/* 644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBytes */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumContentAge */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x6 ),	/* 6 */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetConfigurationFlags */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumRecords */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x9 ),	/* 9 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnum */

/* 762 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 766 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRecord */

/* 774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0xa ),	/* 10 */
/* 782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 784 */	NdrFcShort( 0x44 ),	/* 68 */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 798 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 802 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ppRecord */

/* 804 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearRecords */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0xb ),	/* 11 */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteRecord */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0xc ),	/* 12 */
/* 854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 856 */	NdrFcShort( 0x44 ),	/* 68 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 870 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteUrl */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0xd ),	/* 13 */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 898 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */

/* 906 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 910 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumPeers */

/* 918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0xe ),	/* 14 */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 934 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnum */

/* 942 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 946 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */

	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearPeers */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0xf ),	/* 15 */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 970 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscoverPeers */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPeerCachingFlags */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPeerCachingFlags */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1066 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFlags */

/* 1074 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwnerIntegrityLevel */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1102 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pLevel */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwnerElevationState */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1138 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pElevated */

/* 1146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumDownloadTime */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Timeout */

/* 1182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumDownloadTime */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTimeout */

/* 1218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTemporaryName */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1246 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFilename */

/* 1254 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1258 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetValidationState */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1282 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValidationState */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0xa ),	/* 10 */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pState */

/* 1326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsDownloadedFromPeer */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0xb ),	/* 11 */
/* 1346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1354 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FileTransferred */

/* 1374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1388 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1390 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1398 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1402 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter pFile */

/* 1404 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1408 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const bits3_0_MIDL_TYPE_FORMAT_STRING bits3_0__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 30 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 32 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 34 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 46 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 48 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 50 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x13, 0x0,	/* FC_OP */
/* 58 */	NdrFcShort( 0xa ),	/* Offset= 10 (68) */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 62 */	NdrFcShort( 0x10 ),	/* 16 */
/* 64 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 70 */	NdrFcShort( 0x10 ),	/* 16 */
/* 72 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 78 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0xffec ),	/* Offset= -20 (60) */
/* 82 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0x14 ),	/* Offset= 20 (106) */
/* 88 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 90 */	NdrFcLong( 0x659cdeaf ),	/* 1704779439 */
/* 94 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 96 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 98 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 100 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 102 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 104 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 106 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 116 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 122 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 124 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (88) */
/* 126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 128 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 130 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (136) */
/* 136 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 138 */	NdrFcLong( 0x659cdea4 ),	/* 1704779428 */
/* 142 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 144 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 146 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 148 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 150 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 152 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 154 */	0x11, 0x0,	/* FC_RP */
/* 156 */	NdrFcShort( 0x14 ),	/* Offset= 20 (176) */
/* 158 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 160 */	NdrFcLong( 0x659cdea2 ),	/* 1704779426 */
/* 164 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 166 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 168 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 170 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 172 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 174 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 176 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 186 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 190 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 192 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 194 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (158) */
/* 196 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 198 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 204 */	NdrFcLong( 0x659cdea5 ),	/* 1704779429 */
/* 208 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 210 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 212 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 214 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 216 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 218 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 220 */	0x11, 0x0,	/* FC_RP */
/* 222 */	NdrFcShort( 0xff2e ),	/* Offset= -210 (12) */
/* 224 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 226 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (88) */
/* 228 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 234 */	NdrFcLong( 0x37668d37 ),	/* 929467703 */
/* 238 */	NdrFcShort( 0x507e ),	/* 20606 */
/* 240 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 242 */	0x93,		/* 147 */
			0x16,		/* 22 */
/* 244 */	0x26,		/* 38 */
			0x30,		/* 48 */
/* 246 */	0x6d,		/* 109 */
			0x15,		/* 21 */
/* 248 */	0xb,		/* 11 */
			0x12,		/* 18 */
/* 250 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 252 */	NdrFcLong( 0x1b7bd23 ),	/* 28818723 */
/* 256 */	NdrFcShort( 0xfb88 ),	/* -1144 */
/* 258 */	NdrFcShort( 0x4a77 ),	/* 19063 */
/* 260 */	0x84,		/* 132 */
			0x90,		/* 144 */
/* 262 */	0x58,		/* 88 */
			0x91,		/* 145 */
/* 264 */	0xd3,		/* 211 */
			0xe4,		/* 228 */
/* 266 */	0x65,		/* 101 */
			0x3a,		/* 58 */

			0x0
        }
    };

static void __RPC_USER IEnumBitsPeerCacheRecords_NextExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyCallback2 *This;
        ULONG celt;
        IBitsPeerCacheRecord **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
}

static void __RPC_USER IEnumBitsPeers_NextExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyCallback2 *This;
        ULONG celt;
        IBitsPeer **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IEnumBitsPeerCacheRecords_NextExprEval_0000
    ,IEnumBitsPeers_NextExprEval_0001
    };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBitsPeerCacheRecord, ver. 0.0,
   GUID={0x659cdeaf,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBitsPeerCacheRecord_FormatStringOffsetTable[] =
    {
    0,
    36,
    72,
    108,
    144,
    180,
    210
    };

static const MIDL_STUBLESS_PROXY_INFO IBitsPeerCacheRecord_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeerCacheRecord_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBitsPeerCacheRecord_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeerCacheRecord_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IBitsPeerCacheRecordProxyVtbl = 
{
    &IBitsPeerCacheRecord_ProxyInfo,
    &IID_IBitsPeerCacheRecord,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetId */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetOriginUrl */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetFileSize */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetFileModificationTime */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetLastAccessTime */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::IsFileValidated */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheRecord::GetFileRanges */
};

const CInterfaceStubVtbl _IBitsPeerCacheRecordStubVtbl =
{
    &IID_IBitsPeerCacheRecord,
    &IBitsPeerCacheRecord_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumBitsPeerCacheRecords, ver. 0.0,
   GUID={0x659cdea4,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumBitsPeerCacheRecords_FormatStringOffsetTable[] =
    {
    252,
    300,
    336,
    366,
    402
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumBitsPeerCacheRecords_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IEnumBitsPeerCacheRecords_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEnumBitsPeerCacheRecords_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IEnumBitsPeerCacheRecords_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IEnumBitsPeerCacheRecordsProxyVtbl = 
{
    &IEnumBitsPeerCacheRecords_ProxyInfo,
    &IID_IEnumBitsPeerCacheRecords,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeerCacheRecords::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeerCacheRecords::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeerCacheRecords::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeerCacheRecords::Clone */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeerCacheRecords::GetCount */
};

const CInterfaceStubVtbl _IEnumBitsPeerCacheRecordsStubVtbl =
{
    &IID_IEnumBitsPeerCacheRecords,
    &IEnumBitsPeerCacheRecords_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBitsPeer, ver. 0.0,
   GUID={0x659cdea2,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBitsPeer_FormatStringOffsetTable[] =
    {
    438,
    474,
    510
    };

static const MIDL_STUBLESS_PROXY_INFO IBitsPeer_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBitsPeer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IBitsPeerProxyVtbl = 
{
    &IBitsPeer_ProxyInfo,
    &IID_IBitsPeer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBitsPeer::GetPeerName */ ,
    (void *) (INT_PTR) -1 /* IBitsPeer::IsAuthenticated */ ,
    (void *) (INT_PTR) -1 /* IBitsPeer::IsAvailable */
};

const CInterfaceStubVtbl _IBitsPeerStubVtbl =
{
    &IID_IBitsPeer,
    &IBitsPeer_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumBitsPeers, ver. 0.0,
   GUID={0x659cdea5,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumBitsPeers_FormatStringOffsetTable[] =
    {
    546,
    300,
    336,
    594,
    402
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumBitsPeers_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IEnumBitsPeers_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEnumBitsPeers_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IEnumBitsPeers_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IEnumBitsPeersProxyVtbl = 
{
    &IEnumBitsPeers_ProxyInfo,
    &IID_IEnumBitsPeers,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeers::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeers::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeers::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeers::Clone */ ,
    (void *) (INT_PTR) -1 /* IEnumBitsPeers::GetCount */
};

const CInterfaceStubVtbl _IEnumBitsPeersStubVtbl =
{
    &IID_IEnumBitsPeers,
    &IEnumBitsPeers_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBitsPeerCacheAdministration, ver. 0.0,
   GUID={0x659cdead,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBitsPeerCacheAdministration_FormatStringOffsetTable[] =
    {
    630,
    300,
    510,
    666,
    402,
    702,
    738,
    774,
    816,
    846,
    882,
    918,
    954,
    984
    };

static const MIDL_STUBLESS_PROXY_INFO IBitsPeerCacheAdministration_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeerCacheAdministration_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBitsPeerCacheAdministration_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBitsPeerCacheAdministration_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IBitsPeerCacheAdministrationProxyVtbl = 
{
    &IBitsPeerCacheAdministration_ProxyInfo,
    &IID_IBitsPeerCacheAdministration,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::GetMaximumCacheSize */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::SetMaximumCacheSize */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::GetMaximumContentAge */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::SetMaximumContentAge */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::GetConfigurationFlags */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::SetConfigurationFlags */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::EnumRecords */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::GetRecord */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::ClearRecords */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::DeleteRecord */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::DeleteUrl */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::EnumPeers */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::ClearPeers */ ,
    (void *) (INT_PTR) -1 /* IBitsPeerCacheAdministration::DiscoverPeers */
};

const CInterfaceStubVtbl _IBitsPeerCacheAdministrationStubVtbl =
{
    &IID_IBitsPeerCacheAdministration,
    &IBitsPeerCacheAdministration_ServerInfo,
    17,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBackgroundCopyJob, ver. 0.0,
   GUID={0x37668d37,0x507e,0x4160,{0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12}} */


/* Object interface: IBackgroundCopyJob2, ver. 0.0,
   GUID={0x54b50739,0x686f,0x45eb,{0x9d,0xff,0xd6,0xa9,0xa0,0xfa,0xa9,0xaf}} */


/* Object interface: IBackgroundCopyJob3, ver. 0.0,
   GUID={0x443c8934,0x90ff,0x48ed,{0xbc,0xde,0x26,0xf5,0xc7,0x45,0x00,0x42}} */


/* Object interface: IBackgroundCopyJob4, ver. 0.0,
   GUID={0x659cdeae,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJob4_FormatStringOffsetTable[] =
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
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1014,
    1050,
    1086,
    1122,
    1158,
    1194
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob4_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob4_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJob4_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob4_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(53) _IBackgroundCopyJob4ProxyVtbl = 
{
    &IBackgroundCopyJob4_ProxyInfo,
    &IID_IBackgroundCopyJob4,
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
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::ReplaceRemotePrefix */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::AddFileWithRanges */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::SetFileACLFlags */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyJob3::GetFileACLFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::SetPeerCachingFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::GetPeerCachingFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::GetOwnerIntegrityLevel */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::GetOwnerElevationState */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::SetMaximumDownloadTime */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob4::GetMaximumDownloadTime */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyJob4_table[] =
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
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyJob4StubVtbl =
{
    &IID_IBackgroundCopyJob4,
    &IBackgroundCopyJob4_ServerInfo,
    53,
    &IBackgroundCopyJob4_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBackgroundCopyFile, ver. 0.0,
   GUID={0x01b7bd23,0xfb88,0x4a77,{0x84,0x90,0x58,0x91,0xd3,0xe4,0x65,0x3a}} */


/* Object interface: IBackgroundCopyFile2, ver. 0.0,
   GUID={0x83e81b93,0x0873,0x474d,{0x8a,0x8c,0xf2,0x01,0x8b,0x1a,0x93,0x9c}} */


/* Object interface: IBackgroundCopyFile3, ver. 0.0,
   GUID={0x659cdeaa,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyFile3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1230,
    1266,
    1302,
    1338
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile3_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyFile3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IBackgroundCopyFile3ProxyVtbl = 
{
    &IBackgroundCopyFile3_ProxyInfo,
    &IID_IBackgroundCopyFile3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetRemoteName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetLocalName */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetProgress */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::GetFileRanges */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyFile2::SetRemoteName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile3::GetTemporaryName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile3::SetValidationState */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile3::GetValidationState */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile3::IsDownloadedFromPeer */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyFile3_table[] =
{
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

CInterfaceStubVtbl _IBackgroundCopyFile3StubVtbl =
{
    &IID_IBackgroundCopyFile3,
    &IBackgroundCopyFile3_ServerInfo,
    12,
    &IBackgroundCopyFile3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBackgroundCopyCallback, ver. 0.0,
   GUID={0x97ea99c7,0x0186,0x4ad4,{0x8d,0xf9,0xc5,0xb4,0xe0,0xed,0x6b,0x22}} */


/* Object interface: IBackgroundCopyCallback2, ver. 0.0,
   GUID={0x659cdeac,0x489e,0x11d9,{0xa9,0xcd,0x00,0x0d,0x56,0x96,0x52,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyCallback2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1374
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyCallback2_ProxyInfo =
    {
    &Object_StubDesc,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyCallback2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyCallback2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bits3_0__MIDL_ProcFormatString.Format,
    &IBackgroundCopyCallback2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IBackgroundCopyCallback2ProxyVtbl = 
{
    &IBackgroundCopyCallback2_ProxyInfo,
    &IID_IBackgroundCopyCallback2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobTransferred */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobError */ ,
    0 /* (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobModification */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyCallback2::FileTransferred */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyCallback2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyCallback2StubVtbl =
{
    &IID_IBackgroundCopyCallback2,
    &IBackgroundCopyCallback2_ServerInfo,
    7,
    &IBackgroundCopyCallback2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    ExprEvalRoutines,
    0,
    bits3_0__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * _bits3_0_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBitsPeerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumBitsPeerCacheRecordsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumBitsPeersProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyFile3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyCallback2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBitsPeerCacheAdministrationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJob4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBitsPeerCacheRecordProxyVtbl,
    0
};

const CInterfaceStubVtbl * _bits3_0_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBitsPeerStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumBitsPeerCacheRecordsStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumBitsPeersStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyFile3StubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyCallback2StubVtbl,
    ( CInterfaceStubVtbl *) &_IBitsPeerCacheAdministrationStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJob4StubVtbl,
    ( CInterfaceStubVtbl *) &_IBitsPeerCacheRecordStubVtbl,
    0
};

PCInterfaceName const _bits3_0_InterfaceNamesList[] = 
{
    "IBitsPeer",
    "IEnumBitsPeerCacheRecords",
    "IEnumBitsPeers",
    "IBackgroundCopyFile3",
    "IBackgroundCopyCallback2",
    "IBitsPeerCacheAdministration",
    "IBackgroundCopyJob4",
    "IBitsPeerCacheRecord",
    0
};

const IID *  _bits3_0_BaseIIDList[] = 
{
    0,
    0,
    0,
    &IID_IBackgroundCopyFile2,
    &IID_IBackgroundCopyCallback,
    0,
    &IID_IBackgroundCopyJob3,
    0,
    0
};


#define _bits3_0_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _bits3_0, pIID, n)

int __stdcall _bits3_0_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _bits3_0, 8, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _bits3_0, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _bits3_0, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _bits3_0, 8, *pIndex )
    
}

const ExtendedProxyFileInfo bits3_0_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _bits3_0_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _bits3_0_StubVtblList,
    (const PCInterfaceName * ) & _bits3_0_InterfaceNamesList,
    (const IID ** ) & _bits3_0_BaseIIDList,
    & _bits3_0_IID_Lookup, 
    8,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

