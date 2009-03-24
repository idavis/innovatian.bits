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

using System.Collections.Generic;
using System.Linq;
using Eeyore.Bits.Adapters;
using Eeyore.Bits.Interop;

#endregion

namespace Eeyore.Bits
{
    public class BitsManager
    {
        public IList<BitsJob> JobsForCurrentUser
        {
            get { return BitsManagerAdapter.GetCurrentUserJobs().ToList(); }
        }

        public IList<BitsJob> JobsForAllUsers
        {
            get { return BitsManagerAdapter.GetAllUserJobs().ToList(); }
        }

        public BitsJob CreateJob( string jobName, string description )
        {
            BitsJob bitsJob = BitsManagerAdapter.CreateBitsJob( jobName, BG_JOB_TYPE.BG_JOB_TYPE_UPLOAD, description );
            return bitsJob;
        }
    }
}