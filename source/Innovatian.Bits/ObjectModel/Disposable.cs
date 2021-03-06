#region License

//
// Copyright � 2009-2011 Ian Davis <ian@innovatian.com>
// 
// Dual-licensed under the Apache License, Version 2.0, and the Microsoft Public License (Ms-PL).
// See the file LICENSE.txt for details.
//

#endregion

#region Using Directives

using System;
using System.Collections;
using System.Diagnostics;
using System.Reflection;
using System.Text;

#endregion

namespace Innovatian.Bits.ObjectModel
{
    /// <summary>
    /// 
    /// </summary>
    [Serializable]
    [CLSCompliant( true )]
    public abstract class Disposable : IDisposable
    {
        private readonly string _source = GetPreambleMessage( typeof (Disposable) );
        private bool _disposed;

        /// <summary>
        /// Gets a value indicating whether this instance is disposed.
        /// </summary>
        /// <value>
        /// 	<c>true</c> if this instance is disposed; otherwise, <c>false</c>.
        /// </value>
        public bool IsDisposed
        {
            get { return _disposed; }
        }

        #region IDisposable Members

        /// <summary>
        /// Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
        /// </summary>
        public void Dispose()
        {
            Dispose( true );
            // This object will be cleaned up by the Dispose method.
            // Therefore, you should call GC.SupressFinalize to
            // take this object off the finalization queue 
            // and prevent finalization code for this object
            // from executing a second time.
            GC.SuppressFinalize( this );
        }

        #endregion

        /// <summary>
        /// Gets the preamble message.
        /// </summary>
        /// <param name="callerType">Type of the caller.</param>
        /// <returns></returns>
        public static string GetPreambleMessage( Type callerType )
        {
            return GetPreambleMessage( callerType, 0, 1 );
        }

        /// <summary>
        /// Gets the preamble message.
        /// </summary>
        /// <param name="callerType">Type of the caller.</param>
        /// <returns></returns>
        /// <param name="currentFrame"></param>
        /// <param name="frameCount"></param>
        public static string GetPreambleMessage( Type callerType, int currentFrame, int frameCount )
        {
#if DEBUG
            try
            {
                var preamble = new StringBuilder();
                var stackTrace = new StackTrace();
                MethodBase stackFrameMethod;
                string typeName;
                do
                {
                    // Move up the stack trace frame by frame
                    currentFrame++;
                    StackFrame stackFrame = stackTrace.GetFrame( currentFrame );
                    stackFrameMethod = stackFrame.GetMethod();
                    typeName = stackFrameMethod.ReflectedType.FullName;
                    // Once we have found a method that is not within the calling type we break;
                } while ( callerType.IsAssignableFrom( stackFrameMethod.ReflectedType ) );

                preamble.AppendFormat( "[{0}] Created:{1}", DateTime.Now, Environment.NewLine );
                CreatePreambleStringForMethod( typeName, stackFrameMethod, preamble );
                for ( int i = 1; i < frameCount; i++ )
                {
                    currentFrame++;
                    StackFrame stackFrame = stackTrace.GetFrame( currentFrame );
                    stackFrameMethod = stackFrame.GetMethod();
                    typeName = stackFrameMethod.ReflectedType.FullName;
                    CreatePreambleStringForMethod( typeName, stackFrameMethod, preamble );
                }

                return preamble.ToString();
            }
            catch ( Exception ex )
            {
                return string.Format( "{0}: {1}{2}", ex.Message, Environment.NewLine, ex.StackTrace );
            }
#else
            return string.Empty;
#endif
        }

