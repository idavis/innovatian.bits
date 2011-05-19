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

#endregion

namespace Innovatian.Bits.Adapters
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