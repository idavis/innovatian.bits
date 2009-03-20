

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:29:13 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bits3_0.idl:
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


#include "bits3_0.h"

#define TYPE_FORMAT_STRING_SIZE   275                               
#define PROC_FORMAT_STRING_SIZE   1495                              
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

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x4c ),	/* 76 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 26 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOriginUrl */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileSize */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x5 ),	/* 5 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x2c ),	/* 44 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileModificationTime */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x34 ),	/* 52 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 140 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastAccessTime */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x7 ),	/* 7 */
/* 160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x34 ),	/* 52 */
/* 166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 168 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 178 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 182 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsFileValidated */

/* 190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileRanges */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x9 ),	/* 9 */
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 238 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRangeCount */

/* 248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRanges */

/* 254 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 258 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Return value */

/* 260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x3 ),	/* 3 */
/* 274 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 276 */	NdrFcShort( 0x24 ),	/* 36 */
/* 278 */	NdrFcShort( 0x24 ),	/* 36 */
/* 280 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 282 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 298 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 302 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter pceltFetched */

/* 304 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 308 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumCacheSize */


	/* Procedure Skip */


	/* Procedure Skip */

/* 316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x4 ),	/* 4 */
/* 324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Bytes */


	/* Parameter celt */


	/* Parameter celt */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x5 ),	/* 5 */
/* 362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x6 ),	/* 6 */
/* 394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 402 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 412 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 416 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetConfigurationFlags */


	/* Procedure GetCount */


	/* Procedure GetCount */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x7 ),	/* 7 */
/* 432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFlags */


	/* Parameter puCount */


	/* Parameter puCount */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPeerName */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x3 ),	/* 3 */
/* 470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 488 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 492 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAuthenticated */

/* 500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 516 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAuth */

/* 526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumContentAge */


	/* Procedure IsAvailable */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x5 ),	/* 5 */
/* 546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x24 ),	/* 36 */
/* 552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 554 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSeconds */


	/* Parameter pOnline */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x3 ),	/* 3 */
/* 584 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 586 */	NdrFcShort( 0x24 ),	/* 36 */
/* 588 */	NdrFcShort( 0x24 ),	/* 36 */
/* 590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 592 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 604 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 608 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 610 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 612 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Parameter pceltFetched */

/* 614 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 616 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 618 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 622 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x6 ),	/* 6 */
/* 634 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 652 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 656 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumCacheSize */

/* 664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x3 ),	/* 3 */
/* 672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBytes */

/* 690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumContentAge */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x6 ),	/* 6 */
/* 710 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 718 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetConfigurationFlags */

/* 740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 756 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 774 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumRecords */

/* 778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x9 ),	/* 9 */
/* 786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 794 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnum */

/* 804 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 808 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRecord */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0xa ),	/* 10 */
/* 824 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 826 */	NdrFcShort( 0x44 ),	/* 68 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 832 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 842 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 844 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 846 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ppRecord */

/* 848 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 850 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 852 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 856 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearRecords */

/* 860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0xb ),	/* 11 */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 876 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteRecord */

/* 892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0xc ),	/* 12 */
/* 900 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 902 */	NdrFcShort( 0x44 ),	/* 68 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 908 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 918 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteUrl */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0xd ),	/* 13 */
/* 938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 946 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */

/* 956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 960 */	NdrFcShort( 0xec ),	/* Type Offset=236 */

	/* Return value */

/* 962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 964 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumPeers */

/* 968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0xe ),	/* 14 */
/* 976 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 982 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 984 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnum */

/* 994 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 996 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 998 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 1000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1002 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearPeers */

/* 1006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0xf ),	/* 15 */
/* 1014 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1022 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscoverPeers */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1046 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1054 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1066 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPeerCachingFlags */

/* 1070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1078 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1086 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 1096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPeerCachingFlags */

/* 1108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1124 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFlags */

/* 1134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwnerIntegrityLevel */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1162 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pLevel */

/* 1172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwnerElevationState */

/* 1184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1192 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1200 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pElevated */

/* 1210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMaximumDownloadTime */

/* 1222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1230 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1236 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1238 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Timeout */

/* 1248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMaximumDownloadTime */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1276 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTimeout */

/* 1286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTemporaryName */

/* 1298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1314 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFilename */

