#region Using Directives

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Use this interface to enable peer caching, restrict download time, and inspect user token characteristics.
    /// 
    /// To get this interface, call the IBackgroundCopyJob::QueryInterface method using __uuidof(IBackgroundCopyJob4) as the interface identifier. 
    /// </summary>
    [BitsVersion( BitsVersion.Bits_30 )]
    [ComImport]
    [Guid( "659CDEAE-489E-11D9-A9CD-000D56965251" )]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    internal interface IBackgroundCopyJob4 : IBackgroundCopyJob3
    {
        /// <summary>
        /// Sets flags that determine if the files of the job can be cached and served to peers and if the job can download content from peers.
        /// </summary>
        /// <param name="Flags">
        /// Flags that determine if the files of the job can be cached and served to peers and if the job can download content from peers
        /// </param>
        /// <remarks>
        /// Setting these flags has meaning only if the peer caching has been enabled by either setting the EnablePeerCaching group policy or calling the IBitsPeerCacheAdministration::SetConfigurationFlags.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetPeerCachingFlags( BG_JOB_ENABLE_PEERCACHING Flags );

        /// <summary>
        /// Retrieves flags that determine if the files of the job can be cached and served to peers and if BITS can download content for the job from peers.
        /// </summary>
        /// <param name="pFlags">
        /// Flags that determine if the files of the job can be cached and served to peers and if BITS can download content for the job from peers.
        /// </param>
        /// <remarks>
        /// BITS can download from peers only if peercaching is enabled both at the computer level and at the job level; this API affects only the job level. For details, see IBackgroundCopyJob4::SetPeerCachingFlags.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetPeerCachingFlags( out BG_JOB_ENABLE_PEERCACHING pFlags );

        /// <summary>
        /// Gets the integrity level of the token of the owner that created or took ownership of the job.
        /// </summary>
        /// <param name="pLevel">
        /// Integrity level of the token of the owner that created or took ownership of the job.
        /// </param>
        /// <remarks>
        /// For details on how the integrity level of the user's token affects a job, see User Account Control and BITS.
        /// 
        /// This method returns the value from the GetSidSubAuthority function. For possible mandatory integrity RID values, see Well-known SIDs in the Security documentation.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetOwnerIntegrityLevel( out uint pLevel );

        /// <summary>
        /// Gets a value that determines if the token of the owner was elevated at the time they created or took ownership of the job.
        /// </summary>
        /// <param name="pElevated">
        /// Is TRUE if the token of the owner was elevated at the time they created or took ownership of the job; otherwise, FALSE.
        /// </param>
        /// <remarks>
        /// For details on elevated tokens, see User Account Control and BITS.
        /// 
        /// Note that if the job was created with an elevated token, all subsequent updates to the job must be done with an elevated token.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetOwnerElevationState( out int pElevated );

        /// <summary>
        /// Sets the maximum time that BITS will spend transferring the files in the job.
        /// </summary>
        /// <param name="Timeout">
        /// Maximum time, in seconds, that BITS will spend transferring the files in the job. The default is 7,776,000 seconds (90 days).
        /// </param>
        /// <remarks>
        /// The value is the maximum elapsed time that the job can spend in the CONNECTING or TRANSFERRING state. Time spent in the QUEUED or TRANSIENT_ERROR state does not count against the timeout value. The job enters the fatal error state with an error code of BG_E_MAXDOWNLOAD_TIMEOUT if the transfer time exceeds the timeout value.
        /// 
        /// Note that if the computer sleeps while BITS is transferring the job's data, the time spent sleeping will count against the timeout even though data is not being transferred.
        /// 
        /// Calling the IBackgroundCopyJob::Resume method, resets the elapsed time.
        /// 
        /// This method overrides the MaxDownloadTime group policy.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetMaximumDownloadTime( uint Timeout );

        /// <summary>
        /// Retrieves the maximum time that BITS will spend transferring the files in the job.
        /// </summary>
        /// <param name="pTimeout">
        /// Maximum time, in seconds, that BITS will spend transferring the files in the job.
        /// </param>
        /// <remarks>
        /// The value is the maximum elapsed time that the job can spend in the CONNECTING or TRANSFERRING state. Time spent in the QUEUED or TRANSIENT_ERROR state does not count against the timeout value.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetMaximumDownloadTime( out uint pTimeout );
    }
}