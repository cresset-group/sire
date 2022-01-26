// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "WorkTest.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "workpacket.h"

#include <QDebug>

#include <QTextStream>

#include "workpacket.h"

SireCluster::WorkTest __copy__(const SireCluster::WorkTest &other){ return SireCluster::WorkTest(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireCluster::WorkTest&){ return "SireCluster::WorkTest";}

void register_WorkTest_class(){

    { //::SireCluster::WorkTest
        typedef bp::class_< SireCluster::WorkTest, bp::bases< SireCluster::WorkPacketBase > > WorkTest_exposer_t;
        WorkTest_exposer_t WorkTest_exposer = WorkTest_exposer_t( "WorkTest", "This is a small test packet that can be used to test\nthat everything is working", bp::init< >("Constructor") );
        bp::scope WorkTest_scope( WorkTest_exposer );
        WorkTest_exposer.def( bp::init< int, int, bp::optional< int > >(( bp::arg("start"), bp::arg("end"), bp::arg("step")=(int)(1) ), "Construct a work test that counts from start to end in steps of step") );
        WorkTest_exposer.def( bp::init< SireCluster::WorkTest const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCluster::WorkTest::approximatePacketSize
        
            typedef int ( ::SireCluster::WorkTest::*approximatePacketSize_function_type)(  ) const;
            approximatePacketSize_function_type approximatePacketSize_function_value( &::SireCluster::WorkTest::approximatePacketSize );
            
            WorkTest_exposer.def( 
                "approximatePacketSize"
                , approximatePacketSize_function_value
                , "Return the approximate maximum size (in bytes) of the WorkPacket. This\ndoesnt have to exact (or indeed accurate) - it is used\nto help the WorkPacket::pack() function reserve enough\nspace when serialising this packet to a binary array.\nThe only penalty of getting this wrong is that youll\neither allocate too much space, or be reallocating while\nthe packet is being written" );
        
        }
        { //::SireCluster::WorkTest::hasFinished
        
            typedef bool ( ::SireCluster::WorkTest::*hasFinished_function_type)(  ) const;
            hasFinished_function_type hasFinished_function_value( &::SireCluster::WorkTest::hasFinished );
            
            WorkTest_exposer.def( 
                "hasFinished"
                , hasFinished_function_value
                , "Return whether or not the work has finished" );
        
        }
        { //::SireCluster::WorkTest::operator=
        
            typedef ::SireCluster::WorkTest & ( ::SireCluster::WorkTest::*assign_function_type)( ::SireCluster::WorkTest const & ) ;
            assign_function_type assign_function_value( &::SireCluster::WorkTest::operator= );
            
            WorkTest_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireCluster::WorkTest::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCluster::WorkTest::typeName );
            
            WorkTest_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCluster::WorkTest::what
        
            typedef char const * ( ::SireCluster::WorkTest::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCluster::WorkTest::what );
            
            WorkTest_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        WorkTest_exposer.staticmethod( "typeName" );
        WorkTest_exposer.def( "__copy__", &__copy__);
        WorkTest_exposer.def( "__deepcopy__", &__copy__);
        WorkTest_exposer.def( "clone", &__copy__);
        WorkTest_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCluster::WorkTest >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WorkTest_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCluster::WorkTest >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        WorkTest_exposer.def_pickle(sire_pickle_suite< ::SireCluster::WorkTest >());
        WorkTest_exposer.def( "__str__", &pvt_get_name);
        WorkTest_exposer.def( "__repr__", &pvt_get_name);
    }

}
