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
using Innovatian.Bits.Interop;
using Innovatian.Bits.ObjectModel;

#endregion

namespace Innovatian.Bits.Adapters
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