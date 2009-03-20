namespace BackgroundCopyManager1_5
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, ClassInterface((short) 0), TypeLibType((short) 2), Guid("F087771F-D74F-4C1A-BB8A-E16ACA9124EA")]
    public class BackgroundCopyManager1_5Class : IBackgroundCopyManager, BackgroundCopyManager1_5.BackgroundCopyManager1_5
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void CreateJob([In, MarshalAs(UnmanagedType.LPWStr)] string DisplayName, [In, ComAliasName("BackgroundCopyManager1_5.BG_JOB_TYPE")] BG_JOB_TYPE Type, [ComAliasName("BackgroundCopyManager1_5.GUID")] out GUID pJobId, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void EnumJobs([In] uint dwFlags, [MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyJobs ppenum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetErrorDescription([In, MarshalAs(UnmanagedType.Error)] int hResult, [In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetJob([In, ComAliasName("BackgroundCopyManager1_5.GUID")] ref GUID jobID, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
    }
}

