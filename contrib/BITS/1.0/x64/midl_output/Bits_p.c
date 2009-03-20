

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:24:13 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\Bits.idl:
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


#include "Bits.h"

#define TYPE_FORMAT_STRING_SIZE   349                               
#define PROC_FORMAT_STRING_SIZE   2371                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _Bits_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Bits_MIDL_TYPE_FORMAT_STRING;

typedef struct _Bits_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Bits_MIDL_PROC_FORMAT_STRING;

typedef struct _Bits_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Bits_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Bits_MIDL_TYPE_FORMAT_STRING Bits__MIDL_TypeFormatString;
extern const Bits_MIDL_PROC_FORMAT_STRING Bits__MIDL_ProcFormatString;
extern const Bits_MIDL_EXPR_FORMAT_STRING Bits__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyFile_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumBackgroundCopyFiles_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumBackgroundCopyFiles_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyError_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyError_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJob_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumBackgroundCopyJobs_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumBackgroundCopyJobs_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO AsyncIBackgroundCopyCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO AsyncIBackgroundCopyCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyManager_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyManager_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const Bits_MIDL_PROC_FORMAT_STRING Bits__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetRemoteName */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 26 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalName */

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
/* 68 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProgress */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x5 ),	/* 5 */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 102 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x3 ),	/* 3 */
/* 122 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 130 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 146 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 150 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pceltFetched */

/* 152 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 156 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 160 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure Skip */

/* 164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x4 ),	/* 4 */
/* 172 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 180 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */


	/* Parameter celt */

/* 190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 192 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 198 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x5 ),	/* 5 */
/* 210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 218 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 242 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 250 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 264 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCount */


	/* Procedure GetCount */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x7 ),	/* 7 */
/* 280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x24 ),	/* 36 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puCount */


	/* Parameter puCount */

/* 298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetError */

/* 310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x3 ),	/* 3 */
/* 318 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x3e ),	/* 62 */
/* 324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 326 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pContext */

/* 336 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter pCode */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFile */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 380 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Return value */

/* 386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorDescription */

/* 392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x5 ),	/* 5 */
/* 400 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 408 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LanguageId */

/* 418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pErrorDescription */

/* 424 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 428 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorContextDescription */

/* 436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x6 ),	/* 6 */
/* 444 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 450 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 452 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LanguageId */

/* 462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContextDescription */

/* 468 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 472 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProtocol */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x7 ),	/* 7 */
/* 488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 496 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProtocol */

/* 506 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 510 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFileSet */

/* 518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x3 ),	/* 3 */
/* 526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 534 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFileCount */

/* 544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFileSet */

/* 550 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 554 */	NdrFcShort( 0x86 ),	/* Type Offset=134 */

	/* Return value */

/* 556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFile */

/* 562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x4 ),	/* 4 */
/* 570 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 578 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RemoteUrl */

/* 588 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter LocalName */

/* 594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFiles */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x5 ),	/* 5 */
/* 614 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEnum */

/* 632 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 636 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Suspend */

/* 644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x6 ),	/* 6 */
/* 652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 660 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 672 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x7 ),	/* 7 */
/* 684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 692 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 724 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 736 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Complete */

/* 740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x9 ),	/* 9 */
/* 748 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 756 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetId */

/* 772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0xa ),	/* 10 */
/* 780 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x4c ),	/* 76 */
/* 786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 788 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 798 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 800 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 802 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0xb ),	/* 11 */
/* 818 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x22 ),	/* 34 */
/* 824 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 826 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 836 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 840 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProgress */

/* 848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0xc ),	/* 12 */
/* 856 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x44 ),	/* 68 */
/* 862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 864 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 874 */	NdrFcShort( 0x6112 ),	/* Flags:  must free, out, simple ref, srv alloc size=24 */
/* 876 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 878 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimes */

