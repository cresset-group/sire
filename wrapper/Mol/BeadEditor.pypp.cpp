// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "BeadEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "beadeditor.h"

#include "beadeditor.h"

SireMol::BeadEditor __copy__(const SireMol::BeadEditor &other){ return SireMol::BeadEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_BeadEditor_class(){

    { //::SireMol::BeadEditor
        typedef bp::class_< SireMol::BeadEditor, bp::bases< SireMol::Editor<SireMol::BeadEditor, SireMol::Bead>, SireMol::Bead, SireMol::MoleculeView, SireBase::Property > > BeadEditor_exposer_t;
        BeadEditor_exposer_t BeadEditor_exposer = BeadEditor_exposer_t( "BeadEditor", "This is an editor for a single bead in a molecule\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope BeadEditor_scope( BeadEditor_exposer );
        BeadEditor_exposer.def( bp::init< SireMol::Bead const & >(( bp::arg("bead") ), "Constructor an editor for the passed bead") );
        BeadEditor_exposer.def( bp::init< SireMol::BeadEditor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::BeadEditor::commit
        
            typedef ::SireMol::Bead ( ::SireMol::BeadEditor::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::BeadEditor::commit );
            
            BeadEditor_exposer.def( 
                "commit"
                , commit_function_value
                , "Commit the changes" );
        
        }
        { //::SireMol::BeadEditor::operator=
        
            typedef ::SireMol::BeadEditor & ( ::SireMol::BeadEditor::*assign_function_type)( ::SireMol::Bead const & ) ;
            assign_function_type assign_function_value( &::SireMol::BeadEditor::operator= );
            
            BeadEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("bead") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::BeadEditor::operator=
        
            typedef ::SireMol::BeadEditor & ( ::SireMol::BeadEditor::*assign_function_type)( ::SireMol::BeadEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::BeadEditor::operator= );
            
            BeadEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::BeadEditor::toString
        
            typedef ::QString ( ::SireMol::BeadEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::BeadEditor::toString );
            
            BeadEditor_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this editor" );
        
        }
        { //::SireMol::BeadEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::BeadEditor::typeName );
            
            BeadEditor_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        BeadEditor_exposer.staticmethod( "typeName" );
        BeadEditor_exposer.def( "__copy__", &__copy__);
        BeadEditor_exposer.def( "__deepcopy__", &__copy__);
        BeadEditor_exposer.def( "clone", &__copy__);
        BeadEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::BeadEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::BeadEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadEditor_exposer.def( "__str__", &__str__< ::SireMol::BeadEditor > );
        BeadEditor_exposer.def( "__repr__", &__str__< ::SireMol::BeadEditor > );
        BeadEditor_exposer.def( "__len__", &__len_size< ::SireMol::BeadEditor > );
    }

}
