#region Using Directives

using System;
using Eeyore.Bits.Net.Interop;
using Eeyore.Commons.ObjectModel;

#endregion

namespace Eeyore.Bits.Net.Adapters
{
    internal class BitsCallbackAdapter : IBackgroundCopyCallback, IBitsListener
    {
        #region IBackgroundCopyCallback Members

        void IBackgroundCopyCallback.JobError( IBackgroundCopyJob pJob, IBackgroundCopyError pError )
        {
            EventHandler<JobErrorEventArgs> handler = JobError;
            if ( handler != null )
            {
                handler( this,
                         new JobErrorEventArgs( new BitsJob( new BitsJobAdapter( pJob ) ),
                                                new BitsError( new BitsErrorAdapter( pError ) ) ) );
            }
        }

        void IBackgroundCopyCallback.JobModification( IBackgroundCopyJob pJob, uint dwReserved )
        {
            EventHandler<EventArgs<BitsJob>> handler = JobModification;
            if ( handler != null )
            {
                handler( this, new EventArgs<BitsJob>( new BitsJob( new BitsJobAdapter( pJob ) ) ) );
            }
        }

        void IBackgroundCopyCallback.JobTransferred( IBackgroundCopyJob pJob )
        {
            EventHandler<EventArgs<BitsJob>> handler = JobTransferred;
            if ( handler != null )
            {
                handler( this, new EventArgs<BitsJob>( new BitsJob( new BitsJobAdapter( pJob ) ) ) );
            }
        }

        #endregion

        #region IBitsListener Members

        public event EventHandler<JobErrorEventArgs> JobError;

        public event EventHandler<EventArgs<BitsJob>> JobModification;

        public event EventHandler<EventArgs<BitsJob>> JobTransferred;

        #endregion
    }
}