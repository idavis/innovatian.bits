#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion
#region Using Directives

using System.Runtime.InteropServices;
using System.Threading;
using Innovatian.Bits.Enumerations;
using Innovatian.Bits.Interop;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits.Adapters
{
    internal class BitsErrorAdapter : Disposable
    {
        /// <summary>
        /// 
        /// </summary>
        /// <param name="bitsError">
        /// The IBackgroundCopyError interface object which holds the cause of
        /// an error and knows if the transfer process can proceed.
        /// </param>
        public BitsErrorAdapter( IBackgroundCopyError bitsError )
        {
            Error = bitsError;

            // This is a COM resource, so I want to manage it.
            IBackgroundCopyFile ppFile;
            Error.GetFile( out ppFile );
            File = new BitsFileAdapter( ppFile );
        }

        private IBackgroundCopyError Error { get; set; }

        public string Description
        {
            get
            {
                try
                {
                    string temp;
                    Error.GetErrorDescription( Thread.CurrentThread.CurrentUICulture.LanguageId(), out temp );
                    return temp ?? string.Empty;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        public string ContextDescription
        {
            get
            {
                try
                {
                    string temp;
                    Error.GetErrorContextDescription( Thread.CurrentThread.CurrentUICulture.LanguageId(), out temp );
                    return temp ?? string.Empty;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        public string Protocol
        {
            get
            {
                try
                {
                    string temp;
                    Error.GetProtocol( out temp );
                    return temp ?? string.Empty;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        public BitsFileAdapter File { get; private set; }

        public ErrorContext ErrorContext
        {
            get
            {
                try
                {
                    int pErrorCode;
                    BG_ERROR_CONTEXT pContext;

                    Error.GetError( out pContext, out pErrorCode );
                    return (ErrorContext) pContext;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        public int ErrorCode
        {
            get
            {
                try
                {
                    int pErrorCode;
                    BG_ERROR_CONTEXT pContext;

                    Error.GetError( out pContext, out pErrorCode );
                    return pErrorCode;
                }
                catch ( COMException ex )
                {
                    throw new BitsException( ex );
                }
            }
        }

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting
        /// classes.
        /// </remarks>
        protected override void Dispose( bool disposing )
        {
            if ( !IsDisposed )
            {
                if ( Error != null )
                {
                    Marshal.ReleaseComObject( Error );
                    Error = null;
                }
                if ( File != null )
                {
                    Marshal.ReleaseComObject( File );
                    File = null;
                }
            }
            base.Dispose( disposing );
        }
    }
}