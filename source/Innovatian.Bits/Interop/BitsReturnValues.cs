#region Using Directives

using System.Diagnostics.CodeAnalysis;

#endregion

namespace Innovatian.Bits.Interop
{
    [SuppressMessage( "Microsoft.Design", "CA1028:EnumStorageShouldBeInt32" )]
    [SuppressMessage( "Microsoft.Naming", "CA1717:OnlyFlagsEnumsShouldHavePluralNames" )]
    [SuppressMessage( "Microsoft.Design", "CA1008:EnumsShouldHaveZeroValue" )]
    internal enum BitsReturnValues : uint
    {
        /// <summary>
        /// A subset of the job's files transferred successfully before the
        /// IBackgroundCopyJob::Complete method was called. Those that were not
        /// complete were deleted.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "COMPLETE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PARTIAL" )]
        BG_S_PARTIAL_COMPLETE = ( 0x00200017 ),

        /// <summary>
        /// Unable to delete all temporary files associated with the job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DELETE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILES" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "UNABLE" )]
        BG_S_UNABLE_TO_DELETE_FILES = ( 0x0020001A ),

        /// <summary>
        /// The configuration preference has been saved successfully, but the
        /// preference will not be used because a configured Group Policy
        /// setting overrides the preference.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "OVERRIDDEN" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "POLICY" )]
        BG_S_OVERRIDDEN_BY_POLICY = ( 0x00200055 ),

        /// <summary>
        /// The requested job was not found.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FOUND" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOT" )]
        BG_E_NOT_FOUND = ( 0x80200001 ),

        /// <summary>
        /// The requested action is not allowed in the current job state. 
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STATE" )]
        BG_E_INVALID_STATE = ( 0x80200002 ),

        /// <summary>
        /// The job must contain one or more files before you can resume the
        /// job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "EMPTY" )]
        BG_E_EMPTY = ( 0x80200003 ),

        /// <summary>
        /// File information is not available because the error is not
        /// associated with a local or remote file.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "AVAILABLE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOT" )]
        BG_E_FILE_NOT_AVAILABLE = ( 0x80200004 ),

        /// <summary>
        /// Protocol information is not available because the error is not
        /// associated with the specified transfer protocol.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "AVAILABLE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROTOCOL" )]
        BG_E_PROTOCOL_NOT_AVAILABLE = ( 0x80200005 ),

        /// <summary>
        /// The destination file system volume, specified in the local file
        /// name, is locked.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DESTINATION" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LOCKED" )]
        BG_E_DESTINATION_LOCKED = ( 0x8020000D ),

        /// <summary>
        /// The destination volume, specified in the local file name, has
        /// changed. For example, the original floppy disk has been replaced
        /// with a different floppy disk.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CHANGED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "VOLUME" )]
        BG_E_VOLUME_CHANGED = ( 0x8020000E ),

        /// <summary>
        /// Error information is only available when the state of the job is
        /// BG_JOB_STATE_ERROR. The error information is not available after
        /// BITS begins transferring the job's data or the client exits.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INFORMATION" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "UNAVAILABLE" )]
        BG_E_ERROR_INFORMATION_UNAVAILABLE = ( 0x8020000F ),

        /// <summary>
        /// The network adapter is inactive or disconnected. All jobs are placed
        /// in the BG_JOB_STATE_TRANSIENT_ERROR state.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DISCONNECTED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NETWORK" )]
        BG_E_NETWORK_DISCONNECTED = ( 0x80200010 ),

        /// <summary>
        /// The server did not return the file size. BITS only transfers static
        /// content and requires the HTTP server to return the Content-Length
        /// header. The transfer request fails if the URL points to dynamic
        /// content.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MISSING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SIZE" )]
        BG_E_MISSING_FILE_SIZE = ( 0x80200011 ),

        /// <summary>
        /// The server does not support the HTTP/1.1 protocol.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INSUFFICIENT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SUPPORT" )]
        BG_E_INSUFFICIENT_HTTP_SUPPORT = ( 0x80200012 ),

