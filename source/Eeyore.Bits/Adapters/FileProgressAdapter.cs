#region Using Directives

using System;
using Eeyore.Bits.Net.Interop;

#endregion

namespace Eeyore.Bits.Net.Adapters
{
    internal class FileProgressAdapter
    {
        private readonly Decimal _bytesTotal;
        private readonly Decimal _bytesTransferred;
        private readonly bool _completed;

        public FileProgressAdapter( _BG_FILE_PROGRESS fileProgress )
        {
            _bytesTotal = Convert.ToDecimal( fileProgress.BytesTotal );
            _bytesTransferred = Convert.ToDecimal( fileProgress.BytesTransferred );
            _completed = fileProgress.Completed > 0;
        }

        public decimal BytesTotal
        {
            get { return _bytesTotal; }
        }

        public decimal BytesTransferred
        {
            get { return _bytesTransferred; }
        }

        public bool Completed
        {
            get { return _completed; }
        }
    }
}