/* 1324 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1328 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 1330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1332 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetValidationState */

/* 1336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1352 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValidationState */

/* 1374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0xa ),	/* 10 */
/* 1382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1390 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pState */

/* 1400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsDownloadedFromPeer */

/* 1412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0xb ),	/* 11 */
/* 1420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1428 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FileTransferred */

/* 1450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1458 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1466 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1480 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Parameter pFile */

/* 1482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1486 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1492 */	0x8,		/* FC_LONG */
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
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 74 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 78 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 82 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 84 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (60) */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	
			0x11, 0x0,	/* FC_RP */
/* 92 */	NdrFcShort( 0x14 ),	/* Offset= 20 (112) */
/* 94 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 96 */	NdrFcLong( 0x659cdeaf ),	/* 1704779439 */
/* 100 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 102 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 104 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 106 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 108 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 110 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 112 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 120 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 122 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 128 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (94) */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 136 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 144 */	NdrFcLong( 0x659cdea4 ),	/* 1704779428 */
/* 148 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 150 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 152 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 154 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 156 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 158 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 160 */	0x11, 0x0,	/* FC_RP */
/* 162 */	NdrFcShort( 0x14 ),	/* Offset= 20 (182) */
/* 164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 166 */	NdrFcLong( 0x659cdea2 ),	/* 1704779426 */
/* 170 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 172 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 174 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 176 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 178 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 180 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 182 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 196 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 198 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 200 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (164) */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (208) */
/* 208 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 210 */	NdrFcLong( 0x659cdea5 ),	/* 1704779429 */
/* 214 */	NdrFcShort( 0x489e ),	/* 18590 */
/* 216 */	NdrFcShort( 0x11d9 ),	/* 4569 */
/* 218 */	0xa9,		/* 169 */
			0xcd,		/* 205 */
/* 220 */	0x0,		/* 0 */
			0xd,		/* 13 */
/* 222 */	0x56,		/* 86 */
			0x96,		/* 150 */
/* 224 */	0x52,		/* 82 */
			0x51,		/* 81 */
/* 226 */	0x11, 0x0,	/* FC_RP */
/* 228 */	NdrFcShort( 0xff28 ),	/* Offset= -216 (12) */
/* 230 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 232 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (94) */
/* 234 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 240 */	NdrFcLong( 0x37668d37 ),	/* 929467703 */
/* 244 */	NdrFcShort( 0x507e ),	/* 20606 */
/* 246 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 248 */	0x93,		/* 147 */
			0x16,		/* 22 */
/* 250 */	0x26,		/* 38 */
			0x30,		/* 48 */
/* 252 */	0x6d,		/* 109 */
			0x15,		/* 21 */
/* 254 */	0xb,		/* 11 */
			0x12,		/* 18 */
/* 256 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 258 */	NdrFcLong( 0x1b7bd23 ),	/* 28818723 */
/* 262 */	NdrFcShort( 0xfb88 ),	/* -1144 */
/* 264 */	NdrFcShort( 0x4a77 ),	/* 19063 */
/* 266 */	0x84,		/* 132 */
			0x90,		/* 144 */
/* 268 */	0x58,		/* 88 */
			0x91,		/* 145 */
/* 270 */	0xd3,		/* 211 */
			0xe4,		/* 228 */
/* 272 */	0x65,		/* 101 */
			0x3a,		/* 58 */

			0x0
        }
    };

static void __RPC_USER IEnumBitsPeerCacheRecords_NextExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(8)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyCallback2 *This;
        ULONG celt;
        char Pad0[4];
        IBitsPeerCacheRecord **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
}

static void __RPC_USER IEnumBitsPeers_NextExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(8)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyCallback2 *This;
        ULONG celt;
        char Pad0[4];
        IBitsPeer **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
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
    38,
    76,
    114,
    152,
    190,
    222
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
    266,
    316,
    354,
    386,
    424
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
    462,
    500,
    538
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
    576,
    316,
    354,
    626,
    424
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
    664,
    316,
    538,
    702,
    424,
    740,
    778,
    816,
    860,
    892,
    930,
    968,
    1006,
    1038
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
    1070,
    1108,
    1146,
    1184,
    1222,
    1260
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
    1298,
    1336,
    1374,
    1412
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
    1450
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
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

