namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, TypeLibType((short) 2), Guid("6D18AD12-BDE3-4393-B311-099C346E6DF9"), ClassInterface((short) 0)]
    public class BackgroundCopyManager2_0Class : IBackgroundCopyManager, BackgroundCopyManager2_0.BackgroundCopyManager2_0
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void CreateJob([In, MarshalAs(UnmanagedType.LPWStr)] string DisplayName, [In, ComAliasName("BackgroundCopyManager2_0.BG_JOB_TYPE")] BG_JOB_TYPE Type, [ComAliasName("BackgroundCopyManager2_0.GUID")] out GUID pJobId, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void EnumJobs([In] uint dwFlags, [MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyJobs ppenum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetErrorDescription([In, MarshalAs(UnmanagedType.Error)] int hResult, [In] uint LanguageId, [MarshalAs(UnmanagedType.LPWStr)] out string pErrorDescription);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        public virtual extern void GetJob([In, ComAliasName("BackgroundCopyManager2_0.GUID")] ref GUID jobID, [MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyJob ppJob);
    }
}

