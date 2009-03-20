namespace BackgroundCopyManager2_0
{
    using System;
    using System.Runtime.CompilerServices;
    using System.Runtime.InteropServices;

    [ComImport, Guid("443C8934-90FF-48ED-BCDE-26F5C7450042"), InterfaceType((short) 1)]
    public interface IBackgroundCopyJob3 : IBackgroundCopyJob2
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
        void GetId([ComAliasName("BackgroundCopyManager2_0.GUID")] out GUID pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetType([ComAliasName("BackgroundCopyManager2_0.BG_JOB_TYPE")] out BG_JOB_TYPE pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProgress(out _BG_JOB_PROGRESS pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetTimes(out _BG_JOB_TIMES pVal);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetState([ComAliasName("BackgroundCopyManager2_0.BG_JOB_STATE")] out BG_JOB_STATE pVal);
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
        void SetPriority([In, ComAliasName("BackgroundCopyManager2_0.BG_JOB_PRIORITY")] BG_JOB_PRIORITY Val);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetPriority([ComAliasName("BackgroundCopyManager2_0.BG_JOB_PRIORITY")] out BG_JOB_PRIORITY pVal);
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
        void SetProxySettings([In, ComAliasName("BackgroundCopyManager2_0.BG_JOB_PROXY_USAGE")] BG_JOB_PROXY_USAGE ProxyUsage, [In, MarshalAs(UnmanagedType.LPWStr)] string ProxyList, [In, MarshalAs(UnmanagedType.LPWStr)] string ProxyBypassList);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetProxySettings([ComAliasName("BackgroundCopyManager2_0.BG_JOB_PROXY_USAGE")] out BG_JOB_PROXY_USAGE pProxyUsage, [MarshalAs(UnmanagedType.LPWStr)] out string pProxyList, [MarshalAs(UnmanagedType.LPWStr)] out string pProxyBypassList);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void TakeOwnership();
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetNotifyCmdLine([In, MarshalAs(UnmanagedType.LPWStr)] string Program, [In, MarshalAs(UnmanagedType.LPWStr)] string Parameters);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetNotifyCmdLine([MarshalAs(UnmanagedType.LPWStr)] out string pProgram, [MarshalAs(UnmanagedType.LPWStr)] out string pParameters);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetReplyProgress([In, Out] ref _BG_JOB_REPLY_PROGRESS pProgress);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetReplyData([Out] IntPtr ppBuffer, [In, Out] ref ulong pLength);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetReplyFileName([In, MarshalAs(UnmanagedType.LPWStr)] string ReplyFileName);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetReplyFileName([MarshalAs(UnmanagedType.LPWStr)] out string pReplyFileName);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetCredentials([ComAliasName("BackgroundCopyManager2_0.BG_AUTH_CREDENTIALS")] ref BG_AUTH_CREDENTIALS Credentials);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void RemoveCredentials([ComAliasName("BackgroundCopyManager2_0.BG_AUTH_TARGET")] BG_AUTH_TARGET Target, [ComAliasName("BackgroundCopyManager2_0.BG_AUTH_SCHEME")] BG_AUTH_SCHEME Scheme);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void ReplaceRemotePrefix([In, MarshalAs(UnmanagedType.LPWStr)] string OldPrefix, [In, MarshalAs(UnmanagedType.LPWStr)] string NewPrefix);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void AddFileWithRanges([In, MarshalAs(UnmanagedType.LPWStr)] string RemoteUrl, [In, MarshalAs(UnmanagedType.LPWStr)] string LocalName, [In] uint RangeCount, [In] ref _BG_FILE_RANGE Ranges);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void SetFileACLFlags([In] uint Flags);
        [MethodImpl(MethodImplOptions.InternalCall, MethodCodeType=MethodCodeType.Runtime)]
        void GetFileACLFlags(out uint Flags);
    }
}

