// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "NumberProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/numberproperty.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "numberproperty.h"

#include "numberproperty.h"

SireBase::NumberProperty __copy__(const SireBase::NumberProperty &other){ return SireBase::NumberProperty(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_NumberProperty_class(){

    { //::SireBase::NumberProperty
        typedef bp::class_< SireBase::NumberProperty, bp::bases< SireBase::Property > > NumberProperty_exposer_t;
        NumberProperty_exposer_t NumberProperty_exposer = NumberProperty_exposer_t( "NumberProperty", "This class provides a thin Property wrapper around numbers (doubles and ints)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor - this constructs the integer 0") );
        bp::scope NumberProperty_scope( NumberProperty_exposer );
        NumberProperty_exposer.def( bp::init< double >(( bp::arg("value") ), "Construct from the passed double") );
        NumberProperty_exposer.def( bp::init< int >(( bp::arg("value") ), "Construct from the passed integer") );
        NumberProperty_exposer.def( bp::init< qint64 >(( bp::arg("value") ), "Construct from the passed integer") );
        NumberProperty_exposer.def( bp::init< SireBase::VariantProperty const & >(( bp::arg("other") ), "Construct from the passed VariantProperty") );
        NumberProperty_exposer.def( bp::init< SireBase::NumberProperty const & >(( bp::arg("other") ), "Copy constructor") );
        NumberProperty_exposer.def( bp::self != bp::self );
        { //::SireBase::NumberProperty::operator=
        
            typedef ::SireBase::NumberProperty & ( ::SireBase::NumberProperty::*assign_function_type)( ::SireBase::NumberProperty const & ) ;
            assign_function_type assign_function_value( &::SireBase::NumberProperty::operator= );
            
            NumberProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        NumberProperty_exposer.def( bp::self == bp::self );
        { //::SireBase::NumberProperty::toDouble
        
            typedef double ( ::SireBase::NumberProperty::*toDouble_function_type)(  ) const;
            toDouble_function_type toDouble_function_value( &::SireBase::NumberProperty::toDouble );
            
            NumberProperty_exposer.def( 
                "toDouble"
                , toDouble_function_value
                , "Return this number cast as a double" );
        
        }
        { //::SireBase::NumberProperty::toInt
        
            typedef ::qint64 ( ::SireBase::NumberProperty::*toInt_function_type)(  ) const;
            toInt_function_type toInt_function_value( &::SireBase::NumberProperty::toInt );
            
            NumberProperty_exposer.def( 
                "toInt"
                , toInt_function_value
                , "Return this number cast as an integer" );
        
        }
        { //::SireBase::NumberProperty::toString
        
            typedef ::QString ( ::SireBase::NumberProperty::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::NumberProperty::toString );
            
            NumberProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireBase::NumberProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::NumberProperty::typeName );
            
            NumberProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireBase::NumberProperty::value
        
            typedef double ( ::SireBase::NumberProperty::*value_function_type)(  ) const;
            value_function_type value_function_value( &::SireBase::NumberProperty::value );
            
            NumberProperty_exposer.def( 
                "value"
                , value_function_value
                , "Return this number cast as a double" );
        
        }
        NumberProperty_exposer.staticmethod( "typeName" );
        NumberProperty_exposer.def( "__copy__", &__copy__);
        NumberProperty_exposer.def( "__deepcopy__", &__copy__);
        NumberProperty_exposer.def( "clone", &__copy__);
        NumberProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::NumberProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NumberProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::NumberProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NumberProperty_exposer.def( "__str__", &__str__< ::SireBase::NumberProperty > );
        NumberProperty_exposer.def( "__repr__", &__str__< ::SireBase::NumberProperty > );
    }

}
