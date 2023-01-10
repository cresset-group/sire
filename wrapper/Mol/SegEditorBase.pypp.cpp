// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "SegEditorBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "chain.h"

#include "chaineditor.h"

#include "groupatomids.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "segeditor.h"

#include "segment.h"

#include "selector.hpp"

#include "segeditor.h"

#include "segproperty.hpp"

SireMol::SegEditorBase& set_Metadata_SireMol_SegStringProperty_function1(
                                  SireMol::SegEditorBase &molview,
                                   const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegStringProperty_function2(
                                  SireMol::SegEditorBase &molview,
                                   const QString &key, const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(key, metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegIntProperty_function1(
                                  SireMol::SegEditorBase &molview,
                                   const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegIntProperty_function2(
                                  SireMol::SegEditorBase &molview,
                                   const QString &key, const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(key, metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegFloatProperty_function1(
                                  SireMol::SegEditorBase &molview,
                                   const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegFloatProperty_function2(
                                  SireMol::SegEditorBase &molview,
                                   const QString &key, const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(key, metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegVariantProperty_function1(
                                  SireMol::SegEditorBase &molview,
                                   const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegVariantProperty_function2(
                                  SireMol::SegEditorBase &molview,
                                   const QString &key, const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(key, metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegPropertyProperty_function1(
                                  SireMol::SegEditorBase &molview,
                                   const QString &metakey, const SireBase::PropertyPtr &p)
                                   { return molview.setMetadata< SireBase::PropertyPtr >(metakey, p); }

SireMol::SegEditorBase& set_Metadata_SireMol_SegPropertyProperty_function2(
                                  SireMol::SegEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireBase::PropertyPtr &p)
                                   { return molview.setMetadata< SireBase::PropertyPtr >(key, metakey, p); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_SegEditorBase_class(){

    { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >
        typedef bp::class_< SireMol::Editor< SireMol::SegEditor, SireMol::Segment >, bp::bases< SireMol::Segment, SireMol::MoleculeView, SireBase::Property >, boost::noncopyable > SegEditorBase_exposer_t;
        SegEditorBase_exposer_t SegEditorBase_exposer = SegEditorBase_exposer_t( "SegEditorBase", "", bp::no_init );
        bp::scope SegEditorBase_scope( SegEditorBase_exposer );
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*atom_function_type)(  ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom );
            
            SegEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*atom_function_type)( int,::SireBase::PropertyMap const & ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom );
            
            SegEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("i"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*atom_function_type)( ::QString const &,::SireBase::PropertyMap const & ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom );
            
            SegEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("name"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*atom_function_type)( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::atom );
            
            SegEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*chain_function_type)(  ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain );
            
            SegEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*chain_function_type)( int,::SireBase::PropertyMap const & ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain );
            
            SegEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , ( bp::arg("i"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*chain_function_type)( ::QString const &,::SireBase::PropertyMap const & ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain );
            
            SegEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , ( bp::arg("name"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*chain_function_type)( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::chain );
            
            SegEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*cutGroup_function_type)(  ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup );
            
            SegEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*cutGroup_function_type)( int,::SireBase::PropertyMap const & ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup );
            
            SegEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , ( bp::arg("i"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*cutGroup_function_type)( ::QString const &,::SireBase::PropertyMap const & ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup );
            
            SegEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , ( bp::arg("name"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*cutGroup_function_type)( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::cutGroup );
            
            SegEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::molecule
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*molecule_function_type)(  ) ;
            molecule_function_type molecule_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::molecule );
            
            SegEditorBase_exposer.def( 
                "molecule"
                , molecule_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator=
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment > & ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*assign_function_type)( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator= );
            
            SegEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator=
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment > & ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*assign_function_type)( ::SireMol::Segment const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator= );
            
            SegEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( int ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::QString const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("name") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireMol::AtomID const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("atomid") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireMol::ResID const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("resid") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireMol::CGID const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgid") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireMol::ChainID const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("chainid") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireMol::SegID const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("segid") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[]
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::MolViewPtr ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*__getitem___function_type)( ::SireID::Index const & ) ;
            __getitem___function_type __getitem___function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::operator[] );
            
            SegEditorBase_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idx") )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeMetadata
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor & ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*removeMetadata_function_type)( ::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeMetadata );
            
            SegEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("metakey") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeMetadata
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor & ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*removeMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeMetadata );
            
            SegEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeProperty
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor & ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*removeProperty_function_type)( ::SireBase::PropertyName const & ) ;
            removeProperty_function_type removeProperty_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::removeProperty );
            
            SegEditorBase_exposer.def( 
                "removeProperty"
                , removeProperty_function_value
                , ( bp::arg("key") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*residue_function_type)(  ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue );
            
            SegEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*residue_function_type)( int,::SireBase::PropertyMap const & ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue );
            
            SegEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("i"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*residue_function_type)( ::QString const &,::SireBase::PropertyMap const & ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue );
            
            SegEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("name"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*residue_function_type)( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::residue );
            
            SegEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*segment_function_type)(  ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment );
            
            SegEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*segment_function_type)( int,::SireBase::PropertyMap const & ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment );
            
            SegEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , ( bp::arg("i"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*segment_function_type)( ::QString const &,::SireBase::PropertyMap const & ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment );
            
            SegEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , ( bp::arg("name"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*segment_function_type)( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::segment );
            
            SegEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*select_function_type)( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select );
            
            SegEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*select_function_type)( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select );
            
            SegEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*select_function_type)( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select );
            
            SegEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*select_function_type)( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select );
            
            SegEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select
        
            typedef SireMol::Editor< SireMol::SegEditor, SireMol::Segment > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::*select_function_type)( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::SegEditor, SireMol::Segment >::select );
            
            SegEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        SegEditorBase_exposer.def( "_set_property_QString",
                                           &SireMol::SegEditorBase::setProperty< QString >, bp::return_self< >() );
        SegEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_SegStringProperty_function1, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_SegStringProperty_function2, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_property_qint64",
                                           &SireMol::SegEditorBase::setProperty< qint64 >, bp::return_self< >() );
        SegEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_SegIntProperty_function1, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_SegIntProperty_function2, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_property_double",
                                           &SireMol::SegEditorBase::setProperty< double >, bp::return_self< >() );
        SegEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_SegFloatProperty_function1, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_SegFloatProperty_function2, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_property_QVariant",
                                           &SireMol::SegEditorBase::setProperty< QVariant >, bp::return_self< >() );
        SegEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_SegVariantProperty_function1, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_SegVariantProperty_function2, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_property_SireBase_PropertyPtr",
                                           &SireMol::SegEditorBase::setProperty< SireBase::PropertyPtr >, bp::return_self< >() );
        SegEditorBase_exposer.def( "_set_metadata_SireBase_PropertyPtr", &set_Metadata_SireMol_SegPropertyProperty_function1, bp::return_self< >());
        SegEditorBase_exposer.def( "_set_metadata_SireBase_PropertyPtr", &set_Metadata_SireMol_SegPropertyProperty_function2, bp::return_self< >());
        SegEditorBase_exposer.def( "__str__", &__str__< ::SireMol::Editor<SireMol::SegEditor, SireMol::Segment> > );
        SegEditorBase_exposer.def( "__repr__", &__str__< ::SireMol::Editor<SireMol::SegEditor, SireMol::Segment> > );
        SegEditorBase_exposer.def( "__len__", &__len_size< ::SireMol::Editor<SireMol::SegEditor, SireMol::Segment> > );
    }

}
