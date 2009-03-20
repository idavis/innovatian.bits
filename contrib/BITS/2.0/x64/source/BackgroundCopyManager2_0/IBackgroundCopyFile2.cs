namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, ComConversionLoss, Guid("83E81B93-0873-474D-8A8C-F2018B1A939C"), InterfaceType((short) 1)]
    public interface IBackgroundCopyFile2 : IBackgroundCopyFile
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetRemoteName([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetLocalName([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProgress(out _BG_FILE_PROGRESS pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetFileRanges([In, Out] ref uint RangeCount, [Out] IntPtr Ranges);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetRemoteName([MarshalAs(UnmanagedType.LPWStr)] string Val);
    }
}