        /// <summary>
        /// Creates the preamble string for method.
        /// </summary>
        /// <param name="typeName">Name of the type.</param>
        /// <param name="stackFrameMethod">The stack frame method.</param>
        /// <param name="preamble">The preamble.</param>
        [Conditional( "DEBUG" )]
        private static void CreatePreambleStringForMethod( string typeName, MethodBase stackFrameMethod,
                                                           StringBuilder preamble )
        {
            // log DateTime, Namespace, Class and Method Name
            preamble.AppendFormat( "at\t{0}.{1}( ", typeName, stackFrameMethod.Name );

            // log parameter types and names
            ParameterInfo[] parameters = stackFrameMethod.GetParameters();
            int parameterIndex = 0;

            while ( parameterIndex < parameters.Length )
            {
                ParameterInfo currentParameterInfo = parameters[parameterIndex];
                preamble.AppendFormat( "{0} {1}{2}",
                                       currentParameterInfo.ParameterType.Name,
                                       currentParameterInfo.Name,
                                       ( ++parameterIndex != parameters.Length ) ? ", " : string.Empty );
            }

            preamble.AppendFormat( " ):{0}", Environment.NewLine );
        }

        /// <summary>
        /// Releases unmanaged and - optionally - managed resources.
        /// </summary>
        /// <remarks>
        /// A call to base.Dispose( disposing ); must be made by all inheriting classes.
        /// </remarks>
        /// <param name="disposing"><c>true</c> to release both managed and unmanaged resources; <c>false</c> to release only unmanaged resources.</param>
        protected virtual void Dispose( bool disposing )
        {
            _disposed = true;
        }

        /// <summary>
        /// Releases unmanaged resources and performs other cleanup operations before the
        /// <see cref="Disposable"/> is reclaimed by garbage collection.
        /// Use C# destructor syntax for finalization code.
        /// This destructor will run only if the Dispose method 
        /// does not get called.
        /// It gives your base class the opportunity to finalize.
        /// Do not provide destructors in types derived from this class.
        /// </summary>
        ~Disposable()
        {
            Console.Error.WriteLine( "{0} was collected by the finalizer. It was created here:{1}{2}",
                                     GetType(),
                                     Environment.NewLine,
                                     _source );
            Dispose( false );
        }

        /// <summary>
        /// Disposes the member.
        /// </summary>
        /// <param name="disposable">The disposable.</param>
        public static void DisposeMember( IDisposable disposable )
        {
            if ( disposable != null )
            {
                disposable.Dispose();
            }
        }

        /// <summary>
        /// Disposes the collection.
        /// </summary>
        /// <param name="collection">The collection.</param>
        public static void DisposeCollection( IEnumerable collection )
        {
            if ( collection != null )
            {
                foreach ( object item in collection )
                {
                    if ( item is IDictionary )
                    {
                        DisposeDictionary( item as IDictionary );
                    }
                    else if ( item is IEnumerable )
                    {
                        DisposeCollection( item as IEnumerable );
                    }
                    else
                    {
                        DisposeMember( item as IDisposable );
                    }
                }

                DisposeMember( collection as IDisposable );
            }
        }

        /// <summary>
        /// Disposes the dictionary.
        /// </summary>
        /// <param name="dictionary">The dictionary.</param>
        public static void DisposeDictionary( IDictionary dictionary )
        {
            if ( dictionary != null )
            {
                foreach ( DictionaryEntry dictionaryEntry in dictionary )
                {
                    if ( dictionaryEntry.Key is IDictionary )
                    {
                        DisposeDictionary( dictionaryEntry.Key as IDictionary );
                    }
                    else if ( dictionaryEntry.Key is IEnumerable )
                    {
                        DisposeCollection( dictionaryEntry.Key as IEnumerable );
                    }
                    else
                    {
                        DisposeMember( dictionaryEntry.Key as IDisposable );
                    }

                    if ( dictionaryEntry.Value is IDictionary )
                    {
                        DisposeDictionary( dictionaryEntry.Value as IDictionary );
                    }
                    else if ( dictionaryEntry.Value is IEnumerable )
                    {
                        DisposeCollection( dictionaryEntry.Value as IEnumerable );
                    }
                    else
                    {
                        DisposeMember( dictionaryEntry.Value as IDisposable );
                    }
                }

                DisposeMember( dictionary as IDisposable );
            }
        }
    }
}