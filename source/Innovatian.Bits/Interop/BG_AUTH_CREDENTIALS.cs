#region Using Directives

using System.Runtime.InteropServices;

#endregion

namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// The BG_AUTH_CREDENTIALS structure identifies the target (proxy or
    /// server), authentication scheme, and the user's credentials to use for
    /// user authentication requests. The structure is passed to the
    /// IBackgroundCopyJob2::SetCredentials method.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_15 )]
#if x64
    [StructLayout( LayoutKind.Sequential, Pack = 8 )]
#else
    [StructLayout( LayoutKind.Sequential, Pack = 4 )]
#endif
    internal struct BG_AUTH_CREDENTIALS
    {
        /// <summary>
        /// Identifies whether to use the credentials for a proxy or server
        /// authentication request. For a list of values, see the BG_AUTH_TARGET
        /// enumeration. You can specify only one value.
        /// </summary>
        public BG_AUTH_TARGET Target;

        /// <summary>
        /// Identifies the scheme to use for authentication (for example, Basic
        /// or NTLM). For a list of values, see the BG_AUTH_SCHEME enumeration.
        /// You can specify only one value.
        /// </summary>
        public BG_AUTH_SCHEME Scheme;

        /// <summary>
        /// Identifies the credentials to use for the specified authentication
        /// scheme. For details, see the BG_AUTH_CREDENTIALS_UNION union.
        /// </summary>
        public BG_AUTH_CREDENTIALS_UNION Credentials;
    }
}