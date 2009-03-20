

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 10:25:27 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\Bits1_5.idl:
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


#include "Bits1_5.h"

#define TYPE_FORMAT_STRING_SIZE   137                               
#define PROC_FORMAT_STRING_SIZE   329                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _Bits1_5_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Bits1_5_MIDL_TYPE_FORMAT_STRING;

typedef struct _Bits1_5_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Bits1_5_MIDL_PROC_FORMAT_STRING;

typedef struct _Bits1_5_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Bits1_5_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Bits1_5_MIDL_TYPE_FORMAT_STRING Bits1_5__MIDL_TypeFormatString;
extern const Bits1_5_MIDL_PROC_FORMAT_STRING Bits1_5__MIDL_ProcFormatString;
extern const Bits1_5_MIDL_EXPR_FORMAT_STRING Bits1_5__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBackgroundCopyJob2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob2_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const Bits1_5_MIDL_PROC_FORMAT_STRING Bits1_5__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SetNotifyCmdLine */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x23 ),	/* 35 */
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

	/* Parameter Program */

/* 26 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Parameters */

/* 32 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNotifyCmdLine */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x24 ),	/* 36 */
/* 52 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 60 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProgram */

/* 70 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 72 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 74 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pParameters */

/* 76 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReplyProgress */

/* 88 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x25 ),	/* 37 */
/* 96 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 98 */	NdrFcShort( 0x34 ),	/* 52 */
/* 100 */	NdrFcShort( 0x3c ),	/* 60 */
/* 102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProgress */

/* 114 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReplyData */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x26 ),	/* 38 */
/* 134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 136 */	NdrFcShort( 0x24 ),	/* 36 */
/* 138 */	NdrFcShort( 0x2c ),	/* 44 */
/* 140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 142 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppBuffer */

/* 152 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pLength */

/* 158 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 162 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetReplyFileName */

/* 170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x27 ),	/* 39 */
/* 178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 186 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ReplyFileName */

/* 196 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 200 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReplyFileName */

/* 208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x28 ),	/* 40 */
/* 216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 222 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 224 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pReplyFileName */

/* 234 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 238 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCredentials */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x29 ),	/* 41 */
/* 254 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 262 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter credentials */

/* 272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveCredentials */

/* 284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x2a ),	/* 42 */
/* 292 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 294 */	NdrFcShort( 0xc ),	/* 12 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Target */

/* 310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 314 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter Scheme */

/* 316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 320 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Bits1_5_MIDL_TYPE_FORMAT_STRING Bits1_5__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 20 */	NdrFcShort( 0x10 ),	/* 16 */
/* 22 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 24 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x13, 0x0,	/* FC_OP */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 44 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 46 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 48 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0x44 ),	/* Offset= 68 (120) */
/* 54 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 56 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 58 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 60 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	NdrFcShort( 0x10 ),	/* 16 */
/* 66 */	NdrFcShort( 0x5 ),	/* 5 */
/* 68 */	NdrFcLong( 0x1 ),	/* 1 */
/* 72 */	NdrFcShort( 0x1c ),	/* Offset= 28 (100) */
/* 74 */	NdrFcLong( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x16 ),	/* Offset= 22 (100) */
/* 80 */	NdrFcLong( 0x3 ),	/* 3 */
/* 84 */	NdrFcShort( 0x10 ),	/* Offset= 16 (100) */
/* 86 */	NdrFcLong( 0x4 ),	/* 4 */
/* 90 */	NdrFcShort( 0xa ),	/* Offset= 10 (100) */
/* 92 */	NdrFcLong( 0x5 ),	/* 5 */
/* 96 */	NdrFcShort( 0x4 ),	/* Offset= 4 (100) */
/* 98 */	NdrFcShort( 0x0 ),	/* Offset= 0 (98) */
/* 100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x6 ),	/* Offset= 6 (112) */
/* 108 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 112 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 122 */	NdrFcShort( 0x18 ),	/* 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* Offset= 0 (126) */
/* 128 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 130 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (54) */
/* 134 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static void __RPC_USER IBackgroundCopyJob2_GetReplyDataExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(8)
    struct _PARAM_STRUCT
        {
        IBackgroundCopyJob2 *This;
        byte **ppBuffer;
        UINT64 *pLength;
        HRESULT _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( ( unsigned long  )*pS->pLength );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IBackgroundCopyJob2_GetReplyDataExprEval_0000
    };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBackgroundCopyJob, ver. 0.0,
   GUID={0x37668d37,0x507e,0x4160,{0x93,0x16,0x26,0x30,0x6d,0x15,0x0b,0x12}} */


/* Object interface: IBackgroundCopyJob2, ver. 0.0,
   GUID={0x54b50739,0x686f,0x45eb,{0x9d,0xff,0xd6,0xa9,0xa0,0xfa,0xa9,0xaf}} */

#pragma code_seg(".orpc")
static const unsigned short IBackgroundCopyJob2_FormatStringOffsetTable[] =
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
    0,
    44,
    88,
    126,
    170,
    208,
    246,
    284
    };

static const MIDL_STUBLESS_PROXY_INFO IBackgroundCopyJob2_ProxyInfo =
    {
    &Object_StubDesc,
    Bits1_5__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBackgroundCopyJob2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Bits1_5__MIDL_ProcFormatString.Format,
    &IBackgroundCopyJob2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(43) _IBackgroundCopyJob2ProxyVtbl = 
{
    &IBackgroundCopyJob2_ProxyInfo,
    &IID_IBackgroundCopyJob2,
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
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetNotifyCmdLine */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetNotifyCmdLine */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyProgress */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyData */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetReplyFileName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::GetReplyFileName */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::SetCredentials */ ,
    (void *) (INT_PTR) -1 /* IBackgroundCopyJob2::RemoveCredentials */
};


static const PRPC_STUB_FUNCTION IBackgroundCopyJob2_table[] =
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBackgroundCopyJob2StubVtbl =
{
    &IID_IBackgroundCopyJob2,
    &IBackgroundCopyJob2_ServerInfo,
    43,
    &IBackgroundCopyJob2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_Bits1_5_0000_0001, ver. 0.0,
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
    Bits1_5__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * _Bits1_5_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBackgroundCopyJob2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _Bits1_5_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBackgroundCopyJob2StubVtbl,
    0
};

PCInterfaceName const _Bits1_5_InterfaceNamesList[] = 
{
    "IBackgroundCopyJob2",
    0
};

const IID *  _Bits1_5_BaseIIDList[] = 
{
    &IID_IBackgroundCopyJob,
    0
};


#define _Bits1_5_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Bits1_5, pIID, n)

int __stdcall _Bits1_5_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_Bits1_5_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo Bits1_5_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Bits1_5_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Bits1_5_StubVtblList,
    (const PCInterfaceName * ) & _Bits1_5_InterfaceNamesList,
    (const IID ** ) & _Bits1_5_BaseIIDList,
    & _Bits1_5_IID_Lookup, 
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

