#region Using Directives

using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

#endregion

namespace Eeyore.Bits.Interop
{
    /// <summary>
    /// Use this interface to specify client certificates for certificate-based client authentication and custom headers for HTTP requests.
    /// 
    /// To get this interface, call the IBackgroundCopyJob::QueryInterface method using __uuidof(IBackgroundCopyJobHttpOptions) for the interface identifier. 
    /// </summary>
    [BitsVersion( BitsVersion.Bits_25 )]
    [ComImport]
    [InterfaceType( ComInterfaceType.InterfaceIsIUnknown )]
    [ComConversionLoss]
    [Guid( "F1BD1079-9F01-4BDC-8036-F09B70095066" )]
    internal interface IBackgroundCopyJobHttpOptions
    {
        /// <summary>
        /// Specifies the identifier of the client certificate to use for client authentication in an HTTPS (SSL) request.
        /// </summary>
        /// <param name="StoreLocation">
        /// Identifies the location of a system store to use for looking up the certificate. For possible values, see the BG_CERT_STORE_LOCATION enumeration.
        /// </param>
        /// <param name="StoreName">
        /// Null-terminated string that contains the name of the certificate store. The string is limited to 256 characters, including the null terminator. You can specify one of the following system stores or an application-defined store. The store can be a local or remote store.
        /// CA
        /// Certification authority certificates
        /// 
        /// MY
        /// Personal certificates
        /// 
        /// ROOT
        /// Root certificates
        /// 
        /// SPC
        /// Software Publisher Certificate
        /// </param>
        /// <param name="pCertHashBlob">
        /// SHA1 hash that identifies the certificate. Use a 20 byte buffer for the hash. For more information, see Remarks.
        /// </param>
        /// <remarks>
        /// Only the job owner can specify the client certificate. If the job changes ownership, BITS removes the certificate from the job.
        /// 
        /// The client certificate is applicable only for remote files that use the HTTP or HTTPS protocol. You can specify a certificate for all job types.
        /// 
        /// When a web site accepts but does not require an SSL client certificate, and the BITS job does not specify a client certificate, the job will fail with ERROR_WINHTTP_CLIENT_AUTH_CERT_NEEDED (0x80072f0c).
        /// 
        /// If you create a certificate for the job or application, you could store the certificate identifier (thumbprint) in the registry or database and use it when a job requires a certificate. You could also enumerate the certificates in the store and let the user choose the certificate. Another alternative is to call the CertFindCertificateInStore function to retrieve the certificate context based on some criteria. Using the context, call the CertGetCertificateContextProperty function to retrieve the hash (specify CERT_HASH_PROP_ID for dwPropId).
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetClientCertificateByID(
            [In] [ComAliasName( "BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION" )] BG_CERT_STORE_LOCATION
                StoreLocation, [In] [MarshalAs( UnmanagedType.LPWStr )] string StoreName, [In] ref byte pCertHashBlob );

