

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "Bits.h"

#define TYPE_FORMAT_STRING_SIZE   379                               
#define PROC_FORMAT_STRING_SIZE   2251                              
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

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch, [async_uuid] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
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
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 24 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalName */

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
/* 64 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProgress */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 96 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x3 ),	/* 3 */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	NdrFcShort( 0x24 ),	/* 36 */
/* 120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 138 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pceltFetched */

/* 144 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure Skip */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */


	/* Parameter celt */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x5 ),	/* 5 */
/* 200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x6 ),	/* 6 */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCount */


	/* Procedure GetCount */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x7 ),	/* 7 */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter puCount */


	/* Parameter puCount */

/* 282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetError */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x3 ),	/* 3 */
/* 302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x3e ),	/* 62 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pContext */

/* 318 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter pCode */

/* 324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFile */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x4 ),	/* 4 */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 360 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Return value */

/* 366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorDescription */

/* 372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x5 ),	/* 5 */
/* 380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LanguageId */

/* 396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pErrorDescription */

/* 402 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorContextDescription */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x6 ),	/* 6 */
/* 422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LanguageId */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContextDescription */

/* 444 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProtocol */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x7 ),	/* 7 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProtocol */

/* 480 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFileSet */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x3 ),	/* 3 */
/* 500 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 508 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cFileCount */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFileSet */

/* 522 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 526 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFile */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RemoteUrl */

/* 558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter LocalName */

/* 564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFiles */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x5 ),	/* 5 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEnum */

/* 600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Suspend */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x6 ),	/* 6 */
/* 620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x7 ),	/* 7 */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 658 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Complete */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x9 ),	/* 9 */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetId */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0xa ),	/* 10 */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x4c ),	/* 76 */
/* 746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 756 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0xb ),	/* 11 */
/* 776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x22 ),	/* 34 */
/* 782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 792 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 796 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProgress */

/* 804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0xc ),	/* 12 */
/* 812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x44 ),	/* 68 */
/* 818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 828 */	NdrFcShort( 0x6112 ),	/* Flags:  must free, out, simple ref, srv alloc size=24 */
/* 830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 832 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimes */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0xd ),	/* 13 */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x74 ),	/* 116 */
/* 854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 864 */	NdrFcShort( 0x6112 ),	/* Flags:  must free, out, simple ref, srv alloc size=24 */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetState */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0xe ),	/* 14 */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x22 ),	/* 34 */
/* 890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 900 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 904 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetError */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0xf ),	/* 15 */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppError */

/* 936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 940 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOwner */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 972 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 976 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDisplayName */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x11 ),	/* 17 */
/* 992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1008 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayName */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1044 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDescription */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1080 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDescription */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1116 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPriority */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPriority */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1188 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1192 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotifyFlags */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNotifyFlags */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotifyInterface */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1286 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Val */

/* 1296 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNotifyInterface */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1332 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1336 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMinimumRetryDelay */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMinimumRetryDelay */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNoProgressTimeout */

/* 1416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNoProgressTimeout */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Seconds */

/* 1476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorCount */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Errors */

/* 1512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProxySettings */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1532 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1534 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProxyUsage */

/* 1548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ProxyList */

/* 1554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Parameter ProxyBypassList */

/* 1560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1564 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProxySettings */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1580 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1586 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProxyUsage */

/* 1596 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1600 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter pProxyList */

/* 1602 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1606 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pProxyBypassList */

/* 1608 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1612 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TakeOwnership */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1662 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1664 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1666 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1680 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Parameter pceltFetched */

/* 1686 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1694 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1712 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 1722 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1726 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobTransferred */

/* 1734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobError */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Parameter pError */

/* 1800 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1804 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure JobModification */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1820 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1826 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1836 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1840 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Parameter dwReserved */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobTransferred */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x2,		/* 2 */
/* 1870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1878 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1882 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobTransferred */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 1906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobError */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x3,		/* 3 */
/* 1936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 1944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Parameter pError */

/* 1950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobError */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1976 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 1978 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_JobModification */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x66,		/* Oi2 Flags:  clt must size, has return, has async uuid, has ext, */
			0x3,		/* 3 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pJob */

/* 2016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Parameter dwReserved */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_JobModification */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 2050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateJob */

/* 2064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2072 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2074 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2076 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2078 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DisplayName */

/* 2088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2092 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter Type */

/* 2094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pJobId */

/* 2100 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter ppJob */

/* 2106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2110 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetJob */

/* 2118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2128 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter jobID */

/* 2142 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2146 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter ppJob */

/* 2148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2152 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 2154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumJobs */

/* 2160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2174 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 2184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnum */

/* 2190 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2194 */	NdrFcShort( 0x15c ),	/* Type Offset=348 */

	/* Return value */

