// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Selector_CutGroup_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "cgatomidx.h"

#include "cgeditor.h"

#include "cutgroup.h"

#include "evaluator.h"

#include "groupatomids.h"

#include "molecule.h"

#include "mover.hpp"

#include "mover_metaid.h"

#include "selector.hpp"

#include <QDebug>

#include "cutgroup.h"

SireMol::Selector<SireMol::CutGroup> __copy__(const SireMol::Selector<SireMol::CutGroup> &other){ return SireMol::Selector<SireMol::CutGroup>(other); }

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_Selector_CutGroup__class(){

    { //::SireMol::Selector< SireMol::CutGroup >
        typedef bp::class_< SireMol::Selector< SireMol::CutGroup >, bp::bases< SireMol::MoleculeView, SireBase::Property > > Selector_CutGroup__exposer_t;
        Selector_CutGroup__exposer_t Selector_CutGroup__exposer = Selector_CutGroup__exposer_t( "Selector_CutGroup_", bp::init< >() );
        bp::scope Selector_CutGroup__scope( Selector_CutGroup__exposer );
        Selector_CutGroup__exposer.def( bp::init< SireMol::CutGroup const & >(( bp::arg("view") )) );
        Selector_CutGroup__exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("moldata") )) );
        Selector_CutGroup__exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomSelection const & >(( bp::arg("moldata"), bp::arg("selected_atoms") )) );
        Selector_CutGroup__exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::CutGroup::ID const & >(( bp::arg("moldata"), bp::arg("viewid") )) );
        Selector_CutGroup__exposer.def( bp::init< SireMol::MoleculeData const &, QList< SireMol::CGIdx > const & >(( bp::arg("moldata"), bp::arg("idxs") )) );
        Selector_CutGroup__exposer.def( bp::init< SireMol::Selector< SireMol::CutGroup > const & >(( bp::arg("other") )) );
        { //::SireMol::Selector< SireMol::CutGroup >::add
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*add_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) const;
            add_function_type add_function_value( &::SireMol::Selector< SireMol::CutGroup >::add );
            
            Selector_CutGroup__exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::add
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*add_function_type)( ::SireMol::CutGroup const & ) const;
            add_function_type add_function_value( &::SireMol::Selector< SireMol::CutGroup >::add );
            
            Selector_CutGroup__exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::add
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*add_function_type)( ::SireMol::CutGroup::ID const & ) const;
            add_function_type add_function_value( &::SireMol::Selector< SireMol::CutGroup >::add );
            
            Selector_CutGroup__exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("id") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::at
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::CutGroup ( ::SireMol::Selector< SireMol::CutGroup >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::Selector< SireMol::CutGroup >::at );
            
            Selector_CutGroup__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::at
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*at_function_type)( int,int ) const;
            at_function_type at_function_value( &::SireMol::Selector< SireMol::CutGroup >::at );
            
            Selector_CutGroup__exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::contains
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*contains_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) const;
            contains_function_type contains_function_value( &::SireMol::Selector< SireMol::CutGroup >::contains );
            
            Selector_CutGroup__exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::contains
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*contains_function_type)( ::SireMol::CutGroup const & ) const;
            contains_function_type contains_function_value( &::SireMol::Selector< SireMol::CutGroup >::contains );
            
            Selector_CutGroup__exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::contains
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*contains_function_type)( ::SireMol::CutGroup::ID const & ) const;
            contains_function_type contains_function_value( &::SireMol::Selector< SireMol::CutGroup >::contains );
            
            Selector_CutGroup__exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("id") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::count
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef int ( ::SireMol::Selector< SireMol::CutGroup >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::Selector< SireMol::CutGroup >::count );
            
            Selector_CutGroup__exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::evaluate
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Evaluator ( ::SireMol::Selector< SireMol::CutGroup >::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::Selector< SireMol::CutGroup >::evaluate );
            
            Selector_CutGroup__exposer.def( 
                "evaluate"
                , evaluate_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::evaluate
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Evaluator ( ::SireMol::Selector< SireMol::CutGroup >::*evaluate_function_type)( int ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::Selector< SireMol::CutGroup >::evaluate );
            
            Selector_CutGroup__exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::evaluate
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Evaluator ( ::SireMol::Selector< SireMol::CutGroup >::*evaluate_function_type)( int,int ) const;
            evaluate_function_type evaluate_function_value( &::SireMol::Selector< SireMol::CutGroup >::evaluate );
            
            Selector_CutGroup__exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::hasMetadata
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Selector< SireMol::CutGroup >::hasMetadata );
            
            Selector_CutGroup__exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("metakey") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::hasMetadata
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMol::Selector< SireMol::CutGroup >::hasMetadata );
            
            Selector_CutGroup__exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::hasProperty
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMol::Selector< SireMol::CutGroup >::hasProperty );
            
            Selector_CutGroup__exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::index
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::CutGroup::Index ( ::SireMol::Selector< SireMol::CutGroup >::*index_function_type)( int ) const;
            index_function_type index_function_value( &::SireMol::Selector< SireMol::CutGroup >::index );
            
            Selector_CutGroup__exposer.def( 
                "index"
                , index_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*intersection_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) const;
            intersection_function_type intersection_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersection );
            
            Selector_CutGroup__exposer.def( 
                "intersection"
                , intersection_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*intersection_function_type)( ::SireMol::CutGroup const & ) const;
            intersection_function_type intersection_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersection );
            
            Selector_CutGroup__exposer.def( 
                "intersection"
                , intersection_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*intersection_function_type)( ::SireMol::CutGroup::ID const & ) const;
            intersection_function_type intersection_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersection );
            
            Selector_CutGroup__exposer.def( 
                "intersection"
                , intersection_function_value
                , ( bp::arg("id") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersects
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*intersects_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersects );
            
            Selector_CutGroup__exposer.def( 
                "intersects"
                , intersects_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersects
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*intersects_function_type)( ::SireMol::CutGroup const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersects );
            
            Selector_CutGroup__exposer.def( 
                "intersects"
                , intersects_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::intersects
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*intersects_function_type)( ::SireMol::CutGroup::ID const & ) const;
            intersects_function_type intersects_function_value( &::SireMol::Selector< SireMol::CutGroup >::intersects );
            
            Selector_CutGroup__exposer.def( 
                "intersects"
                , intersects_function_value
                , ( bp::arg("id") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::invert
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMol::Selector< SireMol::CutGroup >::invert );
            
            Selector_CutGroup__exposer.def( 
                "invert"
                , invert_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::isEmpty
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::Selector< SireMol::CutGroup >::isEmpty );
            
            Selector_CutGroup__exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::metadataKeys
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::QStringList ( ::SireMol::Selector< SireMol::CutGroup >::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Selector< SireMol::CutGroup >::metadataKeys );
            
            Selector_CutGroup__exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::metadataKeys
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::QStringList ( ::SireMol::Selector< SireMol::CutGroup >::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMol::Selector< SireMol::CutGroup >::metadataKeys );
            
            Selector_CutGroup__exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::move
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Selector< SireMol::CutGroup > > ( ::SireMol::Selector< SireMol::CutGroup >::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMol::Selector< SireMol::CutGroup >::move );
            
            Selector_CutGroup__exposer.def( 
                "move"
                , move_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::move
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Selector< SireMol::CutGroup > > ( ::SireMol::Selector< SireMol::CutGroup >::*move_function_type)( int ) const;
            move_function_type move_function_value( &::SireMol::Selector< SireMol::CutGroup >::move );
            
            Selector_CutGroup__exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::move
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Selector< SireMol::CutGroup > > ( ::SireMol::Selector< SireMol::CutGroup >::*move_function_type)( int,int ) const;
            move_function_type move_function_value( &::SireMol::Selector< SireMol::CutGroup >::move );
            
            Selector_CutGroup__exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        Selector_CutGroup__exposer.def( bp::self != bp::self );
        { //::SireMol::Selector< SireMol::CutGroup >::operator()
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::CutGroup ( ::SireMol::Selector< SireMol::CutGroup >::*__call___function_type)( int ) const;
            __call___function_type __call___function_value( &::SireMol::Selector< SireMol::CutGroup >::operator() );
            
            Selector_CutGroup__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::operator()
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireMol::Selector< SireMol::CutGroup >::operator() );
            
            Selector_CutGroup__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        Selector_CutGroup__exposer.def( bp::self + bp::self );
        Selector_CutGroup__exposer.def( bp::self + bp::other< SireMol::CGID >() );
        Selector_CutGroup__exposer.def( bp::self + bp::other< SireMol::CutGroup >() );
        Selector_CutGroup__exposer.def( bp::self - bp::self );
        Selector_CutGroup__exposer.def( bp::self - bp::other< SireMol::CGID >() );
        Selector_CutGroup__exposer.def( bp::self - bp::other< SireMol::CutGroup >() );
        { //::SireMol::Selector< SireMol::CutGroup >::operator=
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > & ( ::SireMol::Selector< SireMol::CutGroup >::*assign_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Selector< SireMol::CutGroup >::operator= );
            
            Selector_CutGroup__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::operator=
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > & ( ::SireMol::Selector< SireMol::CutGroup >::*assign_function_type)( ::SireMol::CutGroup const & ) ;
            assign_function_type assign_function_value( &::SireMol::Selector< SireMol::CutGroup >::operator= );
            
            Selector_CutGroup__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("view") )
                , bp::return_self< >() );
        
        }
        Selector_CutGroup__exposer.def( bp::self == bp::self );
        { //::SireMol::Selector< SireMol::CutGroup >::operator[]
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::CutGroup ( ::SireMol::Selector< SireMol::CutGroup >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::Selector< SireMol::CutGroup >::operator[] );
            
            Selector_CutGroup__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::propertyKeys
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::QStringList ( ::SireMol::Selector< SireMol::CutGroup >::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMol::Selector< SireMol::CutGroup >::propertyKeys );
            
            Selector_CutGroup__exposer.def( 
                "propertyKeys"
                , propertyKeys_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selectedAll
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef bool ( ::SireMol::Selector< SireMol::CutGroup >::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMol::Selector< SireMol::CutGroup >::selectedAll );
            
            Selector_CutGroup__exposer.def( 
                "selectedAll"
                , selectedAll_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::AtomSelection ( ::SireMol::Selector< SireMol::CutGroup >::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMol::Selector< SireMol::CutGroup >::selection );
            
            Selector_CutGroup__exposer.def( 
                "selection"
                , selection_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::AtomSelection ( ::SireMol::Selector< SireMol::CutGroup >::*selection_function_type)( int ) const;
            selection_function_type selection_function_value( &::SireMol::Selector< SireMol::CutGroup >::selection );
            
            Selector_CutGroup__exposer.def( 
                "selection"
                , selection_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selection
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::AtomSelection ( ::SireMol::Selector< SireMol::CutGroup >::*selection_function_type)( int,int ) const;
            selection_function_type selection_function_value( &::SireMol::Selector< SireMol::CutGroup >::selection );
            
            Selector_CutGroup__exposer.def( 
                "selection"
                , selection_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selector
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*selector_function_type)(  ) const;
            selector_function_type selector_function_value( &::SireMol::Selector< SireMol::CutGroup >::selector );
            
            Selector_CutGroup__exposer.def( 
                "selector"
                , selector_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selector
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*selector_function_type)( int ) const;
            selector_function_type selector_function_value( &::SireMol::Selector< SireMol::CutGroup >::selector );
            
            Selector_CutGroup__exposer.def( 
                "selector"
                , selector_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::selector
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*selector_function_type)( int,int ) const;
            selector_function_type selector_function_value( &::SireMol::Selector< SireMol::CutGroup >::selector );
            
            Selector_CutGroup__exposer.def( 
                "selector"
                , selector_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::subtract
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*subtract_function_type)( ::SireMol::Selector< SireMol::CutGroup > const & ) const;
            subtract_function_type subtract_function_value( &::SireMol::Selector< SireMol::CutGroup >::subtract );
            
            Selector_CutGroup__exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::subtract
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*subtract_function_type)( ::SireMol::CutGroup const & ) const;
            subtract_function_type subtract_function_value( &::SireMol::Selector< SireMol::CutGroup >::subtract );
            
            Selector_CutGroup__exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("view") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::subtract
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::SireMol::Selector< SireMol::CutGroup > ( ::SireMol::Selector< SireMol::CutGroup >::*subtract_function_type)( ::SireMol::CutGroup::ID const & ) const;
            subtract_function_type subtract_function_value( &::SireMol::Selector< SireMol::CutGroup >::subtract );
            
            Selector_CutGroup__exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("id") ) );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::toString
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef ::QString ( ::SireMol::Selector< SireMol::CutGroup >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Selector< SireMol::CutGroup >::toString );
            
            Selector_CutGroup__exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::Selector< SireMol::CutGroup >::typeName
        
            typedef SireMol::Selector< SireMol::CutGroup > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Selector< SireMol::CutGroup >::typeName );
            
            Selector_CutGroup__exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        Selector_CutGroup__exposer.staticmethod( "typeName" );
        Selector_CutGroup__exposer.def( "__copy__", &__copy__);
        Selector_CutGroup__exposer.def( "__deepcopy__", &__copy__);
        Selector_CutGroup__exposer.def( "clone", &__copy__);
        Selector_CutGroup__exposer.def( "__str__", &__str__< ::SireMol::Selector<SireMol::CutGroup> > );
        Selector_CutGroup__exposer.def( "__repr__", &__str__< ::SireMol::Selector<SireMol::CutGroup> > );
        Selector_CutGroup__exposer.def( "__len__", &__len_count< ::SireMol::Selector<SireMol::CutGroup> > );
    }

}
