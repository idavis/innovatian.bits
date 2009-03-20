namespace BackgroundCopyManager3_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, InterfaceType((short) 1), Guid("5CE34C0D-0DC9-4C1F-897C-DAA1B78CEE7C")]
    public interface IBackgroundCopyManager
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void CreateJob([In, MarshalAs(UnmanagedType.LPWStr)] string DisplayName, [In, ComAliasName("BackgroundCopyManager3_0.BG_JOB_TYPE")] BG_JOB_TYPE Type, [ComAliasName("BackgroundCopyManager3_0.GUID")] out GUID pJobId, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetJob([In, ComAliasName("BackgroundCopyManager3_0.GUID")] ref GUID jobID, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void EnumJobs([In] uint dwFlags, [MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyJobs ppenum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetErrorDescription([In, MarshalAs(UnmanagedType.Error)] int hResult, [In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
    }
}

