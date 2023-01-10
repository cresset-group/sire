// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "SameSupraSubMoves.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "suprasubmoves.h"

#include "suprasubsystem.h"

#include "suprasubmoves.h"

SireMove::SameSupraSubMoves __copy__(const SireMove::SameSupraSubMoves &other){ return SireMove::SameSupraSubMoves(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_SameSupraSubMoves_class(){

    { //::SireMove::SameSupraSubMoves
        typedef bp::class_< SireMove::SameSupraSubMoves, bp::bases< SireMove::SupraSubMoves, SireBase::Property > > SameSupraSubMoves_exposer_t;
        SameSupraSubMoves_exposer_t SameSupraSubMoves_exposer = SameSupraSubMoves_exposer_t( "SameSupraSubMoves", "This is a simple SupraSubMoves class that just repeats the\nsame SupraSubMove multiple times\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope SameSupraSubMoves_scope( SameSupraSubMoves_exposer );
        SameSupraSubMoves_exposer.def( bp::init< SireMove::SupraSubMove const & >(( bp::arg("move") ), "Construct to perform the move move repeatedly on a SupraSubSystem") );
        SameSupraSubMoves_exposer.def( bp::init< SireMove::SameSupraSubMoves const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::SameSupraSubMoves::clearStatistics
        
            typedef void ( ::SireMove::SameSupraSubMoves::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::SameSupraSubMoves::clearStatistics );
            
            SameSupraSubMoves_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value
                , bp::release_gil_policy()
                , "Clear all of the move statistics" );
        
        }
        { //::SireMove::SameSupraSubMoves::move
        
            typedef void ( ::SireMove::SameSupraSubMoves::*move_function_type)( ::SireMove::SupraSubSystem &,int,int,bool ) ;
            move_function_type move_function_value( &::SireMove::SameSupraSubMoves::move );
            
            SameSupraSubMoves_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nsubmoves"), bp::arg("nsubmoves_per_block"), bp::arg("record_substats") )
                , bp::release_gil_policy()
                , "Perform the moves" );
        
        }
        SameSupraSubMoves_exposer.def( bp::self != bp::self );
        { //::SireMove::SameSupraSubMoves::operator=
        
            typedef ::SireMove::SameSupraSubMoves & ( ::SireMove::SameSupraSubMoves::*assign_function_type)( ::SireMove::SameSupraSubMoves const & ) ;
            assign_function_type assign_function_value( &::SireMove::SameSupraSubMoves::operator= );
            
            SameSupraSubMoves_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        SameSupraSubMoves_exposer.def( bp::self == bp::self );
        { //::SireMove::SameSupraSubMoves::operator[]
        
            typedef ::SireMove::SupraSubMove const & ( ::SireMove::SameSupraSubMoves::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMove::SameSupraSubMoves::operator[] );
            
            SameSupraSubMoves_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMove::SameSupraSubMoves::subMoves
        
            typedef ::QList< SireBase::PropPtr< SireMove::SupraSubMove > > ( ::SireMove::SameSupraSubMoves::*subMoves_function_type)(  ) const;
            subMoves_function_type subMoves_function_value( &::SireMove::SameSupraSubMoves::subMoves );
            
            SameSupraSubMoves_exposer.def( 
                "subMoves"
                , subMoves_function_value
                , bp::release_gil_policy()
                , "Return a list of all of the types of submove in this set" );
        
        }
        { //::SireMove::SameSupraSubMoves::toString
        
            typedef ::QString ( ::SireMove::SameSupraSubMoves::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::SameSupraSubMoves::toString );
            
            SameSupraSubMoves_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this set of moves" );
        
        }
        { //::SireMove::SameSupraSubMoves::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::SameSupraSubMoves::typeName );
            
            SameSupraSubMoves_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        SameSupraSubMoves_exposer.staticmethod( "typeName" );
        SameSupraSubMoves_exposer.def( "__copy__", &__copy__);
        SameSupraSubMoves_exposer.def( "__deepcopy__", &__copy__);
        SameSupraSubMoves_exposer.def( "clone", &__copy__);
        SameSupraSubMoves_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::SameSupraSubMoves >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SameSupraSubMoves_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::SameSupraSubMoves >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SameSupraSubMoves_exposer.def_pickle(sire_pickle_suite< ::SireMove::SameSupraSubMoves >());
        SameSupraSubMoves_exposer.def( "__str__", &__str__< ::SireMove::SameSupraSubMoves > );
        SameSupraSubMoves_exposer.def( "__repr__", &__str__< ::SireMove::SameSupraSubMoves > );
        SameSupraSubMoves_exposer.def( "__len__", &__len_size< ::SireMove::SameSupraSubMoves > );
    }

}