        /// <summary>
        /// Specifies the subject name of the client certificate to use for client authentication in an HTTPS (SSL) request.
        /// </summary>
        /// <param name="StoreLocation">
        /// Identifies the location of a system store to use for looking up the certificate. For possible values, see the BG_CERT_STORE_LOCATION enumeration.
        /// </param>
        /// <param name="StoreName">
        /// Null-terminated string that contains the name of the certificate store. The string is limited to 256 characters, including the null terminator. You can specify one of the following system stores or an application-defined store. The store can be a local or remote store.
        /// CA
        /// Certification authority certificates
        /// 
        /// MY
        /// Personal certificates
        /// 
        /// ROOT
        /// Root certificates
        /// 
        /// SPC
        /// Software Publisher Certificate
        /// </param>
        /// <param name="SubjectName">
        ///     Null-terminated string that contains the simple subject name of the certificate. If the subject name contains multiple relative distinguished names (RDNs), you can specify one or more adjacent RDNs. If you specify more than one RDN, the list is comma-delimited. The string is limited to 256 characters, including the null terminator. You cannot specify an empty subject name.
        /// 
        ///     Do not include the object identifier in the name. You must specify the RDNs in the reverse order from what the certificate displays. For example, if the subject name in the certificate is "CN=name1, OU=name2, O=name3", specify the subject name as "name3, name2, name1".
        /// 
        /// </param>
        /// <remarks>
        /// Only the job owner can specify the client certificate. If the job changes ownership, BITS removes the certificate from the job.
        /// 
        /// The client certificate is applicable only for remote files that use the HTTP or HTTPS protocol. You can specify a certificate for all job types.
        /// 
        /// When a web site accepts but does not require an SSL client certificate, and the BITS job does not specify a client certificate, the job will fail with ERROR_WINHTTP_CLIENT_AUTH_CERT_NEEDED (0x80072f0c).
        /// 
        /// The method uses the subject name string to perform a substring search for the certificate. Since subject names are not necessarily unique, this method searches the store for the first certificate that uses the given subject name and is a client authentication certificate. You should provide the complete subject name for a better chance of finding a single match. If the certificate is not correct (not trusted), the job will fail with BG_E_HTTP_ERROR_403 when BITS tries to transfer the file and the job will move to the error state. If you cannot guarantee a unique subject name, consider using the IBackgroundCopyJobHttpOptions::SetClientCertificateByID method instead.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetClientCertificateByName(
            [In] [ComAliasName( "BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION" )] BG_CERT_STORE_LOCATION
                StoreLocation, [In] [MarshalAs( UnmanagedType.LPWStr )] string StoreName,
            [In] [MarshalAs( UnmanagedType.LPWStr )] string SubjectName );

        /// <summary>
        /// Removes the client certificate from the job.
        /// </summary>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void RemoveClientCertificate();

