// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "NullBeading.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atombeads.h"

#include "atomidx.h"

#include "atomselection.h"

#include "beadidx.h"

#include "beading.h"

#include "moleculedata.h"

#include "moleculeinfodata.h"

#include <boost/noncopyable.hpp>

#include "beading.h"

SireMol::NullBeading __copy__(const SireMol::NullBeading &other){ return SireMol::NullBeading(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_NullBeading_class(){

    { //::SireMol::NullBeading
        typedef bp::class_< SireMol::NullBeading, bp::bases< SireMol::Beading, SireMol::MolViewProperty, SireBase::Property > > NullBeading_exposer_t;
        NullBeading_exposer_t NullBeading_exposer = NullBeading_exposer_t( "NullBeading", "Null beading function", bp::init< >("Constructor") );
        bp::scope NullBeading_scope( NullBeading_exposer );
        NullBeading_exposer.def( bp::init< SireMol::NullBeading const & >(( bp::arg("other") ), "Copy constructor") );
        NullBeading_exposer.def( bp::self != bp::self );
        { //::SireMol::NullBeading::operator=
        
            typedef ::SireMol::NullBeading & ( ::SireMol::NullBeading::*assign_function_type)( ::SireMol::NullBeading const & ) ;
            assign_function_type assign_function_value( &::SireMol::NullBeading::operator= );
            
            NullBeading_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        NullBeading_exposer.def( bp::self == bp::self );
        { //::SireMol::NullBeading::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::NullBeading::typeName );
            
            NullBeading_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        NullBeading_exposer.staticmethod( "typeName" );
        NullBeading_exposer.def( "__copy__", &__copy__);
        NullBeading_exposer.def( "__deepcopy__", &__copy__);
        NullBeading_exposer.def( "clone", &__copy__);
        NullBeading_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::NullBeading >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullBeading_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::NullBeading >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullBeading_exposer.def_pickle(sire_pickle_suite< ::SireMol::NullBeading >());
        NullBeading_exposer.def( "__str__", &__str__< ::SireMol::NullBeading > );
        NullBeading_exposer.def( "__repr__", &__str__< ::SireMol::NullBeading > );
    }

}
