namespace BITSExtensionSetup
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("29CFBBF7-09E4-4B97-B0BC-F2287E3D8EB3"), TypeLibType((short) 0x1040)]
    public interface IBITSExtensionSetup
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(1)]
        void EnableBITSUploads();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(2)]
        void DisableBITSUploads();
        [return: MarshalAs(UnmanagedType.BStr)]
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(3)]
        string GetCleanupTaskName();
        [return: MarshalAs(UnmanagedType.IUnknown)]
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime), DispId(4)]
        object GetCleanupTask([In] ref Guid riid);
    }
}

