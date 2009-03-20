namespace Eeyore.Bits.Net
{
    /// <summary>
    /// The JobType enumeration defines constant values that specify the type of transfer job, such as download.
    /// </summary>
    public enum JobType
    {
        /// <summary>
        /// Specifies that the job downloads files to the client.
        /// </summary>
        Download = 0,

        /// <summary>
        /// Specifies that the job uploads a file to the server.
        /// </summary>
        Upload = 1,

        /// <summary>
        /// Specifies that the job uploads a file to the server and receives a reply file from the server application.
        /// </summary>
        UploadReply = 2
    }
}