namespace BackgroundCopyManager2_5
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("19C613A0-FCB8-4F28-81AE-897C3D078F81"), InterfaceType((short) 1)]
    public interface IBackgroundCopyError
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetError([ComAliasName("BackgroundCopyManager2_5.BG_ERROR_CONTEXT")] out BG_ERROR_CONTEXT pContext, [MarshalAs(UnmanagedType.Error)] out int pCode);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetFile([MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyFile pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetErrorDescription([In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetErrorContextDescription([In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pContextDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProtocol([MarshalAs(UnmanagedType.LPWStr)] out string pProtocol);
    }
}

