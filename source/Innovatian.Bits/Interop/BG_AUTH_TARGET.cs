namespace Innovatian.Bits.Interop
{
    /// <summary>
    /// The BG_AUTH_TARGET enumeration defines the constant values that specify
    /// whether the credentials are used for proxy or server user authentication
    /// requests.
    /// </summary>
    [BitsVersion( BitsVersion.Bits_15 )]
    internal enum BG_AUTH_TARGET
    {
        /// <summary>
        /// Use credentials for server requests.
        /// </summary>
        BG_AUTH_TARGET_SERVER = 1,
        /// <summary>
        /// Use credentials for proxy requests.
        /// </summary>
        BG_AUTH_TARGET_PROXY = 2
    }
}