/* 886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0xd ),	/* 13 */
/* 894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x74 ),	/* 116 */
/* 900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 902 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 912 */	NdrFcShort( 0x6112 ),	/* Flags:  must free, out, simple ref, srv alloc size=24 */
/* 914 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 916 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetState */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0xe ),	/* 14 */
/* 932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x22 ),	/* 34 */
/* 938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 940 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 950 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 952 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 954 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 958 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetError */

/* 962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0xf ),	/* 15 */
/* 970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 978 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppError */

/* 988 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 992 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Return value */

/* 994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwner */

/* 1000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1008 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1016 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1026 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1028 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1030 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDisplayName */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1046 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1054 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1064 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1066 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1068 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 1070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1072 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayName */

/* 1076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1084 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1090 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1092 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1102 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDescription */

/* 1114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1140 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1144 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 1146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDescription */

/* 1152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1166 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1168 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1178 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1182 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPriority */

/* 1190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1200 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1220 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 1222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPriority */

/* 1228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1254 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1258 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotifyFlags */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1282 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNotifyFlags */

/* 1304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotifyInterface */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1358 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1372 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNotifyInterface */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1406 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1410 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 1412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1414 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMinimumRetryDelay */

/* 1418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1426 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1452 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMinimumRetryDelay */

/* 1456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1464 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1472 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1482 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNoProgressTimeout */

/* 1494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1510 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNoProgressTimeout */

/* 1532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1540 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1548 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1560 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorCount */

/* 1570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1578 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1586 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Errors */

/* 1596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProxySettings */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1616 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1618 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1624 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProxyUsage */

/* 1634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1638 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ProxyList */

/* 1640 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1642 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1644 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter ProxyBypassList */

/* 1646 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1650 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 1652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProxySettings */

/* 1658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1666 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1672 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1674 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProxyUsage */

/* 1684 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1688 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter pProxyList */

/* 1690 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1694 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pProxyBypassList */

/* 1696 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1700 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1704 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TakeOwnership */

/* 1708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1724 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1748 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1752 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1754 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1756 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 1766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1772 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1774 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1776 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pceltFetched */

/* 1778 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1780 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1782 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1786 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1806 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 1816 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1820 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Return value */

/* 1822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobTransferred */

/* 1828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1854 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1858 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobError */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1874 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1880 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1882 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1892 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1894 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1896 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter pError */

/* 1898 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1900 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1902 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1906 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobModification */

/* 1910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1926 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1936 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1940 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter dwReserved */

/* 1942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobTransferred */

/* 1954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1968 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x2,		/* 2 */
/* 1970 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1980 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1984 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobTransferred */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2000 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 2008 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobError */

/* 2024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2032 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2038 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x3,		/* 3 */
/* 2040 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 2050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2054 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter pError */

/* 2056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2060 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 2062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2064 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobError */

/* 2068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2082 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 2084 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2096 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobModification */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2108 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2114 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x3,		/* 3 */
/* 2116 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 2126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2130 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter dwReserved */

/* 2132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobModification */

/* 2144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2158 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 2160 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateJob */

/* 2176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2184 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2186 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2188 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2190 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2192 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DisplayName */

/* 2202 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2206 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Type */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2212 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pJobId */

/* 2214 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 2216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2218 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Parameter ppJob */

/* 2220 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2222 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2224 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetJob */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2240 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2242 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2248 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter jobID */

/* 2258 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2262 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Parameter ppJob */

/* 2264 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2268 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */

	/* Return value */

/* 2270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumJobs */

/* 2276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2284 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2292 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 2302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2304 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnum */

/* 2308 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2312 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Return value */

/* 2314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2316 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorDescription */

/* 2320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2328 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2336 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hResult */

/* 2346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LanguageId */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pErrorDescription */

/* 2358 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2362 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 2364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2366 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Bits_MIDL_TYPE_FORMAT_STRING Bits__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 16 */	NdrFcShort( 0x18 ),	/* 24 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* Offset= 0 (20) */
/* 22 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 24 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	
			0x11, 0x0,	/* FC_RP */
