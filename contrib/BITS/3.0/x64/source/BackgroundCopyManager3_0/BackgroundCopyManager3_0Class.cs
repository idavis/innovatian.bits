namespace BackgroundCopyManager3_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, ClassInterface((short) 0), TypeLibType((short) 2), Guid("659CDEA7-489E-11D9-A9CD-000D56965251")]
    public class BackgroundCopyManager3_0Class : IBackgroundCopyManager, BackgroundCopyManager3_0.BackgroundCopyManager3_0
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void CreateJob([In, MarshalAs(UnmanagedType.LPWStr)] string DisplayName, [In, ComAliasName("BackgroundCopyManager3_0.BG_JOB_TYPE")] BG_JOB_TYPE Type, [ComAliasName("BackgroundCopyManager3_0.GUID")] out GUID pJobId, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void EnumJobs([In] uint dwFlags, [MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyJobs ppenum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetErrorDescription([In, MarshalAs(UnmanagedType.Error)] int hResult, [In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetJob([In, ComAliasName("BackgroundCopyManager3_0.GUID")] ref GUID jobID, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
    }
}

