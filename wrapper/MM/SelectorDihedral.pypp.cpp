// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SelectorDihedral.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/slice.h"

#include "SireCAS/symbol.h"

#include "SireCAS/values.h"

#include "SireID/index.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "fouratomfunctions.h"

#include "selectordihedral.h"

#include <QDebug>

#include "selectordihedral.h"

SireMM::SelectorDihedral __copy__(const SireMM::SelectorDihedral &other){ return SireMM::SelectorDihedral(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_SelectorDihedral_class(){

    { //::SireMM::SelectorDihedral
        typedef bp::class_< SireMM::SelectorDihedral, bp::bases< SireMol::MoleculeView, SireBase::Property > > SelectorDihedral_exposer_t;
        SelectorDihedral_exposer_t SelectorDihedral_exposer = SelectorDihedral_exposer_t( "SelectorDihedral", "This provides a Selector<T>-style interface for multiple dihedrals", bp::init< >("") );
        bp::scope SelectorDihedral_scope( SelectorDihedral_exposer );
        SelectorDihedral_exposer.def( bp::init< SireMM::Dihedral const & >(( bp::arg("dihedral") ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeData const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeData const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("atom3"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::DihedralID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("dihedral"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, QList< SireMol::DihedralID > const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("dihedrals"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecule"), bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("atom3"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::Selector< SireMol::Atom > const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atoms"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("atoms2"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, SireMol::Selector< SireMol::Atom > const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("atoms2"), bp::arg("atoms3"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        SelectorDihedral_exposer.def( bp::init< SireMM::SelectorDihedral const & >(( bp::arg("other") ), "") );
        { //::SireMM::SelectorDihedral::IDs
        
            typedef ::QList< SireMol::DihedralID > ( ::SireMM::SelectorDihedral::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireMM::SelectorDihedral::IDs );
            
            SelectorDihedral_exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::add
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*add_function_type)( ::SireMM::Dihedral const & ) const;
            add_function_type add_function_value( &::SireMM::SelectorDihedral::add );
            
            SelectorDihedral_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("dihedral") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::add
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*add_function_type)( ::SireMM::SelectorDihedral const & ) const;
            add_function_type add_function_value( &::SireMM::SelectorDihedral::add );
            
            SelectorDihedral_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::count
        
            typedef int ( ::SireMM::SelectorDihedral::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMM::SelectorDihedral::count );
            
            SelectorDihedral_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::energies
        
            typedef ::QList< SireUnits::Dimension::GeneralUnit > ( ::SireMM::SelectorDihedral::*energies_function_type)(  ) const;
            energies_function_type energies_function_value( &::SireMM::SelectorDihedral::energies );
            
            SelectorDihedral_exposer.def( 
                "energies"
                , energies_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::energies
        
            typedef ::QList< SireUnits::Dimension::GeneralUnit > ( ::SireMM::SelectorDihedral::*energies_function_type)( ::SireBase::PropertyMap const & ) const;
            energies_function_type energies_function_value( &::SireMM::SelectorDihedral::energies );
            
            SelectorDihedral_exposer.def( 
                "energies"
                , energies_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::energy
        
            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::SelectorDihedral::*energy_function_type)(  ) const;
            energy_function_type energy_function_value( &::SireMM::SelectorDihedral::energy );
            
            SelectorDihedral_exposer.def( 
                "energy"
                , energy_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::energy
        
            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::SelectorDihedral::*energy_function_type)( ::SireBase::PropertyMap const & ) const;
            energy_function_type energy_function_value( &::SireMM::SelectorDihedral::energy );
            
            SelectorDihedral_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::evaluate
        
            typedef ::SireMol::Evaluator ( ::SireMM::SelectorDihedral::*evaluate_function_type)(  ) const;
            evaluate_function_type evaluate_function_value( &::SireMM::SelectorDihedral::evaluate );
            
            SelectorDihedral_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::hasMetadata
        
            typedef bool ( ::SireMM::SelectorDihedral::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::SelectorDihedral::hasMetadata );
            
            SelectorDihedral_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::hasMetadata
        
            typedef bool ( ::SireMM::SelectorDihedral::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireMM::SelectorDihedral::hasMetadata );
            
            SelectorDihedral_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::hasProperty
        
            typedef bool ( ::SireMM::SelectorDihedral::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMM::SelectorDihedral::hasProperty );
            
            SelectorDihedral_exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::intersection
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*intersection_function_type)( ::SireMM::SelectorDihedral const & ) const;
            intersection_function_type intersection_function_value( &::SireMM::SelectorDihedral::intersection );
            
            SelectorDihedral_exposer.def( 
                "intersection"
                , intersection_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::invert
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*invert_function_type)( ::SireBase::PropertyMap const & ) const;
            invert_function_type invert_function_value( &::SireMM::SelectorDihedral::invert );
            
            SelectorDihedral_exposer.def( 
                "invert"
                , invert_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::invert
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*invert_function_type)(  ) const;
            invert_function_type invert_function_value( &::SireMM::SelectorDihedral::invert );
            
            SelectorDihedral_exposer.def( 
                "invert"
                , invert_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::isEmpty
        
            typedef bool ( ::SireMM::SelectorDihedral::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::SelectorDihedral::isEmpty );
            
            SelectorDihedral_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::measures
        
            typedef ::QList< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::SelectorDihedral::*measures_function_type)(  ) const;
            measures_function_type measures_function_value( &::SireMM::SelectorDihedral::measures );
            
            SelectorDihedral_exposer.def( 
                "measures"
                , measures_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::measures
        
            typedef ::QList< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::SelectorDihedral::*measures_function_type)( ::SireBase::PropertyMap const & ) const;
            measures_function_type measures_function_value( &::SireMM::SelectorDihedral::measures );
            
            SelectorDihedral_exposer.def( 
                "measures"
                , measures_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::metadataKeys
        
            typedef ::QStringList ( ::SireMM::SelectorDihedral::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::SelectorDihedral::metadataKeys );
            
            SelectorDihedral_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::metadataKeys
        
            typedef ::QStringList ( ::SireMM::SelectorDihedral::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireMM::SelectorDihedral::metadataKeys );
            
            SelectorDihedral_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::move
        
            typedef ::SireMol::Mover< SireMM::SelectorDihedral > ( ::SireMM::SelectorDihedral::*move_function_type)(  ) const;
            move_function_type move_function_value( &::SireMM::SelectorDihedral::move );
            
            SelectorDihedral_exposer.def( 
                "move"
                , move_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::nViews
        
            typedef int ( ::SireMM::SelectorDihedral::*nViews_function_type)(  ) const;
            nViews_function_type nViews_function_value( &::SireMM::SelectorDihedral::nViews );
            
            SelectorDihedral_exposer.def( 
                "nViews"
                , nViews_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        SelectorDihedral_exposer.def( bp::self != bp::self );
        { //::SireMM::SelectorDihedral::operator()
        
            typedef ::SireMM::Dihedral ( ::SireMM::SelectorDihedral::*__call___function_type)( int ) const;
            __call___function_type __call___function_value( &::SireMM::SelectorDihedral::operator() );
            
            SelectorDihedral_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator()
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireMM::SelectorDihedral::operator() );
            
            SelectorDihedral_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator()
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*__call___function_type)( ::SireBase::Slice const & ) const;
            __call___function_type __call___function_value( &::SireMM::SelectorDihedral::operator() );
            
            SelectorDihedral_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator()
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*__call___function_type)( ::QList< long long > const & ) const;
            __call___function_type __call___function_value( &::SireMM::SelectorDihedral::operator() );
            
            SelectorDihedral_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator()
        
            typedef ::SireMM::SelectorDihedral ( ::SireMM::SelectorDihedral::*__call___function_type)( ::SireMol::DihedralID const & ) const;
            __call___function_type __call___function_value( &::SireMM::SelectorDihedral::operator() );
            
            SelectorDihedral_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("dihedral") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator=
        
            typedef ::SireMM::SelectorDihedral & ( ::SireMM::SelectorDihedral::*assign_function_type)( ::SireMM::SelectorDihedral const & ) ;
            assign_function_type assign_function_value( &::SireMM::SelectorDihedral::operator= );
            
            SelectorDihedral_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("dihedral") )
                , bp::return_self< >()
                , "" );
        
        }
        SelectorDihedral_exposer.def( bp::self == bp::self );
        { //::SireMM::SelectorDihedral::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMM::SelectorDihedral::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::SelectorDihedral::operator[] );
            
            SelectorDihedral_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMM::SelectorDihedral::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::SelectorDihedral::operator[] );
            
            SelectorDihedral_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMM::SelectorDihedral::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::SelectorDihedral::operator[] );
            
            SelectorDihedral_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::operator[]
        
            typedef ::SireMol::MolViewPtr ( ::SireMM::SelectorDihedral::*__getitem___function_type)( ::SireMol::DihedralID const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::SelectorDihedral::operator[] );
            
            SelectorDihedral_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("dihedral") )
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::potentials
        
            typedef ::QList< SireCAS::Expression > ( ::SireMM::SelectorDihedral::*potentials_function_type)(  ) const;
            potentials_function_type potentials_function_value( &::SireMM::SelectorDihedral::potentials );
            
            SelectorDihedral_exposer.def( 
                "potentials"
                , potentials_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::potentials
        
            typedef ::QList< SireCAS::Expression > ( ::SireMM::SelectorDihedral::*potentials_function_type)( ::SireBase::PropertyMap const & ) const;
            potentials_function_type potentials_function_value( &::SireMM::SelectorDihedral::potentials );
            
            SelectorDihedral_exposer.def( 
                "potentials"
                , potentials_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::properties
        
            typedef ::QList< SireBase::Properties > ( ::SireMM::SelectorDihedral::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::SelectorDihedral::properties );
            
            SelectorDihedral_exposer.def( 
                "properties"
                , properties_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::property
        
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMM::SelectorDihedral::*property_function_type)( ::SireBase::PropertyName const & ) const;
            property_function_type property_function_value( &::SireMM::SelectorDihedral::property );
            
            SelectorDihedral_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::property
        
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMM::SelectorDihedral::*property_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            property_function_type property_function_value( &::SireMM::SelectorDihedral::property );
            
            SelectorDihedral_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key"), bp::arg("default_value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::propertyKeys
        
            typedef ::QStringList ( ::SireMM::SelectorDihedral::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireMM::SelectorDihedral::propertyKeys );
            
            SelectorDihedral_exposer.def( 
                "propertyKeys"
                , propertyKeys_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::selectedAll
        
            typedef bool ( ::SireMM::SelectorDihedral::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireMM::SelectorDihedral::selectedAll );
            
            SelectorDihedral_exposer.def( 
                "selectedAll"
                , selectedAll_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::selection
        
            typedef ::SireMol::AtomSelection ( ::SireMM::SelectorDihedral::*selection_function_type)(  ) const;
            selection_function_type selection_function_value( &::SireMM::SelectorDihedral::selection );
            
            SelectorDihedral_exposer.def( 
                "selection"
                , selection_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::size
        
            typedef int ( ::SireMM::SelectorDihedral::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMM::SelectorDihedral::size );
            
            SelectorDihedral_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::sizes
        
            typedef ::QList< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::SelectorDihedral::*sizes_function_type)(  ) const;
            sizes_function_type sizes_function_value( &::SireMM::SelectorDihedral::sizes );
            
            SelectorDihedral_exposer.def( 
                "sizes"
                , sizes_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::sizes
        
            typedef ::QList< SireUnits::Dimension::PhysUnit< 0, 0, 0, 0, 0, 0, 1 > > ( ::SireMM::SelectorDihedral::*sizes_function_type)( ::SireBase::PropertyMap const & ) const;
            sizes_function_type sizes_function_value( &::SireMM::SelectorDihedral::sizes );
            
            SelectorDihedral_exposer.def( 
                "sizes"
                , sizes_function_value
                , ( bp::arg("map") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::toList
        
            typedef ::QList< SireBase::PropPtr< SireMol::MoleculeView > > ( ::SireMM::SelectorDihedral::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMM::SelectorDihedral::toList );
            
            SelectorDihedral_exposer.def( 
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::toSelector
        
            typedef ::SireMol::MolViewPtr ( ::SireMM::SelectorDihedral::*toSelector_function_type)(  ) const;
            toSelector_function_type toSelector_function_value( &::SireMM::SelectorDihedral::toSelector );
            
            SelectorDihedral_exposer.def( 
                "toSelector"
                , toSelector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::toString
        
            typedef ::QString ( ::SireMM::SelectorDihedral::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::SelectorDihedral::toString );
            
            SelectorDihedral_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::SelectorDihedral::typeName );
            
            SelectorDihedral_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::SelectorDihedral::what
        
            typedef char const * ( ::SireMM::SelectorDihedral::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::SelectorDihedral::what );
            
            SelectorDihedral_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        SelectorDihedral_exposer.staticmethod( "typeName" );
        SelectorDihedral_exposer.def( "__copy__", &__copy__);
        SelectorDihedral_exposer.def( "__deepcopy__", &__copy__);
        SelectorDihedral_exposer.def( "clone", &__copy__);
        SelectorDihedral_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::SelectorDihedral >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SelectorDihedral_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::SelectorDihedral >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SelectorDihedral_exposer.def_pickle(sire_pickle_suite< ::SireMM::SelectorDihedral >());
        SelectorDihedral_exposer.def( "__str__", &__str__< ::SireMM::SelectorDihedral > );
        SelectorDihedral_exposer.def( "__repr__", &__str__< ::SireMM::SelectorDihedral > );
        SelectorDihedral_exposer.def( "__len__", &__len_size< ::SireMM::SelectorDihedral > );
    }

}
