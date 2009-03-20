namespace BackgroundCopyManager1_5
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, InterfaceType((short) 1), Guid("37668D37-507E-4160-9316-26306D150B12")]
    public interface IBackgroundCopyJob
    {
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void AddFileSet([In] uint cFileCount, [In] ref _BG_FILE_INFO pFileSet);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void AddFile([In, MarshalAs(UnmanagedType.LPWStr)] string RemoteUrl, [In, MarshalAs(UnmanagedType.LPWStr)] string LocalName);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void EnumFiles([MarshalAs(UnmanagedType.Interface)] out IEnumBackgroundCopyFiles pEnum);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void Suspend();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void Resume();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void Cancel();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void Complete();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetId([ComAliasName("BackgroundCopyManager1_5.GUID")] out GUID pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetType([ComAliasName("BackgroundCopyManager1_5.BG_JOB_TYPE")] out BG_JOB_TYPE pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProgress(out _BG_JOB_PROGRESS pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetTimes(out _BG_JOB_TIMES pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetState([ComAliasName("BackgroundCopyManager1_5.BG_JOB_STATE")] out BG_JOB_STATE pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetError([MarshalAs(UnmanagedType.Interface)] out IBackgroundCopyError ppError);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetOwner([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetDisplayName([In, MarshalAs(UnmanagedType.LPWStr)] string Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetDisplayName([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetDescription([In, MarshalAs(UnmanagedType.LPWStr)] string Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetDescription([MarshalAs(UnmanagedType.LPWStr)] out string pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetPriority([In, ComAliasName("BackgroundCopyManager1_5.BG_JOB_PRIORITY")] BG_JOB_PRIORITY Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetPriority([ComAliasName("BackgroundCopyManager1_5.BG_JOB_PRIORITY")] out BG_JOB_PRIORITY pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetNotifyFlags([In] uint Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetNotifyFlags(out uint pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetNotifyInterface([In, MarshalAs(UnmanagedType.IUnknown)] object Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetNotifyInterface([MarshalAs(UnmanagedType.IUnknown)] out object pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetMinimumRetryDelay([In] uint Seconds);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetMinimumRetryDelay(out uint Seconds);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetNoProgressTimeout([In] uint Seconds);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetNoProgressTimeout(out uint Seconds);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetErrorCount(out uint Errors);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetProxySettings([In, ComAliasName("BackgroundCopyManager1_5.BG_JOB_PROXY_USAGE")] BG_JOB_PROXY_USAGE ProxyUsage, [In, MarshalAs(UnmanagedType.LPWStr)] string ProxyList, [In, MarshalAs(UnmanagedType.LPWStr)] string ProxyBypassList);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProxySettings([ComAliasName("BackgroundCopyManager1_5.BG_JOB_PROXY_USAGE")] out BG_JOB_PROXY_USAGE pProxyUsage, [MarshalAs(UnmanagedType.LPWStr)] out string pProxyList, [MarshalAs(UnmanagedType.LPWStr)] out string pProxyBypassList);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void TakeOwnership();
    }
}