        /// <summary>
        /// Retrieves the client certificate from the job.
        /// </summary>
        /// <param name="pStoreLocation">
        /// Identifies the location of a system store to use for looking up the certificate. For possible values, see the BG_CERT_STORE_LOCATION enumeration.
        /// </param>
        /// <param name="pStoreName">
        /// Null-terminated string that contains the name of the certificate store. To free the string when done, call the CoTaskMemFree function.
        /// </param>
        /// <param name="ppCertHashBlob">
        /// SHA1 hash that identifies the certificate. To free the blob when done, call the CoTaskMemFree function.
        /// </param>
        /// <param name="pSubjectName">
        /// Null-terminated string that contains the simple subject name of the certificate. The RDNs in the subject name are in the reverse order from what the certificate displays. Subject name can be empty if the certificate does not contain a subject name. To free the string when done, call the CoTaskMemFree function.
        /// </param>
        /// <remarks>
        /// You use the IBackgroundCopyJobHttpOptions::SetClientCertificateByID or IBackgroundCopyJobHttpOptions::SetClientCertificateByName method to specify the certificate.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetClientCertificate(
            [ComAliasName( "BackgroundCopyManager2_5.BG_CERT_STORE_LOCATION" )] out BG_CERT_STORE_LOCATION
                pStoreLocation, [MarshalAs( UnmanagedType.LPWStr )] out string pStoreName, [Out] IntPtr ppCertHashBlob,
            [MarshalAs( UnmanagedType.LPWStr )] out string pSubjectName );

        /// <summary>
        /// Specifies one or more custom HTTP headers to include in HTTP requests.
        /// </summary>
        /// <param name="RequestHeaders">
        /// Null-terminated string that contains the custom headers to append to the HTTP request. Each header must be terminated by a carriage return and line feed (CR/LF) character. The string is limited to 16,384 characters, including the null terminator.
        ///
        /// To remove the custom headers from the job, set the RequestHeaders parameter to NULL.
        /// </param>
        /// <remarks>
        /// The custom headers are applicable only to remote files that use the HTTP or HTTPS protocol. You can specify custom headers for all job types.
        /// 
        /// Only the job owner can specify custom headers. If the job changes ownership, BITS removes the headers from the job.
        /// 
        /// Note that if multiple HTTP requests are sent, the headers are sent with each request.
        /// 
        /// An ISAPI that processes the custom header can return an HTTP error if the header is not valid. For details on how BITS handles the error, see Handling Server Application Errors.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetCustomHeaders( [In] [MarshalAs( UnmanagedType.LPWStr )] string RequestHeaders );

        /// <summary>
        /// Retrieves the custom HTTP headers from the job.
        /// </summary>
        /// <param name="pRequestHeaders">
        /// Null-terminated string that contains the custom headers. Each header is terminated by a carriage return and line feed (CR/LF) character. To free the string when finished, call the CoTaskMemFree function.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetCustomHeaders( [MarshalAs( UnmanagedType.LPWStr )] out string pRequestHeaders );

        /// <summary>
        /// Sets flags for HTTP that determine whether the certificate revocation list is checked and certain certificate errors are ignored, and the policy to use when a server redirects the HTTP request.
        /// </summary>
        /// <param name="Flags">
        /// HTTP security flags that indicate which errors to ignore when connecting to the server
        /// </param>
        /// <remarks>
        /// If CRL checking is requested, BITS performs the check for all files in the job that specify the HTTPS protocol. The check is made for each file before the file begins transferring. If you set this value to TRUE after BITS has partially downloaded a file, BITS will reschedule the job and begin downloading the file again. Files that are already downloaded are not affected.
        /// 
        /// BITS uses the CRL on the local computer if the CRL is up-to-date; otherwise, BITS downloads the CRL from the certificate authority (CA) that signed the certificate.
        /// 
        /// The job goes into the fatal error state if the following errors occur.
        /// Error code	Description
        /// ERROR_WINHTTP_SECURE_CERT_REV_FAILED	Unable to request CRL checking because the certificate server is offline or the CRL cannot be downloaded.
        /// ERROR_WINHTTP_SECURE_CERT_REVOKED	The certificate is revoked.
        /// 
        /// The redirect policy applies to all files in a download job (the policy does not apply to upload jobs).
        /// 
        ///     Prior to BITS 3.0:  The redirect policies are not supported.
        /// 
        /// If the policy is BG_HTTP_REDIRECT_POLICY_DISALLOW and the server redirects your request, the job is placed in the fatal error state with one of the following error codes. For descriptions of the error codes, see HTTP Status Codes.
        /// 
        ///     * HRESULT_FROM_WIN32(HTTP_STATUS_AMBIGUOUS)
        ///     * HRESULT_FROM_WIN32(HTTP_STATUS_MOVED)
        ///     * HRESULT_FROM_WIN32(HTTP_STATUS_REDIRECT)
        ///     * HRESULT_FROM_WIN32(HTTP_STATUS_REDIRECT_METHOD)
        ///     * HRESULT_FROM_WIN32(HTTP_STATUS_REDIRECT_KEEP_VERB)
        /// 
        /// BITS does not support redirection from HTTP or HTTPs to SMB.
        /// 
        /// If peer caching is enabled and you specify BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT, the file is stored in the cache with the final redirected URL. If a peer then tries to download the file with the original URL, the peer will not find the file in the peer's cache and will end up downloading the file from the origin server.
        /// 
        /// If you specify and the file is downloaded from the
        /// 
        /// Note that setting BG_HTTP_REDIRECT_POLICY_ALLOW_REPORT may affect the result when calling the IBackgroundCopyJob3::ReplaceRemotePrefix method. If a server redirected your request, BITS will have already changed the original URL to the final redirected URL, so calling the ReplaceRemotePrefix method will not find files with the original URL.
        /// </remarks>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void SetSecurityFlags( [In] BG_HTTP_SECURITY_FLAGS Flags );

        /// <summary>
        /// Retrieves the flags for HTTP that determine whether the certificate revocation list is checked and certain certificate errors are ignored, and the policy to use when a server redirects the HTTP request.
        /// </summary>
        /// <param name="pFlags">
        /// HTTP security flags that indicate which errors to ignore when connecting to the server.
        /// </param>
        [MethodImpl( MethodImplOptions.InternalCall, MethodCodeType = MethodCodeType.Runtime )]
        void GetSecurityFlags( out BG_HTTP_SECURITY_FLAGS pFlags );
    }
}