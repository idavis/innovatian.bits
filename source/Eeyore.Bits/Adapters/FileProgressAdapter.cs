#region License

//
// Copyright © 2009 Ian Davis <ian.f.davis@gmail.com>
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
using Eeyore.Bits.Interop;

#endregion

namespace Eeyore.Bits.Adapters
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