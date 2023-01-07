// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ErrorPacket.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "workpacket.h"

#include <QDebug>

#include <QTextStream>

#include "workpacket.h"

SireCluster::ErrorPacket __copy__(const SireCluster::ErrorPacket &other){ return SireCluster::ErrorPacket(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireCluster::ErrorPacket&){ return "SireCluster::ErrorPacket";}

#include "Helpers/release_gil_policy.hpp"

void register_ErrorPacket_class(){

    { //::SireCluster::ErrorPacket
        typedef bp::class_< SireCluster::ErrorPacket, bp::bases< SireCluster::WorkPacketBase > > ErrorPacket_exposer_t;
        ErrorPacket_exposer_t ErrorPacket_exposer = ErrorPacket_exposer_t( "ErrorPacket", "This is a packet that contains an error. This is returned\nif something went wrong while running a WorkPacket\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope ErrorPacket_scope( ErrorPacket_exposer );
        ErrorPacket_exposer.def( bp::init< SireError::exception const & >(( bp::arg("e") ), "Construct an ErrorPacket for the error e") );
        ErrorPacket_exposer.def( bp::init< SireCluster::ErrorPacket const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCluster::ErrorPacket::approximatePacketSize

            typedef int ( ::SireCluster::ErrorPacket::*approximatePacketSize_function_type)(  ) const;
            approximatePacketSize_function_type approximatePacketSize_function_value( &::SireCluster::ErrorPacket::approximatePacketSize );

            ErrorPacket_exposer.def(
                "approximatePacketSize"
                , approximatePacketSize_function_value
                , bp::release_gil_policy()
                , "Return the approximate maximum size (in bytes) of the WorkPacket. This\ndoesnt have to exact (or indeed accurate) - it is used\nto help the WorkPacket::pack() function reserve enough\nspace when serialising this packet to a binary array.\nThe only penalty of getting this wrong is that youll\neither allocate too much space, or be reallocating while\nthe packet is being written" );

        }
        { //::SireCluster::ErrorPacket::hasFinished

            typedef bool ( ::SireCluster::ErrorPacket::*hasFinished_function_type)(  ) const;
            hasFinished_function_type hasFinished_function_value( &::SireCluster::ErrorPacket::hasFinished );

            ErrorPacket_exposer.def(
                "hasFinished"
                , hasFinished_function_value
                , bp::release_gil_policy()
                , "Return whether or not the work has finished" );

        }
        { //::SireCluster::ErrorPacket::isError

            typedef bool ( ::SireCluster::ErrorPacket::*isError_function_type)(  ) const;
            isError_function_type isError_function_value( &::SireCluster::ErrorPacket::isError );

            ErrorPacket_exposer.def(
                "isError"
                , isError_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an error" );

        }
        { //::SireCluster::ErrorPacket::operator=

            typedef ::SireCluster::ErrorPacket & ( ::SireCluster::ErrorPacket::*assign_function_type)( ::SireCluster::ErrorPacket const & ) ;
            assign_function_type assign_function_value( &::SireCluster::ErrorPacket::operator= );

            ErrorPacket_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireCluster::ErrorPacket::throwError

            typedef void ( ::SireCluster::ErrorPacket::*throwError_function_type)(  ) const;
            throwError_function_type throwError_function_value( &::SireCluster::ErrorPacket::throwError );

            ErrorPacket_exposer.def(
                "throwError"
                , throwError_function_value
                , bp::release_gil_policy()
                , "Throw the error associated with this packet" );

        }
        { //::SireCluster::ErrorPacket::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCluster::ErrorPacket::typeName );

            ErrorPacket_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCluster::ErrorPacket::what

            typedef char const * ( ::SireCluster::ErrorPacket::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCluster::ErrorPacket::what );

            ErrorPacket_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ErrorPacket_exposer.staticmethod( "typeName" );
        ErrorPacket_exposer.def( "__copy__", &__copy__);
        ErrorPacket_exposer.def( "__deepcopy__", &__copy__);
        ErrorPacket_exposer.def( "clone", &__copy__);
        ErrorPacket_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCluster::ErrorPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ErrorPacket_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCluster::ErrorPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ErrorPacket_exposer.def_pickle(sire_pickle_suite< ::SireCluster::ErrorPacket >());
        ErrorPacket_exposer.def( "__str__", &pvt_get_name);
        ErrorPacket_exposer.def( "__repr__", &pvt_get_name);
    }

}
