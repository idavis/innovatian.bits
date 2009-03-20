

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Feb 11 11:27:36 2009
 */
/* Compiler settings for C:\Program Files\Microsoft SDKs\Windows\v6.0A\Include\bitscfg.idl:
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


#include "bitscfg.h"

#define TYPE_FORMAT_STRING_SIZE   123                               
#define PROC_FORMAT_STRING_SIZE   191                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _bitscfg_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } bitscfg_MIDL_TYPE_FORMAT_STRING;

typedef struct _bitscfg_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } bitscfg_MIDL_PROC_FORMAT_STRING;

typedef struct _bitscfg_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } bitscfg_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const bitscfg_MIDL_TYPE_FORMAT_STRING bitscfg__MIDL_TypeFormatString;
extern const bitscfg_MIDL_PROC_FORMAT_STRING bitscfg__MIDL_ProcFormatString;
extern const bitscfg_MIDL_EXPR_FORMAT_STRING bitscfg__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBITSExtensionSetup_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBITSExtensionSetup_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBITSExtensionSetupFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBITSExtensionSetupFactory_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const bitscfg_MIDL_PROC_FORMAT_STRING bitscfg__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure EnableBITSUploads */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 26 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisableBITSUploads */

/* 32 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 48 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 58 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 60 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 62 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCleanupTaskName */

/* 64 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 66 */	NdrFcLong( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x9 ),	/* 9 */
/* 72 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x8 ),	/* 8 */
/* 78 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 80 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 82 */	NdrFcShort( 0x1 ),	/* 1 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTaskName */

/* 90 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 94 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCleanupTask */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 112 */	NdrFcShort( 0x44 ),	/* 68 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 118 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 128 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 132 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter ppUnk */

/* 134 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 136 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 138 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 142 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObject */

/* 146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x7 ),	/* 7 */
/* 154 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 162 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Path */

/* 172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 176 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ppExtensionSetup */

/* 178 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 182 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 186 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const bitscfg_MIDL_TYPE_FORMAT_STRING bitscfg__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0x0,	/* FC_RP */
/* 44 */	NdrFcShort( 0x8 ),	/* Offset= 8 (52) */
/* 46 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 52 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x10 ),	/* 16 */
/* 56 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 58 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 60 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (46) */
			0x5b,		/* FC_END */
/* 64 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 80 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 82 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 84 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 86 */	
			0x12, 0x0,	/* FC_UP */
/* 88 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (22) */
/* 90 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (86) */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x29cfbbf7 ),	/* 701479927 */
/* 110 */	NdrFcShort( 0x9e4 ),	/* 2532 */
/* 112 */	NdrFcShort( 0x4b97 ),	/* 19351 */
/* 114 */	0xb0,		/* 176 */
			0xbc,		/* 188 */
/* 116 */	0xf2,		/* 242 */
			0x28,		/* 40 */
/* 118 */	0x7e,		/* 126 */
			0x3d,		/* 61 */
/* 120 */	0x8e,		/* 142 */
			0xb3,		/* 179 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IBITSExtensionSetup, ver. 0.0,
   GUID={0x29cfbbf7,0x09e4,0x4b97,{0xb0,0xbc,0xf2,0x28,0x7e,0x3d,0x8e,0xb3}} */

#pragma code_seg(".orpc")
static const unsigned short IBITSExtensionSetup_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    64,
    102
    };

static const MIDL_STUBLESS_PROXY_INFO IBITSExtensionSetup_ProxyInfo =
    {
    &Object_StubDesc,
    bitscfg__MIDL_ProcFormatString.Format,
    &IBITSExtensionSetup_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBITSExtensionSetup_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bitscfg__MIDL_ProcFormatString.Format,
    &IBITSExtensionSetup_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IBITSExtensionSetupProxyVtbl = 
{
    &IBITSExtensionSetup_ProxyInfo,
    &IID_IBITSExtensionSetup,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IBITSExtensionSetup::EnableBITSUploads */ ,
    (void *) (INT_PTR) -1 /* IBITSExtensionSetup::DisableBITSUploads */ ,
    (void *) (INT_PTR) -1 /* IBITSExtensionSetup::GetCleanupTaskName */ ,
    (void *) (INT_PTR) -1 /* IBITSExtensionSetup::GetCleanupTask */
};


static const PRPC_STUB_FUNCTION IBITSExtensionSetup_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBITSExtensionSetupStubVtbl =
{
    &IID_IBITSExtensionSetup,
    &IBITSExtensionSetup_ServerInfo,
    11,
    &IBITSExtensionSetup_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBITSExtensionSetupFactory, ver. 0.0,
   GUID={0xd5d2d542,0x5503,0x4e64,{0x8b,0x48,0x72,0xef,0x91,0xa3,0x2e,0xe1}} */

#pragma code_seg(".orpc")
static const unsigned short IBITSExtensionSetupFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    146
    };

static const MIDL_STUBLESS_PROXY_INFO IBITSExtensionSetupFactory_ProxyInfo =
    {
    &Object_StubDesc,
    bitscfg__MIDL_ProcFormatString.Format,
    &IBITSExtensionSetupFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBITSExtensionSetupFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    bitscfg__MIDL_ProcFormatString.Format,
    &IBITSExtensionSetupFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IBITSExtensionSetupFactoryProxyVtbl = 
{
    &IBITSExtensionSetupFactory_ProxyInfo,
    &IID_IBITSExtensionSetupFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IBITSExtensionSetupFactory::GetObject */
};


static const PRPC_STUB_FUNCTION IBITSExtensionSetupFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IBITSExtensionSetupFactoryStubVtbl =
{
    &IID_IBITSExtensionSetupFactory,
    &IBITSExtensionSetupFactory_ServerInfo,
    8,
    &IBITSExtensionSetupFactory_table[-3],
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
    0,
    0,
    bitscfg__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _bitscfg_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBITSExtensionSetupFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBITSExtensionSetupProxyVtbl,
    0
};

const CInterfaceStubVtbl * _bitscfg_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBITSExtensionSetupFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IBITSExtensionSetupStubVtbl,
    0
};

PCInterfaceName const _bitscfg_InterfaceNamesList[] = 
{
    "IBITSExtensionSetupFactory",
    "IBITSExtensionSetup",
    0
};

const IID *  _bitscfg_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _bitscfg_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _bitscfg, pIID, n)

int __stdcall _bitscfg_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _bitscfg, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _bitscfg, 2, *pIndex )
    
}

const ExtendedProxyFileInfo bitscfg_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _bitscfg_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _bitscfg_StubVtblList,
    (const PCInterfaceName * ) & _bitscfg_InterfaceNamesList,
    (const IID ** ) & _bitscfg_BaseIIDList,
    & _bitscfg_IID_Lookup, 
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

