// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Promise.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireError/printerror.h"

#include "SireMaths/rangenerator.h"

#include "node.h"

#include "promise.h"

#include "workpacket.h"

#include <QMutex>

#include <QThread>

#include <QWaitCondition>

#include "promise.h"

SireCluster::Promise __copy__(const SireCluster::Promise &other){ return SireCluster::Promise(other); }

const char* pvt_get_name(const SireCluster::Promise&){ return "SireCluster::Promise";}

void register_Promise_class(){

    { //::SireCluster::Promise
        typedef bp::class_< SireCluster::Promise > Promise_exposer_t;
        Promise_exposer_t Promise_exposer = Promise_exposer_t( "Promise", "This class provides a handle to the (future) result of\na piece of work that is being conducted on a node\nin the cluster\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a null promise") );
        bp::scope Promise_scope( Promise_exposer );
        Promise_exposer.def( bp::init< SireCluster::Promise const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCluster::Promise::abort
        
            typedef void ( ::SireCluster::Promise::*abort_function_type)(  ) ;
            abort_function_type abort_function_value( &::SireCluster::Promise::abort );
            
            Promise_exposer.def( 
                "abort"
                , abort_function_value
                , "Abort this job" );
        
        }
        { //::SireCluster::Promise::input
        
            typedef ::SireCluster::WorkPacket ( ::SireCluster::Promise::*input_function_type)(  ) ;
            input_function_type input_function_value( &::SireCluster::Promise::input );
            
            Promise_exposer.def( 
                "input"
                , input_function_value
                , "Return the WorkPacket in the state it was in at the\nstart of the job. You can use this to restart jobs that\nfailed in error, or were aborted, or if you just want\nto try to run the job again" );
        
        }
        { //::SireCluster::Promise::interimResult
        
            typedef ::SireCluster::WorkPacket ( ::SireCluster::Promise::*interimResult_function_type)(  ) ;
            interimResult_function_type interimResult_function_value( &::SireCluster::Promise::interimResult );
            
            Promise_exposer.def( 
                "interimResult"
                , interimResult_function_value
                , "Return an interim result of the calculation" );
        
        }
        { //::SireCluster::Promise::isError
        
            typedef bool ( ::SireCluster::Promise::*isError_function_type)(  ) ;
            isError_function_type isError_function_value( &::SireCluster::Promise::isError );
            
            Promise_exposer.def( 
                "isError"
                , isError_function_value
                , "Return whether or not the result is an error.\nThis blocks until the result is available" );
        
        }
        { //::SireCluster::Promise::isNull
        
            typedef bool ( ::SireCluster::Promise::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireCluster::Promise::isNull );
            
            Promise_exposer.def( 
                "isNull"
                , isNull_function_value
                , "Return whether or not this promise is null" );
        
        }
        { //::SireCluster::Promise::isRunning
        
            typedef bool ( ::SireCluster::Promise::*isRunning_function_type)(  ) ;
            isRunning_function_type isRunning_function_value( &::SireCluster::Promise::isRunning );
            
            Promise_exposer.def( 
                "isRunning"
                , isRunning_function_value
                , "Return whether or not the calculation is still in progress" );
        
        }
        Promise_exposer.def( bp::self != bp::self );
        { //::SireCluster::Promise::operator=
        
            typedef ::SireCluster::Promise & ( ::SireCluster::Promise::*assign_function_type)( ::SireCluster::Promise const & ) ;
            assign_function_type assign_function_value( &::SireCluster::Promise::operator= );
            
            Promise_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Promise_exposer.def( bp::self == bp::self );
        { //::SireCluster::Promise::progress
        
            typedef float ( ::SireCluster::Promise::*progress_function_type)(  ) ;
            progress_function_type progress_function_value( &::SireCluster::Promise::progress );
            
            Promise_exposer.def( 
                "progress"
                , progress_function_value
                , "Return the progress of the calculation" );
        
        }
        { //::SireCluster::Promise::result
        
            typedef ::SireCluster::WorkPacket ( ::SireCluster::Promise::*result_function_type)(  ) ;
            result_function_type result_function_value( &::SireCluster::Promise::result );
            
            Promise_exposer.def( 
                "result"
                , result_function_value
                , "Return the result of the work - this blocks until\nthe work has completed" );
        
        }
        { //::SireCluster::Promise::stop
        
            typedef void ( ::SireCluster::Promise::*stop_function_type)(  ) ;
            stop_function_type stop_function_value( &::SireCluster::Promise::stop );
            
            Promise_exposer.def( 
                "stop"
                , stop_function_value
                , "Stop this job" );
        
        }
        { //::SireCluster::Promise::throwError
        
            typedef void ( ::SireCluster::Promise::*throwError_function_type)(  ) ;
            throwError_function_type throwError_function_value( &::SireCluster::Promise::throwError );
            
            Promise_exposer.def( 
                "throwError"
                , throwError_function_value
                , "Throw any errors associated with this promise - does\nnothing if there is no error" );
        
        }
        { //::SireCluster::Promise::wait
        
            typedef void ( ::SireCluster::Promise::*wait_function_type)(  ) ;
            wait_function_type wait_function_value( &::SireCluster::Promise::wait );
            
            Promise_exposer.def( 
                "wait"
                , wait_function_value
                , "Wait for the job to have completed" );
        
        }
        { //::SireCluster::Promise::wait
        
            typedef bool ( ::SireCluster::Promise::*wait_function_type)( int ) ;
            wait_function_type wait_function_value( &::SireCluster::Promise::wait );
            
            Promise_exposer.def( 
                "wait"
                , wait_function_value
                , ( bp::arg("timeout") )
                , "Wait until the job has completed, or until timeout milliseconds\nhas passed. This returns whether or not the job has finished" );
        
        }
        { //::SireCluster::Promise::wasAborted
        
            typedef bool ( ::SireCluster::Promise::*wasAborted_function_type)(  ) ;
            wasAborted_function_type wasAborted_function_value( &::SireCluster::Promise::wasAborted );
            
            Promise_exposer.def( 
                "wasAborted"
                , wasAborted_function_value
                , "Return whether or not the job was aborted.\nIf it was, then you can rerun the job using\nthe initial state of the WorkPacket stored in\nthis Promise. This blocks until a result is available" );
        
        }
        { //::SireCluster::Promise::wasStopped
        
            typedef bool ( ::SireCluster::Promise::*wasStopped_function_type)(  ) ;
            wasStopped_function_type wasStopped_function_value( &::SireCluster::Promise::wasStopped );
            
            Promise_exposer.def( 
                "wasStopped"
                , wasStopped_function_value
                , "Return whether or not the job was stopped.\nThis blocks until a result is available" );
        
        }
        Promise_exposer.def( "__copy__", &__copy__);
        Promise_exposer.def( "__deepcopy__", &__copy__);
        Promise_exposer.def( "clone", &__copy__);
        Promise_exposer.def( "__str__", &pvt_get_name);
        Promise_exposer.def( "__repr__", &pvt_get_name);
    }

}
