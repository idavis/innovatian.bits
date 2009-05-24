#region Using Directives

using System;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// HTTP security flags that indicate which errors to ignore when connecting to the server.
    /// </summary>
    [Flags]
    internal enum BG_HTTP_SECURITY_FLAGS : uint
    {
        /// <summary>
        /// Check the certificate revocation list (CRL) to verify that the server certificate has not been revoked.
        /// </summary>
        BG_SSL_ENABLE_CRL_CHECK = 0x0001,
        /// <summary>
        /// Ignores errors caused when the certificate host name of the server does not match the host name in the request.
        /// </summary>
        BG_SSL_IGNORE_CERT_CN_INVALID = 0x0002,
        /// <summary>
        /// Ignores errors caused by an expired certificate.
        /// </summary>
        BG_SSL_IGNORE_CERT_DATE_INVALID = 0x0004,
        /// <summary>
        /// Ignore errors associated with an unknown certificate authority (CA).
        /// </summary>
        BG_SSL_IGNORE_UNKNOWN_CA = 0x0008,
        /// <summary>
        /// Ignore errors associated with the use of a certificate.
        /// </summary>
        BG_SSL_IGNORE_CERT_WRONG_USAGE = 0x0010,
        /// <summary>
        /// Allows the server to redirect your request to another server. This is the default.
        /// </summary>
        BG_HTTP_REDIRECT_POLICY_ALLOW_SILENT = 0x0000,
        /// <summary>
        /// Allows the server to redirect your request to another server. BITS updates the remote name with the final URL.
        /// </summary>
        BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT = 0x0100,
        /// <summary>
        /// Places the job in the fatal error state when the server redirects your request to another server. BITS updates the remote name with the redirected URL.
        /// </summary>
        BG_HTTP_REDIRECT_POLICY_DISALLOW = 0x0200,
        /// <summary>
        /// Bit mask that you can use with the security flag value to determine which redirect policy is in effect. It does not include the flag ALLOW_HTTPS_TO_HTTP.
        /// 
        /// The following example shows how to use this mask to test for the BG_HTTP_REDIRECT_POLICY_DISALLOW redirection policy.
        /// 
        /// if (BG_HTTP_REDIRECT_POLICY_DISALLOW == (flags & BG_HTTP_REDIRECT_POLICY_MASK))
        /// </summary>
        BG_HTTP_REDIRECT_POLICY_MASK = 0x0700,
        /// <summary>
        /// Allows the server to redirect an HTTPS request to an HTTP URL.
        /// 
        /// You can combine this flag with BG_HTTP_REDIRECT_POLICY_ALLOW_SILENT and BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT. 
        /// </summary>
        BG_HTTP_REDIRECT_POLICY_ALLOW_HTTPS_TO_HTTP = 0x0800
    }
}