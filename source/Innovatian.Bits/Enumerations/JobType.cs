#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion

namespace Innovatian.Bits.Enumerations
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