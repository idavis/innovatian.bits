#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion

#region Using Directives

using System;
using System.Globalization;

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// The JobProgress structure provides job-related progress information,
    /// such as the number of bytes and files transferred. For upload jobs, the
    /// progress applies to the upload file, not the reply file.
    /// </summary>
    public class JobProgress
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="JobProgress"/> class.
        /// </summary>
        /// <param name="filesTotal">The total number of files in the job.</param>
        /// <param name="filesTransferred">The number of files transferred so far.</param>
        /// <param name="bytesTotal">The total number of bytes in the job.</param>
        /// <param name="bytesTransferred">The number of bytes transferred so far.</param>
        [CLSCompliant( false )]
        public JobProgress( int filesTotal, int filesTransferred, ulong bytesTotal, ulong bytesTransferred )
        {
            FilesTotal = filesTotal;
            FilesTransferred = filesTransferred;
            BytesTotal = bytesTotal;
            BytesTransferred = bytesTransferred;
        }

        /// <summary>
        /// Gets the total number of bytes in the job.
        /// </summary>
        /// <value>The total number of bytes.</value>
        public decimal BytesTotal { get; private set; }

        /// <summary>
        /// Gets the number of bytes transferred.
        /// </summary>
        /// <value>The bytes transferred.</value>
        public decimal BytesTransferred { get; private set; }

        /// <summary>
        /// Gets the total number of files in the job.
        /// </summary>
        /// <value>The total number of files.</value>
        public int FilesTotal { get; private set; }

        /// <summary>
        ///Gets the number of files transferred.
        /// </summary>
        /// <value>The number of files transferred.</value>
        public int FilesTransferred { get; private set; }

        /// <summary>
        /// Returns a <see cref="T:System.String" /> that represents the current
        /// <see cref="T:System.Object" />.
        /// </summary>
        /// <returns>
        /// A <see cref="T:System.String" /> that represents the current <see
        /// cref="T:System.Object" />.
        /// </returns>
        /// <filterpriority>2</filterpriority>
        public override string ToString()
        {
            return string.Format(
                CultureInfo.CurrentCulture,
                "[Job Progress]:\t Bytes:\t {0} / {1},\t\tFiles: {2} / {3}",
                BytesTransferred, BytesTotal, FilesTransferred, FilesTotal );
        }
    }
}