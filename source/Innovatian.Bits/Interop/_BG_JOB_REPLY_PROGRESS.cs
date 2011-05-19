using System.Runtime.InteropServices;

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// The BG_JOB_REPLY_PROGRESS structure provides progress information
    /// related to the reply portion of an upload-reply job.
    /// </summary>
    [BitsVersion(BitsVersion.Bits_15)]
    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    internal struct _BG_JOB_REPLY_PROGRESS
    {
        /// <summary>
        /// Size of the file in bytes. The value is BG_SIZE_UNKNOWN if the reply
        /// has not begun.
        /// </summary>
        public ulong BytesTotal;

        /// <summary>
        /// Number of bytes transferred.
        /// </summary>
        public ulong BytesTransferred;
    }
}