/* 30 */	NdrFcShort( 0x14 ),	/* Offset= 20 (50) */
/* 32 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 34 */	NdrFcLong( 0x1b7bd23 ),	/* 28818723 */
/* 38 */	NdrFcShort( 0xfb88 ),	/* -1144 */
/* 40 */	NdrFcShort( 0x4a77 ),	/* 19063 */
/* 42 */	0x84,		/* 132 */
			0x90,		/* 144 */
/* 44 */	0x58,		/* 88 */
			0x91,		/* 145 */
/* 46 */	0xd3,		/* 211 */
			0xe4,		/* 228 */
/* 48 */	0x65,		/* 101 */
			0x3a,		/* 58 */
/* 50 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 56 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 58 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 60 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 66 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (32) */
/* 70 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 72 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 74 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 76 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 82 */	NdrFcLong( 0xca51e165 ),	/* -900603547 */
/* 86 */	NdrFcShort( 0xc365 ),	/* -15515 */
/* 88 */	NdrFcShort( 0x424c ),	/* 16972 */
/* 90 */	0x8d,		/* 141 */
			0x41,		/* 65 */
/* 92 */	0x24,		/* 36 */
			0xaa,		/* 170 */
/* 94 */	0xa4,		/* 164 */
			0xff,		/* 255 */
/* 96 */	0x3c,		/* 60 */
			0x40,		/* 64 */
/* 98 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 100 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 104 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 108 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (32) */
/* 110 */	
			0x11, 0x0,	/* FC_RP */
/* 112 */	NdrFcShort( 0x16 ),	/* Offset= 22 (134) */
/* 114 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x10 ),	/* 16 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x6 ),	/* Offset= 6 (126) */
/* 122 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 126 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 128 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 144 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 148 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 150 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 152 */	NdrFcShort( 0xffda ),	/* Offset= -38 (114) */
/* 154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 156 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 158 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 162 */	NdrFcShort( 0x8 ),	/* Offset= 8 (170) */
/* 164 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 170 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 172 */	NdrFcShort( 0x10 ),	/* 16 */
/* 174 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 176 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 178 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (164) */
			0x5b,		/* FC_END */
/* 182 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 188 */	NdrFcShort( 0x18 ),	/* 24 */
/* 190 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 196 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 198 */	NdrFcShort( 0xa ),	/* Offset= 10 (208) */
/* 200 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 208 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x18 ),	/* 24 */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (200) */
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xffee ),	/* Offset= -18 (200) */
/* 220 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0xffea ),	/* Offset= -22 (200) */
/* 224 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (230) */
/* 230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 232 */	NdrFcLong( 0x19c613a0 ),	/* 432411552 */
/* 236 */	NdrFcShort( 0xfcb8 ),	/* -840 */
/* 238 */	NdrFcShort( 0x4f28 ),	/* 20264 */
/* 240 */	0x81,		/* 129 */
			0xae,		/* 174 */
/* 242 */	0x89,		/* 137 */
			0x7c,		/* 124 */
/* 244 */	0x3d,		/* 61 */
			0x7,		/* 7 */
/* 246 */	0x8f,		/* 143 */
			0x81,		/* 129 */
/* 248 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 260 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 262 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 264 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 266 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 268 */	NdrFcShort( 0xffec ),	/* Offset= -20 (248) */
/* 270 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 272 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x11, 0x0,	/* FC_RP */
/* 276 */	NdrFcShort( 0x14 ),	/* Offset= 20 (296) */
/* 278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 280 */	NdrFcLong( 0x37668d37 ),	/* 929467703 */
/* 284 */	NdrFcShort( 0x507e ),	/* 20606 */
/* 286 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 288 */	0x93,		/* 147 */
			0x16,		/* 22 */
/* 290 */	0x26,		/* 38 */
			0x30,		/* 48 */
