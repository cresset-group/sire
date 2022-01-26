// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomCutting.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomcutting.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "cutgroup.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "selector.hpp"

#include "atomcutting.h"

SireMol::AtomCutting __copy__(const SireMol::AtomCutting &other){ return SireMol::AtomCutting(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomCutting_class(){

    { //::SireMol::AtomCutting
        typedef bp::class_< SireMol::AtomCutting, bp::bases< SireMol::CuttingFunction, SireBase::Property > > AtomCutting_exposer_t;
        AtomCutting_exposer_t AtomCutting_exposer = AtomCutting_exposer_t( "AtomCutting", "This is a cutting function that divides up a molecule into\nCutGroups based on atoms - each atom is placed into\na different CutGroup\n\nAuthor: Gaetano Calabro\n", bp::init< >("Constructor") );
        bp::scope AtomCutting_scope( AtomCutting_exposer );
        AtomCutting_exposer.def( bp::init< SireMol::AtomCutting const & >(( bp::arg("other") ), "Copy constructor") );
        AtomCutting_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomCutting::operator()
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::AtomCutting::*__call___function_type)( ::SireMol::MolStructureEditor & ) const;
            __call___function_type __call___function_value( &::SireMol::AtomCutting::operator() );
            
            AtomCutting_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("moleditor") )
                , "" );
        
        }
        { //::SireMol::AtomCutting::operator=
        
            typedef ::SireMol::AtomCutting & ( ::SireMol::AtomCutting::*assign_function_type)( ::SireMol::AtomCutting const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomCutting::operator= );
            
            AtomCutting_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomCutting_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomCutting::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomCutting::typeName );
            
            AtomCutting_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        AtomCutting_exposer.staticmethod( "typeName" );
        AtomCutting_exposer.def( "__copy__", &__copy__);
        AtomCutting_exposer.def( "__deepcopy__", &__copy__);
        AtomCutting_exposer.def( "clone", &__copy__);
        AtomCutting_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomCutting >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomCutting_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomCutting >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomCutting_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomCutting >());
        AtomCutting_exposer.def( "__str__", &__str__< ::SireMol::AtomCutting > );
        AtomCutting_exposer.def( "__repr__", &__str__< ::SireMol::AtomCutting > );
    }

}
