namespace BackgroundCopyManager
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("01B7BD23-FB88-4A77-8490-5891D3E4653A"), InterfaceType((short) 1)]
    public interface IBackgroundCopyFile
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetRemoteName([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetLocalName([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProgress(out _BG_FILE_PROGRESS pVal);
    }
}