        /// <summary>
        /// The server does not support the Content-Range header. Typically, you
        /// receive this error when you try to download dynamic content. You can
        /// also receive this error if an intermediate proxy is removing the
        /// Content-Range or Content-Length header. 
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INSUFFICIENT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "RANGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SUPPORT" )]
        BG_E_INSUFFICIENT_RANGE_SUPPORT = ( 0x80200013 ),

        /// <summary>
        /// Remote use of BITS is not supported. For more information, see Users
        /// and Network Connections.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NOT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "REMOTE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SUPPORTED" )]
        BG_E_REMOTE_NOT_SUPPORTED = ( 0x80200014 ),

        /// <summary>
        /// The network drive mapping for the local file is different for the
        /// current owner than for the previous owner.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DIFF" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MAPPING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NEW" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "OWNER" )]
        BG_E_NEW_OWNER_DIFF_MAPPING = ( 0x80200015 ),

        /// <summary>
        /// The new owner has insufficient permissions to the temporary job
        /// files.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ACCESS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "NEW" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "OWNER" )]
        BG_E_NEW_OWNER_NO_FILE_ACCESS = ( 0x80200016 ),

        /// <summary>
        /// The HTTP proxy list is too long. The list must not exceed 32 KB.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LARGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LIST" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_PROXY_LIST_TOO_LARGE = ( 0x80200018 ),

        /// <summary>
        /// The HTTP proxy bypass list is too long. The list must not exceed 32
        /// KB.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "BYPASS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LARGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LIST" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_PROXY_BYPASS_LIST_TOO_LARGE = ( 0x80200019 ),

        /// <summary>
        /// You cannot add more than one file to an upload job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILES" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_TOO_MANY_FILES = ( 0x8020001C ),

        /// <summary>
        /// The contents of the local file changed after the transfer process
        /// began. The contents of the local file cannot change after the
        /// transfer process begins on an upload or upload-reply job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CHANGED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LOCAL" )]
        BG_E_LOCAL_FILE_CHANGED = ( 0x8020001D ),

        /// <summary>
        /// The size of the upload file exceeds the maximum allowed upload size
        /// specified on the server.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LARGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_TOO_LARGE = ( 0x80200020 ),

        /// <summary>
        /// The specified string is too long.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LONG" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "STRING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_STRING_TOO_LONG = ( 0x80200021 ),

        /// <summary>
        /// The client and server were unable to negotiate a protocol to use for
        /// the upload job.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CLIENT" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MISMATCH" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROTOCOL" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SERVER" )]
        BG_E_CLIENT_SERVER_PROTOCOL_MISMATCH = ( 0x80200022 ),

        /// <summary>
        /// Scripting or execute permissions are enabled on the IIS virtual
        /// directory associated with the job. To upload files to the virtual
        /// directory, disable the scripting and execute permissions on the
        /// virtual directory.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ENABLED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "EXECUTE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SERVER" )]
        BG_E_SERVER_EXECUTE_ENABLED = ( 0x80200023 ),

        /// <summary>
        /// The user name cannot exceed 300 characters.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1702:CompoundWordsShouldBeCasedCorrectly", MessageId = "USERNAME" )]
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LARGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USERNAME" )]
        BG_E_USERNAME_TOO_LARGE = ( 0x80200025 ),

        /// <summary>
        /// The password cannot exceed 300 characters. 
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "LARGE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PASSWORD" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_PASSWORD_TOO_LARGE = ( 0x80200026 ),

        /// <summary>
        /// The specified authentication target is not valid.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "AUTH" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TARGET" )]
        BG_E_INVALID_AUTH_TARGET = ( 0x80200027 ),

        /// <summary>
        /// The specified authentication scheme is not valid.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "AUTH" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "SCHEME" )]
        BG_E_INVALID_AUTH_SCHEME = ( 0x80200028 ),

        /// <summary>
        /// The specified byte range is invalid. The byte range must exist
        /// within the specified remote file.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "RANGE" )]
        BG_E_INVALID_RANGE = ( 0x8020002B ),

        /// <summary>
        /// The list of byte ranges contains overlapping or duplicate ranges,
        /// which are not supported.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "OVERLAPPING" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "RANGES" )]
        BG_E_OVERLAPPING_RANGES = ( 0x8020002C ),

        /// <summary>
        /// Group Policy settings prevent background jobs from running at this
        /// time. For details, see the MaxInternetBandwidth policy. 
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "BLOCKED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "POLICY" )]
        BG_E_BLOCKED_BY_POLICY = ( 0x8020003E ),

        /// <summary>
        /// Run-time error that indicates the proxy list or proxy bypass list
        /// that you specified using the IBackgroundCopyJob::SetProxySettings
        /// method is invalid.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INFO" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PROXY" )]
        BG_E_INVALID_PROXY_INFO = ( 0x8020003F ),

        /// <summary>
        /// The format of the supplied security credentials is not valid.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "CREDENTIALS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "INVALID" )]
        BG_E_INVALID_CREDENTIALS = ( 0x80200040 ),

        /// <summary>
        /// The cache record has been deleted. The attempt to update it has been
        /// abandoned.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DELETED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "RECORD" )]
        BG_E_RECORD_DELETED = ( 0x80200042 ),

        /// <summary>
        /// A Universal Plug and Play (UPnP) error has occurred. Please check
        /// your Internet Gateway Device.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "UPNP" )]
        BG_E_UPNP_ERROR = ( 0x80200045 ),

        /// <summary>
        /// Peer-caching is disabled.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "DISABLED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PEERCACHING" )]
        BG_E_PEERCACHING_DISABLED = ( 0x80200047 ),

        /// <summary>
        /// The cache record is in use and cannot be changed or deleted. Try
        /// again after a few seconds.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "BUSYCACHERECORD"
            )]
        BG_E_BUSYCACHERECORD = ( 0x80200048 ),

        /// <summary>
        /// The job count for the user has exceeded the per user job limit set
        /// by the MaxJobsPerUser Group Policy setting.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOBS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PER" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "USER" )]
        BG_E_TOO_MANY_JOBS_PER_USER = ( 0x80200049 ),

        /// <summary>
        /// The job count for the computer has exceeded the per computer job
        /// limit set by the MaxJobsPerMachine Group Policy setting.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOBS" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MACHINE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "PER" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_TOO_MANY_JOBS_PER_MACHINE = ( 0x80200050 ),

        /// <summary>
        /// The file count for the job has exceeded the per job file limit set
        /// by the MaxFilesPerJob Group Policy setting.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILES" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "JOB" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_TOO_MANY_FILES_IN_JOB = ( 0x80200051 ),

        /// <summary>
        /// The range count for the file has exceeded the per file range limit
        /// set by the MaxRangesPerFile Group Policy setting.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FILE" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MANY" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "RANGES" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TOO" )]
        BG_E_TOO_MANY_RANGES_IN_FILE = ( 0x80200052 ),

        /// <summary>
        /// The application requested data from a web site, but the response was
        /// not valid. For details, use Event Viewer to view the Application
        /// Logs\Microsoft\Windows\Bits-client\Operational log.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "FAILED" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "VALIDATION" )]
        BG_E_VALIDATION_FAILED = ( 0x80200053 ),

        /// <summary>
        /// BITS timed out downloading the job. The download did not complete
        /// within the maximum download time set on the job or the
        /// MaxDownloadTime Group Policy setting.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "MAXDOWNLOAD" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "TIMEOUT" )]
        BG_E_MAXDOWNLOAD_TIMEOUT = ( 0x80200054 ),

        /// <summary>
        /// The server could not process the transfer request because the syntax
        /// of the remote file name is invalid.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_400 = ( 0x80190190 ),

        /// <summary>
        /// The user does not have permission to access the remote file. The
        /// requested resource requires user authentication.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_401 = ( 0x80190191 ),

        /// <summary>
        /// The requested URL does not exist on the server. In IIS 7, this error
        /// can indicate That BITS uploads are not enabled on the virtual
        /// directory (vdir) on the server. That the upload size exceeds the
        /// maximum upload limit (for details, see the BITSMaximumUploadSize IIS
        /// extension property).
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_404 = ( 0x80190194 ),

        /// <summary>
        /// The user does not have permission to access the proxy. The proxy
        /// requires user authentication.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_407 = ( 0x80190197 ),

        /// <summary>
        /// The server cannot process the transfer request. The Uniform Resource
        /// Identifier (URI) in the remote file name is longer than the server
        /// can interpret.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_414 = ( 0x8019019E ),

        /// <summary>
        /// The server does not support the functionality required to fulfill
        /// the request. In IIS 6, this error indicates that BITS uploads are
        /// not enabled on the virtual directory = (vdir) on the server.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_501 = ( 0x801901F5 ),

        /// <summary>
        /// The service is temporarily overloaded and cannot process the
        /// request. Resume the job at a later time.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_503 = ( 0x801901F7 ),

        /// <summary>
        /// The transfer request timed out while waiting for a gateway. Resume
        /// the job at a later time.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_504 = ( 0x801901F8 ),

        /// <summary>
        /// The server does not support the HTTP protocol version specified in
        /// the remote file name.
        /// </summary>
        [SuppressMessage( "Microsoft.Naming", "CA1707:IdentifiersShouldNotContainUnderscores" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "ERROR" )]
        [SuppressMessage( "Microsoft.Naming", "CA1709:IdentifiersShouldBeCasedCorrectly", MessageId = "HTTP" )]
        BG_E_HTTP_ERROR_505 = ( 0x801901F9 )
    }
}