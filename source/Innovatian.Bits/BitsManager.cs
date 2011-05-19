#region License

//
// Copyright © 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion

#region Using Directives

using System.Collections.Generic;
using System.Linq;
using Innovatian.Bits.Adapters;
using Innovatian.Bits.Interop;

#endregion

namespace Innovatian.Bits
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