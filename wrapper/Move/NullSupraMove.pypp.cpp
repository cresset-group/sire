// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "NullSupraMove.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "supramove.h"

#include "suprasystem.h"

#include "supramove.h"

SireMove::NullSupraMove __copy__(const SireMove::NullSupraMove &other){ return SireMove::NullSupraMove(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_NullSupraMove_class(){

    { //::SireMove::NullSupraMove
        typedef bp::class_< SireMove::NullSupraMove, bp::bases< SireMove::SupraMove, SireBase::Property > > NullSupraMove_exposer_t;
        NullSupraMove_exposer_t NullSupraMove_exposer = NullSupraMove_exposer_t( "NullSupraMove", "This is a null supra move, which does nothing\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope NullSupraMove_scope( NullSupraMove_exposer );
        NullSupraMove_exposer.def( bp::init< SireMove::NullSupraMove const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::NullSupraMove::move
        
            typedef void ( ::SireMove::NullSupraMove::*move_function_type)( ::SireMove::SupraSystem &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::NullSupraMove::move );
            
            NullSupraMove_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats")=(bool)(true) )
                , "Perform the null move - this does nothing" );
        
        }
        NullSupraMove_exposer.def( bp::self != bp::self );
        { //::SireMove::NullSupraMove::operator=
        
            typedef ::SireMove::NullSupraMove & ( ::SireMove::NullSupraMove::*assign_function_type)( ::SireMove::NullSupraMove const & ) ;
            assign_function_type assign_function_value( &::SireMove::NullSupraMove::operator= );
            
            NullSupraMove_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        NullSupraMove_exposer.def( bp::self == bp::self );
        { //::SireMove::NullSupraMove::toString
        
            typedef ::QString ( ::SireMove::NullSupraMove::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::NullSupraMove::toString );
            
            NullSupraMove_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this move" );
        
        }
        { //::SireMove::NullSupraMove::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::NullSupraMove::typeName );
            
            NullSupraMove_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        NullSupraMove_exposer.staticmethod( "typeName" );
        NullSupraMove_exposer.def( "__copy__", &__copy__);
        NullSupraMove_exposer.def( "__deepcopy__", &__copy__);
        NullSupraMove_exposer.def( "clone", &__copy__);
        NullSupraMove_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::NullSupraMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullSupraMove_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::NullSupraMove >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullSupraMove_exposer.def_pickle(sire_pickle_suite< ::SireMove::NullSupraMove >());
        NullSupraMove_exposer.def( "__str__", &__str__< ::SireMove::NullSupraMove > );
        NullSupraMove_exposer.def( "__repr__", &__str__< ::SireMove::NullSupraMove > );
    }

}
