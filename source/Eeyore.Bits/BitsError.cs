#region Using Directives

using Eeyore.Bits.Net.Adapters;
using Eeyore.Commons.ObjectModel;

#endregion

namespace Eeyore.Bits.Net
{
    /// <summary>
    /// BitsError is a wrapper around IBackgroundCopyError giving detailed
    /// information about an error that has occured in a BitsJob.
    /// </summary>
    public class BitsError : Disposable
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BitsError"/> class.
        /// </summary>
        /// <param name="bitsErrorAdapter">The bits error adapter.</param>
        internal BitsError( BitsErrorAdapter bitsErrorAdapter )
        {
            ErrorAdapter = bitsErrorAdapter;
            File = new BitsFile( bitsErrorAdapter.File );
        }

        private BitsErrorAdapter ErrorAdapter { get; set; }

        /// <summary>
        /// Gets the description.
        /// </summary>
        /// <value>The description.</value>
        public string Description
        {
            get { return ErrorAdapter.Description; }
        }

        /// <summary>
        /// Gets the context description.
        /// </summary>
        /// <value>The context description.</value>
        public string ContextDescription
        {
            get { return ErrorAdapter.ContextDescription; }
        }

        /// <summary>
        /// Gets the protocol.
        /// </summary>
        /// <value>The protocol.</value>
        public string Protocol
        {
            get { return ErrorAdapter.Protocol; }
        }

        /// <summary>
        /// Gets the BitsFile associated with the error.
        /// </summary>
        /// <value>The file.</value>
        public BitsFile File { get; private set; }

        /// <summary>
        /// Gets the error context.
        /// </summary>
        /// <value>The error context.</value>
        public ErrorContext ErrorContext
        {
            get { return ErrorAdapter.ErrorContext; }
        }

        /// <summary>
        /// Gets the error code.
        /// </summary>
        /// <value>The error code.</value>
        public int ErrorCode
        {
            get { return ErrorAdapter.ErrorCode; }
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
            if ( disposing && !IsDisposed )
            {
                if ( ErrorAdapter != null )
                {
                    ErrorAdapter.Dispose();
                    ErrorAdapter = null;
                }
                if ( File != null )
                {
                    File.Dispose();
                    File = null;
                }
            }
            base.Dispose( disposing );
        }
    }
}