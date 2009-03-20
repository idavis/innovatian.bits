#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The BG_AUTH_CREDENTIALS_UNION union identifies the credentials to use
    /// for the authentication scheme specified in the BG_AUTH_CREDENTIALS
    /// structure.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_15 )]
#if x64
    [StructLayout( LayoutKind.Explicit, Size = 16, Pack = 8 )]
#else
    [StructLayout( LayoutKind.Explicit, Size = 8, Pack = 4 )]
#endif
    internal struct BG_AUTH_CREDENTIALS_UNION
    {
        /// <summary>
        /// Identifies the user name and password of the user to authenticate.
        /// For details, see the BG_BASIC_CREDENTIALS structure.
        /// </summary>
        [FieldOffset(0)]
        public BG_BASIC_CREDENTIALS Basic;
    }
}