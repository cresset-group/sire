// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ResidueCutting.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "cutgroup.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "residuecutting.h"

#include "selector.hpp"

#include "residuecutting.h"

SireMol::ResidueCutting __copy__(const SireMol::ResidueCutting &other){ return SireMol::ResidueCutting(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ResidueCutting_class(){

    { //::SireMol::ResidueCutting
        typedef bp::class_< SireMol::ResidueCutting, bp::bases< SireMol::CuttingFunction, SireBase::Property > > ResidueCutting_exposer_t;
        ResidueCutting_exposer_t ResidueCutting_exposer = ResidueCutting_exposer_t( "ResidueCutting", "This is a cutting function that divides up a molecule into\nCutGroups based on residue - each residue is placed into\na different CutGroup\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope ResidueCutting_scope( ResidueCutting_exposer );
        ResidueCutting_exposer.def( bp::init< SireMol::ResidueCutting const & >(( bp::arg("other") ), "Copy constructor") );
        ResidueCutting_exposer.def( bp::self != bp::self );
        { //::SireMol::ResidueCutting::operator()
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::ResidueCutting::*__call___function_type)( ::SireMol::MolStructureEditor & ) const;
            __call___function_type __call___function_value( &::SireMol::ResidueCutting::operator() );
            
            ResidueCutting_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("moleditor") )
                , "" );
        
        }
        { //::SireMol::ResidueCutting::operator=
        
            typedef ::SireMol::ResidueCutting & ( ::SireMol::ResidueCutting::*assign_function_type)( ::SireMol::ResidueCutting const & ) ;
            assign_function_type assign_function_value( &::SireMol::ResidueCutting::operator= );
            
            ResidueCutting_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        ResidueCutting_exposer.def( bp::self == bp::self );
        { //::SireMol::ResidueCutting::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ResidueCutting::typeName );
            
            ResidueCutting_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        ResidueCutting_exposer.staticmethod( "typeName" );
        ResidueCutting_exposer.def( "__copy__", &__copy__);
        ResidueCutting_exposer.def( "__deepcopy__", &__copy__);
        ResidueCutting_exposer.def( "clone", &__copy__);
        ResidueCutting_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ResidueCutting >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResidueCutting_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ResidueCutting >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResidueCutting_exposer.def( "__str__", &__str__< ::SireMol::ResidueCutting > );
        ResidueCutting_exposer.def( "__repr__", &__str__< ::SireMol::ResidueCutting > );
    }

}
