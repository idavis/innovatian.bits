#region Using Directives

using System;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Flags that determine if the files of the job can be cached and served to peers and if BITS can download content for the job from peers
    /// </summary>
    [Flags]
    internal enum BG_JOB_ENABLE_PEERCACHING : uint
    {
        /// <summary>
        /// The job can download content from peers.
        /// 
        /// The job will not download from a peer unless both the client computer and the job allow BITS to download files from a peer. To enable the client computer to download files from a peer, set the EnablePeerCaching group policy or call the IBitsPeerCacheAdministration::SetConfigurationFlags method and set the BG_ENABLE_PEERCACHING_CLIENT flag.
        /// 
        /// If one of the following conditions exists, BITS will stop the download and reschedule the job to begin transferring from either a peer or the origin server, depending on the value for the job and the cache:
        /// 
        ///     * This value for the cache is TRUE and the value for the job toggles between TRUE and FALSE.
        ///     * This value for the job property is TRUE and the value for the cache toggles between TRUE and FALSE.
        /// 
        /// The download will then resume from where it left off before BITS stopped the job. 
        /// </summary>
        BG_JOB_ENABLE_PEERCACHING_CLIENT = 0x001,
        /// <summary>
        /// The files of the job can be cached and served to peers.
        /// 
        /// BITS will not cache the files and serve them to peers unless both the client computer and job allow BITS to cache and serve the files. To allow BITS to cache and server the files on the client computer, set the EnablePeerCaching group policy or call the IBitsPeerCacheAdministration::SetConfigurationFlags method and set the BG_ENABLE_PEERCACHING_SERVER flag.
        /// </summary>
        BG_JOB_ENABLE_PEERCACHING_SERVER = 0x002
    }
}