namespace Eeyore.Bits.Net.Interop
{
    /// <summary>
    /// The BG_AUTH_SCHEME enumeration defines the constant values that specify
    /// the authentication scheme to use when a proxy or server requests user
    /// authentication.
    /// </summary>
    [BitsVersion(BitsVersion.Bits_15)]
    internal enum BG_AUTH_SCHEME
    {
        /// <summary>
        /// Basic is a scheme in which the user name and password are sent in
        /// clear-text to the server or proxy.
        /// </summary>
        BG_AUTH_SCHEME_BASIC = 1,

        /// <summary>
        /// Digest is a challenge-response scheme that uses a server-specified
        /// data string for the challenge.
        /// </summary>
        BG_AUTH_SCHEME_DIGEST = 2,

        /// <summary>
        /// NTLM is a challenge-response scheme that uses the credentials of the
        /// user for authentication in a Windows network environment.
        /// </summary>
        BG_AUTH_SCHEME_NEGOTIATE = 4,

        /// <summary>
        /// Simple and Protected Negotiation protocol (Snego) is a
        /// challenge-response scheme that negotiates with the server or proxy
        /// to determine which scheme to use for authentication. Examples are
        /// the Kerberos protocol and NTLM.
        /// </summary>
        BG_AUTH_SCHEME_NTLM = 3,

        /// <summary>
        /// Passport is a centralized authentication service provided by
        /// Microsoft that offers a single logon for member sites.
        /// </summary>
        BG_AUTH_SCHEME_PASSPORT = 5
    }
}