/* 292 */	0x6d,		/* 109 */
			0x15,		/* 21 */
/* 294 */	0xb,		/* 11 */
			0x12,		/* 18 */
/* 296 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 306 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 310 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 314 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (278) */
/* 316 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 318 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 324 */	NdrFcLong( 0x1af4f612 ),	/* 452261394 */
/* 328 */	NdrFcShort( 0x3b71 ),	/* 15217 */
/* 330 */	NdrFcShort( 0x466f ),	/* 18031 */
/* 332 */	0x8f,		/* 143 */
			0x58,		/* 88 */
/* 334 */	0x7b,		/* 123 */
			0x6f,		/* 111 */
/* 336 */	0x73,		/* 115 */
			0xac,		/* 172 */
/* 338 */	0x57,		/* 87 */
			0xad,		/* 173 */
/* 340 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 342 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (278) */
/* 344 */	
			0x11, 0x0,	/* FC_RP */
/* 346 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (170) */

			0x0
        }
    };

static void __RPC_USER IEnumBackgroundCopyFiles_NextExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(8)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyManager *This;
        ULONG celt;
        char Pad0[4];
        IBackgroundCopyFile **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
}

static void __RPC_USER IEnumBackgroundCopyJobs_NextExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(8)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyManager *This;
        ULONG celt;
        char Pad0[4];
        IBackgroundCopyJob **rgelt;
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
    IEnumBackgroundCopyFiles_NextExprEval_0000
    ,IEnumBackgroundCopyJobs_NextExprEval_0001
    };



/* Standard interface: __MIDL_itf_Bits_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBackgroundCopyFile, ver. 0.0,
   GUID={0x01b7bd23,0xfb88,0x4a77,{0x84,0x90,0x58,0x91,0xd3,0xe4,0x65,0x3a}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyFile_FormatStringOffsetTable[] =
    {
    0,
    38,
    76
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyFile_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyFile_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyFile_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IBackgroundCopyFileProxyVtbl = 
{
    &IBackgroundCopyFile_ProxyInfo,
    &IID_IBackgroundCopyFile,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetRemoteName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetLocalName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyFile::GetProgress */
};

