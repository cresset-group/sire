// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ResEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "chain.h"

#include "chaineditor.h"

#include "cutgroup.h"

#include "groupatomids.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "segeditor.h"

#include "segment.h"

#include "selector.hpp"

#include "reseditor.h"

SireMol::ResEditor __copy__(const SireMol::ResEditor &other){ return SireMol::ResEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_ResEditor_class(){

    { //::SireMol::ResEditor
        typedef bp::class_< SireMol::ResEditor, bp::bases< SireMol::Editor<SireMol::ResEditor, SireMol::Residue>, SireMol::Residue, SireMol::MoleculeView, SireBase::Property > > ResEditor_exposer_t;
        ResEditor_exposer_t ResEditor_exposer = ResEditor_exposer_t( "ResEditor", "This class is used to edit the non-structural parts of a residue\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope ResEditor_scope( ResEditor_exposer );
        ResEditor_exposer.def( bp::init< SireMol::Residue const & >(( bp::arg("residue") ), "Construct an editor that edits a copy of the residue residue") );
        ResEditor_exposer.def( bp::init< SireMol::ResEditor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::ResEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::ResEditor::*add_function_type)( ::SireMol::AtomName const & ) const;
            add_function_type add_function_value( &::SireMol::ResEditor::add );
            
            ResEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atomname") )
                , bp::release_gil_policy()
                , "Add a new atom called name to this residue - this returns\nan editor that can be used to further edit this atom" );
        
        }
        { //::SireMol::ResEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::ResEditor::*add_function_type)( ::SireMol::AtomNum ) const;
            add_function_type add_function_value( &::SireMol::ResEditor::add );
            
            ResEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atomnum") )
                , bp::release_gil_policy()
                , "Add a new atom with the number number to this residue - this\nreturns an editor that can be used to further edit this atom" );
        
        }
        { //::SireMol::ResEditor::commit
        
            typedef ::SireMol::Residue ( ::SireMol::ResEditor::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::ResEditor::commit );
            
            ResEditor_exposer.def( 
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "Commit the changes made by this editor and return the updated Residue" );
        
        }
        { //::SireMol::ResEditor::operator=
        
            typedef ::SireMol::ResEditor & ( ::SireMol::ResEditor::*assign_function_type)( ::SireMol::Residue const & ) ;
            assign_function_type assign_function_value( &::SireMol::ResEditor::operator= );
            
            ResEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("residue") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::ResEditor::operator=
        
            typedef ::SireMol::ResEditor & ( ::SireMol::ResEditor::*assign_function_type)( ::SireMol::ResEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::ResEditor::operator= );
            
            ResEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::ResEditor::reindex
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*reindex_function_type)( ::SireMol::ResIdx ) const;
            reindex_function_type reindex_function_value( &::SireMol::ResEditor::reindex );
            
            ResEditor_exposer.def( 
                "reindex"
                , reindex_function_value
                , ( bp::arg("index") )
                , bp::release_gil_policy()
                , "Change the index of this residue to newidx. If this\nis larger than the number of residues in the molecule\nthen this residue is moved to the end" );
        
        }
        { //::SireMol::ResEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::ResEditor::*remove_function_type)(  ) const;
            remove_function_type remove_function_value( &::SireMol::ResEditor::remove );
            
            ResEditor_exposer.def( 
                "remove"
                , remove_function_value
                , bp::release_gil_policy()
                , "Completely remove this residue from the molecule - this returns\na MolStructureEditor that can be used to further edit the molecule" );
        
        }
        { //::SireMol::ResEditor::remove
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*remove_function_type)( ::SireMol::AtomID const & ) const;
            remove_function_type remove_function_value( &::SireMol::ResEditor::remove );
            
            ResEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("atomid") )
                , bp::release_gil_policy()
                , "Remove all atoms with ID atomid from this residue\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::remove
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*remove_function_type)( int ) const;
            remove_function_type remove_function_value( &::SireMol::ResEditor::remove );
            
            ResEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Remove the ith atom from this residue\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::rename
        
            typedef ::SireMol::ResEditor & ( ::SireMol::ResEditor::*rename_function_type)( ::SireMol::ResName const & ) ;
            rename_function_type rename_function_value( &::SireMol::ResEditor::rename );
            
            ResEditor_exposer.def( 
                "rename"
                , rename_function_value
                , ( bp::arg("name") )
                , bp::return_self< >()
                , "Rename this residue to newname" );
        
        }
        { //::SireMol::ResEditor::renumber
        
            typedef ::SireMol::ResEditor & ( ::SireMol::ResEditor::*renumber_function_type)( ::SireMol::ResNum ) ;
            renumber_function_type renumber_function_value( &::SireMol::ResEditor::renumber );
            
            ResEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("number") )
                , bp::return_self< >()
                , "Renumber this residue to newnum" );
        
        }
        { //::SireMol::ResEditor::reparent
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*reparent_function_type)( ::SireMol::ChainID const & ) const;
            reparent_function_type reparent_function_value( &::SireMol::ResEditor::reparent );
            
            ResEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("chainid") )
                , bp::release_gil_policy()
                , "Move this residue into the chain with ID chainid\nThrow: SireMol::missing_chain\nThrow: SireMol::duplicate_chain\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::toString
        
            typedef ::QString ( ::SireMol::ResEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::ResEditor::toString );
            
            ResEditor_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this editor" );
        
        }
        { //::SireMol::ResEditor::transfer
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*transfer_function_type)( ::SireMol::AtomID const &,::SireMol::ResID const & ) const;
            transfer_function_type transfer_function_value( &::SireMol::ResEditor::transfer );
            
            ResEditor_exposer.def( 
                "transfer"
                , transfer_function_value
                , ( bp::arg("atomid"), bp::arg("resid") )
                , bp::release_gil_policy()
                , "Transfer all atoms that match the ID atomid into the residue that\nmatches the ID resid\nThrow: SireMol::missing_atom\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::transfer
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*transfer_function_type)( int,::SireMol::ResID const & ) const;
            transfer_function_type transfer_function_value( &::SireMol::ResEditor::transfer );
            
            ResEditor_exposer.def( 
                "transfer"
                , transfer_function_value
                , ( bp::arg("i"), bp::arg("resid") )
                , bp::release_gil_policy()
                , "Transfer the ith atom from this residue into the residue that\nmatches the ID resid\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::transferAll
        
            typedef ::SireMol::ResStructureEditor ( ::SireMol::ResEditor::*transferAll_function_type)( ::SireMol::ResID const & ) const;
            transferAll_function_type transferAll_function_value( &::SireMol::ResEditor::transferAll );
            
            ResEditor_exposer.def( 
                "transferAll"
                , transferAll_function_value
                , ( bp::arg("resid") )
                , bp::release_gil_policy()
                , "Transfer all atoms from this residue into the residue with ID resid\nThrow: SireMol::missing_residue\nThrow: SireMol::duplicate_residue\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::ResEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ResEditor::typeName );
            
            ResEditor_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        ResEditor_exposer.staticmethod( "typeName" );
        ResEditor_exposer.def( "__copy__", &__copy__);
        ResEditor_exposer.def( "__deepcopy__", &__copy__);
        ResEditor_exposer.def( "clone", &__copy__);
        ResEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::ResEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::ResEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ResEditor_exposer.def_pickle(sire_pickle_suite< ::SireMol::ResEditor >());
        ResEditor_exposer.def( "__str__", &__str__< ::SireMol::ResEditor > );
        ResEditor_exposer.def( "__repr__", &__str__< ::SireMol::ResEditor > );
        ResEditor_exposer.def( "__len__", &__len_size< ::SireMol::ResEditor > );
    }

}
