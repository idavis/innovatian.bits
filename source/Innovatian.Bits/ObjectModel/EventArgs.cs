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

#endregion

namespace Innovatian.Bits.ObjectModel
{
    /// <summary>
    /// Provides a generic EventsArgs class which eliminates the need to derive classes from EventArgs.
    /// </summary>
    /// <typeparam name="TData">The data type to contain.</typeparam>
    public class EventArgs<TData> : EventArgs
    {
        public new static readonly EventArgs<TData> Empty;

        private readonly TData eventData;

        /// <summary>
        /// Initializes the <see cref="EventArgs&lt;T&gt;"/> class.
        /// </summary>
        static EventArgs()
        {
            Empty = new EventArgs<TData>();
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="EventArgs&lt;T&gt;"/> class.
        /// </summary>
        private EventArgs()
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="EventArgs&lt;T&gt;"/> class.
        /// </summary>
        /// <param name="eventData">The event data.</param>
        public EventArgs( TData eventData )
        {
            this.eventData = eventData;
        }

        /// <summary>
        /// Gets the event data.
        /// </summary>
        /// <value>The event data.</value>
        public TData EventData
        {
            get { return eventData; }
        }
    }
}