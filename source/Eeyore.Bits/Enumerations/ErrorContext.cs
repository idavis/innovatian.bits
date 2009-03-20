namespace Eeyore.Bits.Net
{
    /// <summary>
    /// The ErrorContext enumeration defines the constant values that specify
    /// the context in which the error occurred.
    /// </summary>
    public enum ErrorContext
    {
        /// <summary>
        /// An error has not occurred.
        /// </summary>
        None = 0,

        /// <summary>
        /// The error context is unknown.
        /// </summary>
        Unknown = 1,

        /// <summary>
        /// The transfer queue manager generated the error.
        /// </summary>
        GeneralQueueManager = 2,

        /// <summary>
        /// The error was generated while the queue manager was notifying the
        /// client of an event.
        /// </summary>
        QueueManagerNotification = 3,

        /// <summary>
        /// The error was related to the specified local file. For example,
        /// permission was denied or the volume was unavailable.
        /// </summary>
        LocalFile = 4,

        /// <summary>
        /// The error was related to the specified remote file. For example, the
        /// URL was not accessible.
        /// </summary>
        RemoteFile = 5,

        /// <summary>
        /// The transport layer generated the error. These errors are general
        /// transport failures (these errors are not specific to the remote
        /// file).
        /// </summary>
        GeneralTransport = 6,

        /// <summary>
        /// The server application that BITS passed the upload file to generated
        /// an error while processing the upload file.
        /// </summary>
        RemoteApplication = 7
    }
}