// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "StringArrayProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "arrayproperty.hpp"

#include "numberproperty.h"

#include "propertylist.h"

#include "stringproperty.h"

#include "tostring.h"

#include "variantproperty.h"

#include "propertylist.h"

SireBase::StringArrayProperty __copy__(const SireBase::StringArrayProperty &other){ return SireBase::StringArrayProperty(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_StringArrayProperty_class(){

    { //::SireBase::StringArrayProperty
        typedef bp::class_< SireBase::StringArrayProperty, bp::bases< SireBase::ArrayProperty<QString>, SireBase::Property > > StringArrayProperty_exposer_t;
        StringArrayProperty_exposer_t StringArrayProperty_exposer = StringArrayProperty_exposer_t( "StringArrayProperty", "", bp::init< >("") );
        bp::scope StringArrayProperty_scope( StringArrayProperty_exposer );
        StringArrayProperty_exposer.def( bp::init< QList< QString > const & >(( bp::arg("array") ), "") );
        StringArrayProperty_exposer.def( bp::init< QVector< QString > const & >(( bp::arg("array") ), "") );
        StringArrayProperty_exposer.def( bp::init< SireBase::DoubleArrayProperty const & >(( bp::arg("array") ), "") );
        StringArrayProperty_exposer.def( bp::init< SireBase::IntegerArrayProperty const & >(( bp::arg("array") ), "") );
        StringArrayProperty_exposer.def( bp::init< SireBase::PropertyList const & >(( bp::arg("array") ), "") );
        StringArrayProperty_exposer.def( bp::init< SireBase::StringArrayProperty const & >(( bp::arg("other") ), "") );
        { //::SireBase::StringArrayProperty::asABoolean
        
            typedef bool ( ::SireBase::StringArrayProperty::*asABoolean_function_type)(  ) const;
            asABoolean_function_type asABoolean_function_value( &::SireBase::StringArrayProperty::asABoolean );
            
            StringArrayProperty_exposer.def( 
                "asABoolean"
                , asABoolean_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::asADouble
        
            typedef double ( ::SireBase::StringArrayProperty::*asADouble_function_type)(  ) const;
            asADouble_function_type asADouble_function_value( &::SireBase::StringArrayProperty::asADouble );
            
            StringArrayProperty_exposer.def( 
                "asADouble"
                , asADouble_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::asAString
        
            typedef ::QString ( ::SireBase::StringArrayProperty::*asAString_function_type)(  ) const;
            asAString_function_type asAString_function_value( &::SireBase::StringArrayProperty::asAString );
            
            StringArrayProperty_exposer.def( 
                "asAString"
                , asAString_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::asAnArray
        
            typedef ::SireBase::PropertyList ( ::SireBase::StringArrayProperty::*asAnArray_function_type)(  ) const;
            asAnArray_function_type asAnArray_function_value( &::SireBase::StringArrayProperty::asAnArray );
            
            StringArrayProperty_exposer.def( 
                "asAnArray"
                , asAnArray_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::asAnInteger
        
            typedef int ( ::SireBase::StringArrayProperty::*asAnInteger_function_type)(  ) const;
            asAnInteger_function_type asAnInteger_function_value( &::SireBase::StringArrayProperty::asAnInteger );
            
            StringArrayProperty_exposer.def( 
                "asAnInteger"
                , asAnInteger_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::isABoolean
        
            typedef bool ( ::SireBase::StringArrayProperty::*isABoolean_function_type)(  ) const;
            isABoolean_function_type isABoolean_function_value( &::SireBase::StringArrayProperty::isABoolean );
            
            StringArrayProperty_exposer.def( 
                "isABoolean"
                , isABoolean_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::isADouble
        
            typedef bool ( ::SireBase::StringArrayProperty::*isADouble_function_type)(  ) const;
            isADouble_function_type isADouble_function_value( &::SireBase::StringArrayProperty::isADouble );
            
            StringArrayProperty_exposer.def( 
                "isADouble"
                , isADouble_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::isAString
        
            typedef bool ( ::SireBase::StringArrayProperty::*isAString_function_type)(  ) const;
            isAString_function_type isAString_function_value( &::SireBase::StringArrayProperty::isAString );
            
            StringArrayProperty_exposer.def( 
                "isAString"
                , isAString_function_value
                , "" );
        
        }
        { //::SireBase::StringArrayProperty::isAnInteger
        
            typedef bool ( ::SireBase::StringArrayProperty::*isAnInteger_function_type)(  ) const;
            isAnInteger_function_type isAnInteger_function_value( &::SireBase::StringArrayProperty::isAnInteger );
            
            StringArrayProperty_exposer.def( 
                "isAnInteger"
                , isAnInteger_function_value
                , "" );
        
        }
        StringArrayProperty_exposer.def( bp::self != bp::self );
        StringArrayProperty_exposer.def( bp::self + bp::self );
        { //::SireBase::StringArrayProperty::operator=
        
            typedef ::SireBase::StringArrayProperty & ( ::SireBase::StringArrayProperty::*assign_function_type)( ::SireBase::StringArrayProperty const & ) ;
            assign_function_type assign_function_value( &::SireBase::StringArrayProperty::operator= );
            
            StringArrayProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        StringArrayProperty_exposer.def( bp::self == bp::self );
        { //::SireBase::StringArrayProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::StringArrayProperty::typeName );
            
            StringArrayProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        StringArrayProperty_exposer.staticmethod( "typeName" );
        StringArrayProperty_exposer.def( "__copy__", &__copy__);
        StringArrayProperty_exposer.def( "__deepcopy__", &__copy__);
        StringArrayProperty_exposer.def( "clone", &__copy__);
        StringArrayProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::StringArrayProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringArrayProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::StringArrayProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringArrayProperty_exposer.def_pickle(sire_pickle_suite< ::SireBase::StringArrayProperty >());
        StringArrayProperty_exposer.def( "__str__", &__str__< ::SireBase::StringArrayProperty > );
        StringArrayProperty_exposer.def( "__repr__", &__str__< ::SireBase::StringArrayProperty > );
        StringArrayProperty_exposer.def( "__len__", &__len_size< ::SireBase::StringArrayProperty > );
        StringArrayProperty_exposer.def( "__getitem__", &::SireBase::StringArrayProperty::getitem );
    }

}