/* 2196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetErrorDescription */

/* 2202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2210 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2216 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hResult */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LanguageId */

/* 2232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pErrorDescription */

/* 2238 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2248 */	0x8,		/* FC_LONG */
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
/* 56 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
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
/* 112 */	NdrFcShort( 0x20 ),	/* Offset= 32 (144) */
/* 114 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 128 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	NdrFcShort( 0x4 ),	/* 4 */
/* 136 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 144 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 148 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 152 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 154 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 156 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x2 ),	/* 2 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 170 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 178 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 180 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 182 */	0x0,		/* 0 */
			NdrFcShort( 0xffbb ),	/* Offset= -69 (114) */
			0x5b,		/* FC_END */
/* 186 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 188 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 192 */	NdrFcShort( 0x8 ),	/* Offset= 8 (200) */
/* 194 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 200 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 204 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 206 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 208 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (194) */
			0x5b,		/* FC_END */
/* 212 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 218 */	NdrFcShort( 0x18 ),	/* 24 */
/* 220 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 222 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 224 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 228 */	NdrFcShort( 0xa ),	/* Offset= 10 (238) */
/* 230 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 238 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 240 */	NdrFcShort( 0x18 ),	/* 24 */
/* 242 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (230) */
/* 246 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0xffee ),	/* Offset= -18 (230) */
/* 250 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0xffea ),	/* Offset= -22 (230) */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (260) */
/* 260 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 262 */	NdrFcLong( 0x19c613a0 ),	/* 432411552 */
/* 266 */	NdrFcShort( 0xfcb8 ),	/* -840 */
/* 268 */	NdrFcShort( 0x4f28 ),	/* 20264 */
/* 270 */	0x81,		/* 129 */
			0xae,		/* 174 */
/* 272 */	0x89,		/* 137 */
			0x7c,		/* 124 */
/* 274 */	0x3d,		/* 61 */
			0x7,		/* 7 */
/* 276 */	0x8f,		/* 143 */
			0x81,		/* 129 */
/* 278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 294 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 296 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 298 */	NdrFcShort( 0xffec ),	/* Offset= -20 (278) */
/* 300 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 302 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 304 */	
			0x11, 0x0,	/* FC_RP */
/* 306 */	NdrFcShort( 0x14 ),	/* Offset= 20 (326) */
/* 308 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 310 */	NdrFcLong( 0x37668d37 ),	/* 929467703 */
/* 314 */	NdrFcShort( 0x507e ),	/* 20606 */
/* 316 */	NdrFcShort( 0x4160 ),	/* 16736 */
/* 318 */	0x93,		/* 147 */
			0x16,		/* 22 */
/* 320 */	0x26,		/* 38 */
			0x30,		/* 48 */
/* 322 */	0x6d,		/* 109 */
			0x15,		/* 21 */
/* 324 */	0xb,		/* 11 */
			0x12,		/* 18 */
/* 326 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 336 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 344 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (308) */
/* 346 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 348 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (352) */
/* 352 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 354 */	NdrFcLong( 0x1af4f612 ),	/* 452261394 */
/* 358 */	NdrFcShort( 0x3b71 ),	/* 15217 */
/* 360 */	NdrFcShort( 0x466f ),	/* 18031 */
/* 362 */	0x8f,		/* 143 */
			0x58,		/* 88 */
/* 364 */	0x7b,		/* 123 */
			0x6f,		/* 111 */
/* 366 */	0x73,		/* 115 */
			0xac,		/* 172 */
/* 368 */	0x57,		/* 87 */
			0xad,		/* 173 */
/* 370 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 372 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (308) */
/* 374 */	
			0x11, 0x0,	/* FC_RP */
/* 376 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (200) */

			0x0
        }
    };

static void __RPC_USER IEnumBackgroundCopyFiles_NextExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyManager *This;
        ULONG celt;
        IBackgroundCopyFile **rgelt;
        ULONG *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( pS->pceltFetched ? *pS->pceltFetched : pS->celt );
}

static void __RPC_USER IEnumBackgroundCopyJobs_NextExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyManager *This;
        ULONG celt;
        IBackgroundCopyJob **rgelt;
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
    36,
    72
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
    108,
    156,
    192,
    222,
    258
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
    294,
    336,
    372,
    414,
    456
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
    492,
    534,
    576,
    612,
    642,
    672,
    702,
    732,
    768,
    804,
    840,
    876,
    912,
    948,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1200,
    1236,
    1272,
    1308,
    1344,
    1380,
    1416,
    1452,
    1488,
    1524,
    1572,
    1620
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
    1650,
    156,
    192,
    1698,
    258
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
    1734,
    1770,
    1812
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
    1854,
    1890,
    1920,
    1962,
    1992,
    2034
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
    2064,
    2118,
    2160,
    2202
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
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

