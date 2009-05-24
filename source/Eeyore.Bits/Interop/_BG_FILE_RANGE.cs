#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// The BG_FILE_RANGE structure identifies a range of bytes to download from a file.
    /// </summary>
    /// <remarks>
    /// The range must exist in the file or BITS generates an BG_E_INVALID_RANGE error.
    /// </remarks>
    [BitsVersion(BitsVersion.Bits_20)]
    [StructLayout( LayoutKind.Sequential, Pack = 8 )]
    internal struct _BG_FILE_RANGE
    {
        /// <summary>
        /// Zero-based offset to the beginning of the range of bytes to download from a file.
        /// </summary>
        public ulong InitialOffset;

        /// <summary>
        /// The length of the range, in bytes. Do not specify a zero byte length. To indicate that the range extends to the end of the file, specify BG_LENGTH_TO_EOF.
        /// </summary>
        public ulong Length;
    }
}