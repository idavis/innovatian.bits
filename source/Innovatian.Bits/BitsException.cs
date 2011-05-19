#region License

//
// Copyright � 2009 Ian Davis <ian.f.davis@gmail.com>
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#endregion

#region Using Directives

using System;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Innovatian.Bits.Adapters;

#endregion

namespace Innovatian.Bits
{
    /// <summary>
    /// BitsException is a wrapper around the BITS system COMExceptions.
    /// </summary>
    [Serializable]
    public class BitsException : Exception
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BitsException"/> class.
        /// </summary>
        public BitsException()
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsException"/> class.
        /// </summary>
        /// <param name="message">The message.</param>
        public BitsException( string message )
            : base( message )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsException"/> class.
        /// </summary>
        /// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo"/> that holds the serialized object data about the exception being thrown.</param>
        /// <param name="context">The <see cref="T:System.Runtime.Serialization.StreamingContext"/> that contains contextual information about the source or destination.</param>
        /// <exception cref="T:System.ArgumentNullException">
        /// The <paramref name="info"/> parameter is null.
        /// </exception>
        /// <exception cref="T:System.Runtime.Serialization.SerializationException">
        /// The class name is null or <see cref="P:System.Exception.HResult"/>
        /// is zero (0).
        /// </exception>
        protected BitsException( SerializationInfo info, StreamingContext context )
            : base( info, context )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsException"/> class.
        /// </summary>
        /// <param name="message">The message.</param>
        /// <param name="innerException">The inner exception.</param>
        public BitsException( string message, Exception innerException )
            : base( message, innerException )
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="BitsException"/> class.
        /// </summary>
        /// <param name="innerException">The inner exception.</param>
        public BitsException( ExternalException innerException )
            : base( GetExternalErrorMessage( innerException ), innerException )
        {
        }

        /// <summary>
        /// Request the exception message for BITS errors.
        /// </summary>
        /// <param name="exception">the exception thrown by the BITS system.</param>
        /// <returns>
        /// a string error description from the bits manager for the given exception.
        /// </returns>
        private static string GetExternalErrorMessage( ExternalException exception )
        {
            string message;
            try
            {
                message = BitsManagerAdapter.GetErrorDescription( exception.ErrorCode );
            }
            catch ( Exception )
            {
                message = exception.Message;
            }
            return message;
        }
    }
}