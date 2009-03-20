namespace BackgroundCopyManager2_5
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, ClassInterface((short) 0), TypeLibType((short) 2), Guid("03CA98D6-FF5D-49B8-ABC6-03DD84127020")]
    public class BackgroundCopyManager2_5Class : IBackgroundCopyManager, BackgroundCopyManager2_5.BackgroundCopyManager2_5
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void CreateJob([In, MarshalAs(UnmanagedType.LPWStr)] string DisplayName, [In, ComAliasName("BackgroundCopyManager2_5.BG_JOB_TYPE")] BG_JOB_TYPE Type, [ComAliasName("BackgroundCopyManager2_5.GUID")] out GUID pJobId, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void EnumJobs([In] uint dwFlags, [MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyJobs ppenum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetErrorDescription([In, MarshalAs(UnmanagedType.Error)] int hResult, [In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetJob([In, ComAliasName("BackgroundCopyManager2_5.GUID")] ref GUID jobID, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
    }
}

