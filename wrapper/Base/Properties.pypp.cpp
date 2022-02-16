// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Properties.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "properties.h"

#include "refcountdata.h"

#include <QDebug>

#include <QHash>

#include "properties.h"

SireBase::Properties __copy__(const SireBase::Properties &other){ return SireBase::Properties(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_Properties_class(){

    { //::SireBase::Properties
        typedef bp::class_< SireBase::Properties, bp::bases< SireBase::Property > > Properties_exposer_t;
        Properties_exposer_t Properties_exposer = Properties_exposer_t( "Properties", "This class holds a collection of properties, indexed by name.\nEach property comes complete with a set of metadata.\nThe metadata is actually another Properties object,\nand indeed Properties can itself be a Property,\nso allowing Properties to be nested indefinitely.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor - construct an empty set of properties") );
        bp::scope Properties_scope( Properties_exposer );
        Properties_exposer.def( bp::init< SireBase::Properties const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireBase::Properties::allMetadata
        
            typedef ::SireBase::Properties const & ( ::SireBase::Properties::*allMetadata_function_type)(  ) const;
            allMetadata_function_type allMetadata_function_value( &::SireBase::Properties::allMetadata );
            
            Properties_exposer.def( 
                "allMetadata"
                , allMetadata_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the metadata associated with this properties object" );
        
        }
        { //::SireBase::Properties::allMetadata
        
            typedef ::SireBase::Properties const & ( ::SireBase::Properties::*allMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            allMetadata_function_type allMetadata_function_value( &::SireBase::Properties::allMetadata );
            
            Properties_exposer.def( 
                "allMetadata"
                , allMetadata_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the metadata for the property with key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::assertContainsMetadata
        
            typedef void ( ::SireBase::Properties::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireBase::Properties::assertContainsMetadata );
            
            Properties_exposer.def( 
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("metakey") )
                , "Assert that this contains the metadata at metakey metakey" );
        
        }
        { //::SireBase::Properties::assertContainsMetadata
        
            typedef void ( ::SireBase::Properties::*assertContainsMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            assertContainsMetadata_function_type assertContainsMetadata_function_value( &::SireBase::Properties::assertContainsMetadata );
            
            Properties_exposer.def( 
                "assertContainsMetadata"
                , assertContainsMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Assert that this set contains the metadata property for the\nproperty key with metakey metakey\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::assertContainsProperty
        
            typedef void ( ::SireBase::Properties::*assertContainsProperty_function_type)( ::SireBase::PropertyName const & ) const;
            assertContainsProperty_function_type assertContainsProperty_function_value( &::SireBase::Properties::assertContainsProperty );
            
            Properties_exposer.def( 
                "assertContainsProperty"
                , assertContainsProperty_function_value
                , ( bp::arg("key") )
                , "Assert that this set contains a property with key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::clear
        
            typedef void ( ::SireBase::Properties::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireBase::Properties::clear );
            
            Properties_exposer.def( 
                "clear"
                , clear_function_value
                , "Completely clear this object of all properties and metadata" );
        
        }
        { //::SireBase::Properties::count
        
            typedef int ( ::SireBase::Properties::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::Properties::count );
            
            Properties_exposer.def( 
                "count"
                , count_function_value
                , "Return the number of properties in this set" );
        
        }
        { //::SireBase::Properties::hasMetadata
        
            typedef bool ( ::SireBase::Properties::*hasMetadata_function_type)( ::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireBase::Properties::hasMetadata );
            
            Properties_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("metakey") )
                , "Return whether or not this contains the metadata with metakey metakey" );
        
        }
        { //::SireBase::Properties::hasMetadata
        
            typedef bool ( ::SireBase::Properties::*hasMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            hasMetadata_function_type hasMetadata_function_value( &::SireBase::Properties::hasMetadata );
            
            Properties_exposer.def( 
                "hasMetadata"
                , hasMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Return whether or not the property with key key contains some\nmetadata with the metakey metakey\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::hasProperty
        
            typedef bool ( ::SireBase::Properties::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireBase::Properties::hasProperty );
            
            Properties_exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , "Return whether or not this contains a property with key key" );
        
        }
        { //::SireBase::Properties::isEmpty
        
            typedef bool ( ::SireBase::Properties::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireBase::Properties::isEmpty );
            
            Properties_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "Return whether this is empty (has no values)" );
        
        }
        { //::SireBase::Properties::metadata
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*metadata_function_type)( ::SireBase::PropertyName const & ) const;
            metadata_function_type metadata_function_value( &::SireBase::Properties::metadata );
            
            Properties_exposer.def( 
                "metadata"
                , metadata_function_value
                , ( bp::arg("metakey") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the metadata at metakey metakey - note that if metakey\nspecifies a value rather than a source, then the value contained\nin the metakey is returned.\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::metadata
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*metadata_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            metadata_function_type metadata_function_value( &::SireBase::Properties::metadata );
            
            Properties_exposer.def( 
                "metadata"
                , metadata_function_value
                , ( bp::arg("metakey"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the metadata at metakey metakey - note that if metakey\nspecifies a value rather than a source, then the value contained\nin the metakey is returned. If there is no such metadata, and no\nvalue is contained in the metakey, then default_value is\nreturned" );
        
        }
        { //::SireBase::Properties::metadata
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*metadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            metadata_function_type metadata_function_value( &::SireBase::Properties::metadata );
            
            Properties_exposer.def( 
                "metadata"
                , metadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the metadata at metakey metakey that is associated with\nthe property at key key.\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::metadata
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*metadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            metadata_function_type metadata_function_value( &::SireBase::Properties::metadata );
            
            Properties_exposer.def( 
                "metadata"
                , metadata_function_value
                , ( bp::arg("key"), bp::arg("metakey"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the metadata at metakey metakey that is associated with\nthe property at key key, or default_value if there is no\nsuch metadata.\n" );
        
        }
        { //::SireBase::Properties::metadataKeys
        
            typedef ::QStringList ( ::SireBase::Properties::*metadataKeys_function_type)(  ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireBase::Properties::metadataKeys );
            
            Properties_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , "Return the list of metadata keys" );
        
        }
        { //::SireBase::Properties::metadataKeys
        
            typedef ::QStringList ( ::SireBase::Properties::*metadataKeys_function_type)( ::SireBase::PropertyName const & ) const;
            metadataKeys_function_type metadataKeys_function_value( &::SireBase::Properties::metadataKeys );
            
            Properties_exposer.def( 
                "metadataKeys"
                , metadataKeys_function_value
                , ( bp::arg("key") )
                , "Return the list of metadata keys for the property with key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::metadataType
        
            typedef char const * ( ::SireBase::Properties::*metadataType_function_type)( ::SireBase::PropertyName const & ) const;
            metadataType_function_type metadataType_function_value( &::SireBase::Properties::metadataType );
            
            Properties_exposer.def( 
                "metadataType"
                , metadataType_function_value
                , ( bp::arg("metakey") )
                , "Return the type name of the metadata at metakey metakey\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::metadataType
        
            typedef char const * ( ::SireBase::Properties::*metadataType_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) const;
            metadataType_function_type metadataType_function_value( &::SireBase::Properties::metadataType );
            
            Properties_exposer.def( 
                "metadataType"
                , metadataType_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Return the type name of the metadata at metakey metakey\nfor the property at key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::nProperties
        
            typedef int ( ::SireBase::Properties::*nProperties_function_type)(  ) const;
            nProperties_function_type nProperties_function_value( &::SireBase::Properties::nProperties );
            
            Properties_exposer.def( 
                "nProperties"
                , nProperties_function_value
                , "Return the number of properties in this set" );
        
        }
        Properties_exposer.def( bp::self != bp::self );
        { //::SireBase::Properties::operator=
        
            typedef ::SireBase::Properties & ( ::SireBase::Properties::*assign_function_type)( ::SireBase::Properties const & ) ;
            assign_function_type assign_function_value( &::SireBase::Properties::operator= );
            
            Properties_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Properties_exposer.def( bp::self == bp::self );
        { //::SireBase::Properties::operator[]
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*__getitem___function_type)( ::SireBase::PropertyName const & ) const;
            __getitem___function_type __getitem___function_value( &::SireBase::Properties::operator[] );
            
            Properties_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireBase::Properties::property
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*property_function_type)( ::SireBase::PropertyName const & ) const;
            property_function_type property_function_value( &::SireBase::Properties::property );
            
            Properties_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the property with key key - note that if\nkey specifies a value rather than a source, then the\nvalue contained in the key is returned\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::property
        
            typedef ::SireBase::Property const & ( ::SireBase::Properties::*property_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            property_function_type property_function_value( &::SireBase::Properties::property );
            
            Properties_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the property with key key - note that if\nkey specifies a value rather than a source, then the\nvalue contained in the key is returned. If no such source\nexists, and there is no value in the key, then\ndefault_value is returned" );
        
        }
        { //::SireBase::Properties::propertyKeys
        
            typedef ::QStringList ( ::SireBase::Properties::*propertyKeys_function_type)(  ) const;
            propertyKeys_function_type propertyKeys_function_value( &::SireBase::Properties::propertyKeys );
            
            Properties_exposer.def( 
                "propertyKeys"
                , propertyKeys_function_value
                , "Return the keys for all of the properties in this set" );
        
        }
        { //::SireBase::Properties::propertyType
        
            typedef char const * ( ::SireBase::Properties::*propertyType_function_type)( ::SireBase::PropertyName const & ) const;
            propertyType_function_type propertyType_function_value( &::SireBase::Properties::propertyType );
            
            Properties_exposer.def( 
                "propertyType"
                , propertyType_function_value
                , ( bp::arg("key") )
                , "Return the type name of the property at key key\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireBase::Properties::removeAllMetadata
        
            typedef void ( ::SireBase::Properties::*removeAllMetadata_function_type)(  ) ;
            removeAllMetadata_function_type removeAllMetadata_function_value( &::SireBase::Properties::removeAllMetadata );
            
            Properties_exposer.def( 
                "removeAllMetadata"
                , removeAllMetadata_function_value
                , "Remove all of the top-level metadata" );
        
        }
        { //::SireBase::Properties::removeAllMetadata
        
            typedef void ( ::SireBase::Properties::*removeAllMetadata_function_type)( ::QString const & ) ;
            removeAllMetadata_function_type removeAllMetadata_function_value( &::SireBase::Properties::removeAllMetadata );
            
            Properties_exposer.def( 
                "removeAllMetadata"
                , removeAllMetadata_function_value
                , ( bp::arg("key") )
                , "Remove all of the metadata associated with the property at\nkey key" );
        
        }
        { //::SireBase::Properties::removeMetadata
        
            typedef void ( ::SireBase::Properties::*removeMetadata_function_type)( ::QString const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireBase::Properties::removeMetadata );
            
            Properties_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("metakey") )
                , "Remove the metadata at metakey metakey" );
        
        }
        { //::SireBase::Properties::removeMetadata
        
            typedef void ( ::SireBase::Properties::*removeMetadata_function_type)( ::QString const &,::QString const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireBase::Properties::removeMetadata );
            
            Properties_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , "Remove the metadata at metakey metakey for the\nproperty at key key" );
        
        }
        { //::SireBase::Properties::removeProperty
        
            typedef void ( ::SireBase::Properties::*removeProperty_function_type)( ::QString const & ) ;
            removeProperty_function_type removeProperty_function_value( &::SireBase::Properties::removeProperty );
            
            Properties_exposer.def( 
                "removeProperty"
                , removeProperty_function_value
                , ( bp::arg("key") )
                , "Remove the property with key key and all of its metadata" );
        
        }
        { //::SireBase::Properties::setMetadata
        
            typedef void ( ::SireBase::Properties::*setMetadata_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setMetadata_function_type setMetadata_function_value( &::SireBase::Properties::setMetadata );
            
            Properties_exposer.def( 
                "setMetadata"
                , setMetadata_function_value
                , ( bp::arg("metakey"), bp::arg("value") )
                , "Set the metadata at metakey metakey to have the value value.\nThis replaces any existing metadata with this metakey" );
        
        }
        { //::SireBase::Properties::setMetadata
        
            typedef void ( ::SireBase::Properties::*setMetadata_function_type)( ::QString const &,::QString const &,::SireBase::Property const & ) ;
            setMetadata_function_type setMetadata_function_value( &::SireBase::Properties::setMetadata );
            
            Properties_exposer.def( 
                "setMetadata"
                , setMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey"), bp::arg("value") )
                , "Set the metadata at metakey metakey for the property at key key.\nThis replaces any existing metadata for this keymetakey pair" );
        
        }
        { //::SireBase::Properties::setProperty
        
            typedef void ( ::SireBase::Properties::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireBase::Properties::setProperty );
            
            Properties_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("key"), bp::arg("value") )
                , "" );
        
        }
        { //::SireBase::Properties::setProperty
        
            typedef void ( ::SireBase::Properties::*setProperty_function_type)( ::QString const &,::SireBase::Property const &,bool ) ;
            setProperty_function_type setProperty_function_value( &::SireBase::Properties::setProperty );
            
            Properties_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("key"), bp::arg("value"), bp::arg("clear_metadata") )
                , "Set the property at key key to have the value value. This\nreplaces any existing property at this key, and removes any\nexisting metadata is clear_metadata is true" );
        
        }
        { //::SireBase::Properties::size
        
            typedef int ( ::SireBase::Properties::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::Properties::size );
            
            Properties_exposer.def( 
                "size"
                , size_function_value
                , "Return the number of properties in this set" );
        
        }
        { //::SireBase::Properties::toString
        
            typedef ::QString ( ::SireBase::Properties::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::Properties::toString );
            
            Properties_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this set of properties" );
        
        }
        { //::SireBase::Properties::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::Properties::typeName );
            
            Properties_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        Properties_exposer.staticmethod( "typeName" );
        Properties_exposer.def( "__copy__", &__copy__);
        Properties_exposer.def( "__deepcopy__", &__copy__);
        Properties_exposer.def( "clone", &__copy__);
        Properties_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::Properties >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Properties_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::Properties >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Properties_exposer.def_pickle(sire_pickle_suite< ::SireBase::Properties >());
        Properties_exposer.def( "__str__", &__str__< ::SireBase::Properties > );
        Properties_exposer.def( "__repr__", &__str__< ::SireBase::Properties > );
        Properties_exposer.def( "__len__", &__len_size< ::SireBase::Properties > );
    }

}