const CInterfaceStubVtbl _IBackgroundCopyFileStubVtbl =
{
    &IID_IBackgroundCopyFile,
    &IBackgroundCopyFile_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumBackgroundCopyFiles, ver. 0.0,
   GUID={0xca51e165,0xc365,0x424c,{0x8d,0x41,0x24,0xaa,0xa4,0xff,0x3c,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumBackgroundCopyFiles_FormatStringOffsetTable[] =
    {
    114,
    164,
    202,
    234,
    272
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumBackgroundCopyFiles_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IEnumBackgroundCopyFiles_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEnumBackgroundCopyFiles_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IEnumBackgroundCopyFiles_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IEnumBackgroundCopyFilesProxyVtbl = 
{
    &IEnumBackgroundCopyFiles_ProxyInfo,
    &IID_IEnumBackgroundCopyFiles,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyFiles::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyFiles::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyFiles::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyFiles::Clone */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyFiles::GetCount */
};

const CInterfaceStubVtbl _IEnumBackgroundCopyFilesStubVtbl =
{
    &IID_IEnumBackgroundCopyFiles,
    &IEnumBackgroundCopyFiles_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBackgroundCopyError, ver. 0.0,
   GUID={0x19c613a0,0xfcb8,0x4f28,{0x81,0xae,0x89,0x7c,0x3d,0x07,0x8f,0x81}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyError_FormatStringOffsetTable[] =
    {
    310,
    354,
    392,
    436,
    480
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyError_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyError_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyError_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyError_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IBackgroundCopyErrorProxyVtbl = 
{
    &IBackgroundCopyError_ProxyInfo,
    &IID_IBackgroundCopyError,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyError::GetError */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyError::GetFile */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyError::GetErrorDescription */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyError::GetErrorContextDescription */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyError::GetProtocol */
};

const CInterfaceStubVtbl _IBackgroundCopyErrorStubVtbl =
{
    &IID_IBackgroundCopyError,
    &IBackgroundCopyError_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBackgroundCopyJob, ver. 0.0,
   GUID={0x37668d37,0x507e,0x4160,{0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJob_FormatStringOffsetTable[] =
    {
    518,
    562,
    606,
    644,
    676,
    708,
    740,
    772,
    810,
    848,
    886,
    924,
    962,
    1000,
    1038,
    1076,
    1114,
    1152,
    1190,
    1228,
    1266,
    1304,
    1342,
    1380,
    1418,
    1456,
    1494,
    1532,
    1570,
    1608,
    1658,
    1708
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJob_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(35) _IBackgroundCopyJobProxyVtbl = 
{
    &IBackgroundCopyJob_ProxyInfo,
    &IID_IBackgroundCopyJob,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFileSet */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::AddFile */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::EnumFiles */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Suspend */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Resume */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Cancel */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::Complete */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetId */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetType */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProgress */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetTimes */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetState */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetError */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetOwner */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDisplayName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDisplayName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetDescription */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetDescription */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetPriority */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetPriority */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyFlags */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNotifyInterface */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNotifyInterface */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetMinimumRetryDelay */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetMinimumRetryDelay */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetNoProgressTimeout */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetNoProgressTimeout */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetErrorCount */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::SetProxySettings */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::GetProxySettings */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob::TakeOwnership */
};

const CInterfaceStubVtbl _IBackgroundCopyJobStubVtbl =
{
    &IID_IBackgroundCopyJob,
    &IBackgroundCopyJob_ServerInfo,
    35,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumBackgroundCopyJobs, ver. 0.0,
   GUID={0x1af4f612,0x3b71,0x466f,{0x8f,0x58,0x7b,0x6f,0x73,0xac,0x57,0xad}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumBackgroundCopyJobs_FormatStringOffsetTable[] =
    {
    1740,
    164,
    202,
    1790,
    272
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumBackgroundCopyJobs_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IEnumBackgroundCopyJobs_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEnumBackgroundCopyJobs_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IEnumBackgroundCopyJobs_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IEnumBackgroundCopyJobsProxyVtbl = 
{
    &IEnumBackgroundCopyJobs_ProxyInfo,
    &IID_IEnumBackgroundCopyJobs,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyJobs::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyJobs::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyJobs::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyJobs::Clone */ ,
    (void *) (INT_PTR) -1 /* IEnumBackgroundCopyJobs::GetCount */
};

const CInterfaceStubVtbl _IEnumBackgroundCopyJobsStubVtbl =
{
    &IID_IEnumBackgroundCopyJobs,
    &IEnumBackgroundCopyJobs_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Bits_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IBackgroundCopyCallback, ver. 0.0,
   GUID={0x97ea99c7,0x0186,0x4ad4,{0x8d,0xf9,0xc5,0xb4,0xe0,0xed,0x6b,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyCallback_FormatStringOffsetTable[] =
    {
    1828,
    1866,
    1910
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyCallback_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IBackgroundCopyCallbackProxyVtbl = 
{
    &IBackgroundCopyCallback_ProxyInfo,
    &IID_IBackgroundCopyCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobTransferred */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobError */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyCallback::JobModification */
};

const CInterfaceStubVtbl _IBackgroundCopyCallbackStubVtbl =
{
    &IID_IBackgroundCopyCallback,
    &IBackgroundCopyCallback_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: AsyncIBackgroundCopyCallback, ver. 0.0,
   GUID={0xca29d251,0xb4bb,0x4679,{0xa3,0xd9,0xae,0x80,0x06,0x11,0x9d,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short AsyncIBackgroundCopyCallback_FormatStringOffsetTable[] =
    {
    1954,
    1992,
    2024,
    2068,
    2100,
    2144
    };

static const MIDL_STUBLESS_PROXY_INFO AsyncIBackgroundCopyCallback_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &AsyncIBackgroundCopyCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO AsyncIBackgroundCopyCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &AsyncIBackgroundCopyCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _AsyncIBackgroundCopyCallbackProxyVtbl = 
{
    &AsyncIBackgroundCopyCallback_ProxyInfo,
    &IID_AsyncIBackgroundCopyCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Begin_JobTransferred */ ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Finish_JobTransferred */ ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Begin_JobError */ ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Finish_JobError */ ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Begin_JobModification */ ,
    (void *) (INT_PTR) -1 /* AsyncIBackgroundCopyCallback::Finish_JobModification */
};

CInterfaceStubVtbl _AsyncIBackgroundCopyCallbackStubVtbl =
{
    &IID_AsyncIBackgroundCopyCallback,
    &AsyncIBackgroundCopyCallback_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdAsyncStubBuffer_METHODS
};


/* Object interface: IBackgroundCopyManager, ver. 0.0,
   GUID={0x5ce34c0d,0x0dc9,0x4c1f,{0x89,0x7c,0xda,0xa1,0xb7,0x8c,0xee,0x7c}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyManager_FormatStringOffsetTable[] =
    {
    2176,
    2232,
    2276,
    2320
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyManager_ProxyInfo =
    {
    &Object_StubDesc,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyManager_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyManager_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits__MIDL_ProcFormatString.Format,
    &IBackgroundCopyManager_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IBackgroundCopyManagerProxyVtbl = 
{
    &IBackgroundCopyManager_ProxyInfo,
    &IID_IBackgroundCopyManager,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyManager::CreateJob */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyManager::GetJob */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyManager::EnumJobs */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyManager::GetErrorDescription */
};

const CInterfaceStubVtbl _IBackgroundCopyManagerStubVtbl =
{
    &IID_IBackgroundCopyManager,
    &IBackgroundCopyManager_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_Bits_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

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
    Bits__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * _Bits_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyManagerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumBackgroundCopyJobsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyFileProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJobProxyVtbl,
    ( CInterfaceProxyVtbl *) &_AsyncIBackgroundCopyCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumBackgroundCopyFilesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyErrorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyCallbackProxyVtbl,
    0
};

const CInterfaceStubVtbl * _Bits_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBackgroundCopyManagerStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumBackgroundCopyJobsStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyFileStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJobStubVtbl,
    ( CInterfaceStubVtbl *) &_AsyncIBackgroundCopyCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumBackgroundCopyFilesStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyErrorStubVtbl,
    ( CInterfaceStubVtbl *) &_IBackgroundCopyCallbackStubVtbl,
    0
};

PCInterfaceName const _Bits_InterfaceNamesList[] = 
{
    "IBackgroundCopyManager",
    "IEnumBackgroundCopyJobs",
    "IBackgroundCopyFile",
    "IBackgroundCopyJob",
    "AsyncIBackgroundCopyCallback",
    "IEnumBackgroundCopyFiles",
    "IBackgroundCopyError",
    "IBackgroundCopyCallback",
    0
};


#define _Bits_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Bits, pIID, n)

int __stdcall _Bits_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Bits, 8, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _Bits, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _Bits, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Bits, 8, *pIndex )
    
}

static const IID * _AsyncInterfaceTable[] = 
{
    (IID*) 0,
    (IID*) 0,
    (IID*) 0,
    (IID*) 0,
    (IID*) -1,
    (IID*) 0,
    (IID*) 0,
    (IID*) &IID_AsyncIBackgroundCopyCallback,
    (IID*) 0
};

const ExtendedProxyFileInfo Bits_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Bits_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Bits_StubVtblList,
    (const PCInterfaceName * ) & _Bits_InterfaceNamesList,
    0, // no delegation
    & _Bits_IID_Lookup, 
    8,
    6,
    (const IID**) &_AsyncInterfaceTable[0], /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

