// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "SystemMonitors.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/errors.h"

#include "monitoridx.h"

#include "monitorname.h"

#include "system.h"

#include "systemmonitors.h"

#include "tostring.h"

#include "systemmonitors.h"

SireSystem::SystemMonitors __copy__(const SireSystem::SystemMonitors &other){ return SireSystem::SystemMonitors(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireSystem::SystemMonitors&){ return "SireSystem::SystemMonitors";}

#include "Helpers/len.hpp"

void register_SystemMonitors_class(){

    { //::SireSystem::SystemMonitors
        typedef bp::class_< SireSystem::SystemMonitors > SystemMonitors_exposer_t;
        SystemMonitors_exposer_t SystemMonitors_exposer = SystemMonitors_exposer_t( "SystemMonitors", "This class holds a set of SystemMonitor objects, and controls\nwhen those monitors are evaluated on a system\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope SystemMonitors_scope( SystemMonitors_exposer );
        SystemMonitors_exposer.def( bp::init< SireSystem::SystemMonitors const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::SystemMonitors::add
        
            typedef void ( ::SireSystem::SystemMonitors::*add_function_type)( ::QString const &,::SireSystem::SystemMonitor const &,int ) ;
            add_function_type add_function_value( &::SireSystem::SystemMonitors::add );
            
            SystemMonitors_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("name"), bp::arg("monitor"), bp::arg("frequency")=(int)(1) )
                , "Add a system monitor monitor, identified by the name name, which\nwill be updated every frequency steps.\nThrow: SireSystem::duplicate_monitor\n" );
        
        }
        { //::SireSystem::SystemMonitors::add
        
            typedef void ( ::SireSystem::SystemMonitors::*add_function_type)( ::SireSystem::SystemMonitors const & ) ;
            add_function_type add_function_value( &::SireSystem::SystemMonitors::add );
            
            SystemMonitors_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") )
                , "Add the monitors from other to this set\nThrow: SireSystem::duplicate_monitor\n" );
        
        }
        { //::SireSystem::SystemMonitors::add
        
            typedef void ( ::SireSystem::SystemMonitors::*add_function_type)( ::SireSystem::SystemMonitors const &,int ) ;
            add_function_type add_function_value( &::SireSystem::SystemMonitors::add );
            
            SystemMonitors_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other"), bp::arg("frequency") )
                , "Add all of the monitors in other to this set, adding them\nwith the frequency frequency\nThrow: SireSystem::duplicate_monitor\n" );
        
        }
        { //::SireSystem::SystemMonitors::at
        
            typedef ::SireSystem::SystemMonitor const & ( ::SireSystem::SystemMonitors::*at_function_type)( ::SireSystem::MonitorID const & ) const;
            at_function_type at_function_value( &::SireSystem::SystemMonitors::at );
            
            SystemMonitors_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("monid") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the monitor at ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireSystem::duplicate_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::clearStatistics
        
            typedef void ( ::SireSystem::SystemMonitors::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireSystem::SystemMonitors::clearStatistics );
            
            SystemMonitors_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , "Completely clear any statistics held in these monitors" );
        
        }
        { //::SireSystem::SystemMonitors::clearStatistics
        
            typedef void ( ::SireSystem::SystemMonitors::*clearStatistics_function_type)( ::SireSystem::MonitorID const & ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireSystem::SystemMonitors::clearStatistics );
            
            SystemMonitors_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , ( bp::arg("monid") )
                , "Completely clear the statistics held by the monitors that\nmatch the ID monid - this does nothing if there are no\nmonitors that match this ID" );
        
        }
        { //::SireSystem::SystemMonitors::count
        
            typedef int ( ::SireSystem::SystemMonitors::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireSystem::SystemMonitors::count );
            
            SystemMonitors_exposer.def( 
                "count"
                , count_function_value
                , "Return the number of monitors in this set" );
        
        }
        { //::SireSystem::SystemMonitors::getFrequency
        
            typedef int ( ::SireSystem::SystemMonitors::*getFrequency_function_type)( ::SireSystem::MonitorID const & ) const;
            getFrequency_function_type getFrequency_function_value( &::SireSystem::SystemMonitors::getFrequency );
            
            SystemMonitors_exposer.def( 
                "getFrequency"
                , getFrequency_function_value
                , ( bp::arg("monid") )
                , "Return the frequency of the monitor with ID monid\nThrow: SireSystem::duplicate_monitor\nThrow: SireSystem::missing_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::isEmpty
        
            typedef bool ( ::SireSystem::SystemMonitors::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireSystem::SystemMonitors::isEmpty );
            
            SystemMonitors_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "Return whether or not this is empty (contains no monitors)" );
        
        }
        { //::SireSystem::SystemMonitors::list
        
            typedef ::QList< SireBase::PropPtr< SireSystem::SystemMonitor > > ( ::SireSystem::SystemMonitors::*list_function_type)(  ) const;
            list_function_type list_function_value( &::SireSystem::SystemMonitors::list );
            
            SystemMonitors_exposer.def( 
                "list"
                , list_function_value
                , "Return the list of all monitors in this set, in the order they\nappear in this set" );
        
        }
        { //::SireSystem::SystemMonitors::map
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::SystemMonitors::*map_function_type)( ::SireSystem::MonitorName const & ) const;
            map_function_type map_function_value( &::SireSystem::SystemMonitors::map );
            
            SystemMonitors_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("monname") )
                , "Simple shortcut function\nThrow: SireSystem::missing_monitor\n" );
        
        }
        { //::SireSystem::SystemMonitors::map
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::SystemMonitors::*map_function_type)( ::SireSystem::MonitorIdx const & ) const;
            map_function_type map_function_value( &::SireSystem::SystemMonitors::map );
            
            SystemMonitors_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("monidx") )
                , "Return the name of the monitor at index monidx\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::map
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::SystemMonitors::*map_function_type)( ::SireSystem::MonitorID const & ) const;
            map_function_type map_function_value( &::SireSystem::SystemMonitors::map );
            
            SystemMonitors_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("monid") )
                , "Return the names of the monitors that match the ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::monitor
        
            typedef ::SireSystem::SystemMonitor const & ( ::SireSystem::SystemMonitors::*monitor_function_type)( ::SireSystem::MonitorID const & ) const;
            monitor_function_type monitor_function_value( &::SireSystem::SystemMonitors::monitor );
            
            SystemMonitors_exposer.def( 
                "monitor"
                , monitor_function_value
                , ( bp::arg("monid") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the monitor at ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireSystem::duplicate_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::monitor
        
            typedef void ( ::SireSystem::SystemMonitors::*monitor_function_type)( ::SireSystem::System & ) ;
            monitor_function_type monitor_function_value( &::SireSystem::SystemMonitors::monitor );
            
            SystemMonitors_exposer.def( 
                "monitor"
                , monitor_function_value
                , ( bp::arg("system") )
                , "Update the monitors by monitoring the system system" );
        
        }
        { //::SireSystem::SystemMonitors::monitorName
        
            typedef ::SireSystem::MonitorName ( ::SireSystem::SystemMonitors::*monitorName_function_type)( ::SireSystem::MonitorID const & ) const;
            monitorName_function_type monitorName_function_value( &::SireSystem::SystemMonitors::monitorName );
            
            SystemMonitors_exposer.def( 
                "monitorName"
                , monitorName_function_value
                , ( bp::arg("monid") )
                , "Return the name of the monitor at ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireSystem::duplicate_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::monitorNames
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::SystemMonitors::*monitorNames_function_type)(  ) const;
            monitorNames_function_type monitorNames_function_value( &::SireSystem::SystemMonitors::monitorNames );
            
            SystemMonitors_exposer.def( 
                "monitorNames"
                , monitorNames_function_value
                , "Return the list of all monitor names" );
        
        }
        { //::SireSystem::SystemMonitors::monitors
        
            typedef ::QList< SireBase::PropPtr< SireSystem::SystemMonitor > > ( ::SireSystem::SystemMonitors::*monitors_function_type)( ::SireSystem::MonitorID const & ) const;
            monitors_function_type monitors_function_value( &::SireSystem::SystemMonitors::monitors );
            
            SystemMonitors_exposer.def( 
                "monitors"
                , monitors_function_value
                , ( bp::arg("monid") )
                , "Return all of the monitors that match the ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::monitors
        
            typedef ::QList< SireBase::PropPtr< SireSystem::SystemMonitor > > ( ::SireSystem::SystemMonitors::*monitors_function_type)(  ) const;
            monitors_function_type monitors_function_value( &::SireSystem::SystemMonitors::monitors );
            
            SystemMonitors_exposer.def( 
                "monitors"
                , monitors_function_value
                , "Return the list of all monitors in this set, in the order they\nappear in this set" );
        
        }
        { //::SireSystem::SystemMonitors::nMonitors
        
            typedef int ( ::SireSystem::SystemMonitors::*nMonitors_function_type)(  ) const;
            nMonitors_function_type nMonitors_function_value( &::SireSystem::SystemMonitors::nMonitors );
            
            SystemMonitors_exposer.def( 
                "nMonitors"
                , nMonitors_function_value
                , "Return the number of monitors in this set" );
        
        }
        { //::SireSystem::SystemMonitors::names
        
            typedef ::QList< SireSystem::MonitorName > ( ::SireSystem::SystemMonitors::*names_function_type)(  ) const;
            names_function_type names_function_value( &::SireSystem::SystemMonitors::names );
            
            SystemMonitors_exposer.def( 
                "names"
                , names_function_value
                , "Return the list of all monitor names" );
        
        }
        SystemMonitors_exposer.def( bp::self != bp::self );
        { //::SireSystem::SystemMonitors::operator=
        
            typedef ::SireSystem::SystemMonitors & ( ::SireSystem::SystemMonitors::*assign_function_type)( ::SireSystem::SystemMonitors const & ) ;
            assign_function_type assign_function_value( &::SireSystem::SystemMonitors::operator= );
            
            SystemMonitors_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SystemMonitors_exposer.def( bp::self == bp::self );
        { //::SireSystem::SystemMonitors::operator[]
        
            typedef ::SireSystem::SystemMonitor const & ( ::SireSystem::SystemMonitors::*__getitem___function_type)( ::SireSystem::MonitorID const & ) const;
            __getitem___function_type __getitem___function_value( &::SireSystem::SystemMonitors::operator[] );
            
            SystemMonitors_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("monid") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireSystem::SystemMonitors::remove
        
            typedef void ( ::SireSystem::SystemMonitors::*remove_function_type)( ::SireSystem::MonitorID const & ) ;
            remove_function_type remove_function_value( &::SireSystem::SystemMonitors::remove );
            
            SystemMonitors_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("monid") )
                , "Remove all of the monitors that match the ID monid\nThrow: SireSystem::missing_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::removeAll
        
            typedef void ( ::SireSystem::SystemMonitors::*removeAll_function_type)(  ) ;
            removeAll_function_type removeAll_function_value( &::SireSystem::SystemMonitors::removeAll );
            
            SystemMonitors_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , "Remove all of the monitors from this set" );
        
        }
        { //::SireSystem::SystemMonitors::setAllFrequency
        
            typedef void ( ::SireSystem::SystemMonitors::*setAllFrequency_function_type)( int ) ;
            setAllFrequency_function_type setAllFrequency_function_value( &::SireSystem::SystemMonitors::setAllFrequency );
            
            SystemMonitors_exposer.def( 
                "setAllFrequency"
                , setAllFrequency_function_value
                , ( bp::arg("frequency") )
                , "Set the frequency of all of the monitors to frequency" );
        
        }
        { //::SireSystem::SystemMonitors::setFrequency
        
            typedef void ( ::SireSystem::SystemMonitors::*setFrequency_function_type)( ::SireSystem::MonitorID const &,int ) ;
            setFrequency_function_type setFrequency_function_value( &::SireSystem::SystemMonitors::setFrequency );
            
            SystemMonitors_exposer.def( 
                "setFrequency"
                , setFrequency_function_value
                , ( bp::arg("monid"), bp::arg("frequency") )
                , "Set the frequency of all monitors that match the ID monid so that\nthey are updated every frequency steps\nThrow: SireSystem::missing_monitor\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::SystemMonitors::size
        
            typedef int ( ::SireSystem::SystemMonitors::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireSystem::SystemMonitors::size );
            
            SystemMonitors_exposer.def( 
                "size"
                , size_function_value
                , "Return the number of monitors in this set" );
        
        }
        { //::SireSystem::SystemMonitors::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::SystemMonitors::typeName );
            
            SystemMonitors_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireSystem::SystemMonitors::what
        
            typedef char const * ( ::SireSystem::SystemMonitors::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireSystem::SystemMonitors::what );
            
            SystemMonitors_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        SystemMonitors_exposer.staticmethod( "typeName" );
        SystemMonitors_exposer.def( "__copy__", &__copy__);
        SystemMonitors_exposer.def( "__deepcopy__", &__copy__);
        SystemMonitors_exposer.def( "clone", &__copy__);
        SystemMonitors_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::SystemMonitors >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SystemMonitors_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::SystemMonitors >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SystemMonitors_exposer.def_pickle(sire_pickle_suite< ::SireSystem::SystemMonitors >());
        SystemMonitors_exposer.def( "__str__", &pvt_get_name);
        SystemMonitors_exposer.def( "__repr__", &pvt_get_name);
        SystemMonitors_exposer.def( "__len__", &__len_size< ::SireSystem::SystemMonitors > );
    }

}
