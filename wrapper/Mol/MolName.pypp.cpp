// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "MolName.pypp.hpp"

namespace bp = boost::python;

#include "molname.h"

#include "molname.h"

#include "molid.h"

#include "molidx.h"

#include "molnum.h"

#include "molname.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "mover.hpp"

SireMol::MolName __copy__(const SireMol::MolName &other){ return SireMol::MolName(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MolName_class(){

    { //::SireMol::MolName
        typedef bp::class_< SireMol::MolName, bp::bases< SireMol::MolID, SireID::ID, SireID::Name > > MolName_exposer_t;
        MolName_exposer_t MolName_exposer = MolName_exposer_t( "MolName", "This class holds the name of a Molecule.\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope MolName_scope( MolName_exposer );
        MolName_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        MolName_exposer.def( bp::init< QString const &, SireID::CaseSensitivity >(( bp::arg("name"), bp::arg("case_sensitivity") ), "") );
        MolName_exposer.def( bp::init< SireMol::MolName const & >(( bp::arg("other") ), "") );
        { //::SireMol::MolName::hash

            typedef ::uint ( ::SireMol::MolName::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::MolName::hash );

            MolName_exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::isNull

            typedef bool ( ::SireMol::MolName::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::MolName::isNull );

            MolName_exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::map

            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolName::*map_function_type)( ::SireMol::Molecules const & ) const;
            map_function_type map_function_value( &::SireMol::MolName::map );

            MolName_exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("molecules") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::map

            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolName::*map_function_type)( ::SireMol::MoleculeGroup const & ) const;
            map_function_type map_function_value( &::SireMol::MolName::map );

            MolName_exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("molgroup") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::map

            typedef ::QList< SireMol::MolNum > ( ::SireMol::MolName::*map_function_type)( ::SireMol::MolGroupsBase const & ) const;
            map_function_type map_function_value( &::SireMol::MolName::map );

            MolName_exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("molgroups") )
                , bp::release_gil_policy()
                , "" );

        }
        MolName_exposer.def( bp::self != bp::self );
        { //::SireMol::MolName::operator=

            typedef ::SireMol::MolName & ( ::SireMol::MolName::*assign_function_type)( ::SireMol::MolName const & ) ;
            assign_function_type assign_function_value( &::SireMol::MolName::operator= );

            MolName_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        MolName_exposer.def( bp::self == bp::other< SireID::ID >() );
        MolName_exposer.def( bp::self == bp::self );
        { //::SireMol::MolName::toString

            typedef ::QString ( ::SireMol::MolName::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::MolName::toString );

            MolName_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MolName::typeName );

            MolName_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::MolName::what

            typedef char const * ( ::SireMol::MolName::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::MolName::what );

            MolName_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        MolName_exposer.staticmethod( "typeName" );
        MolName_exposer.def( "__copy__", &__copy__);
        MolName_exposer.def( "__deepcopy__", &__copy__);
        MolName_exposer.def( "clone", &__copy__);
        MolName_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MolName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolName_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MolName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolName_exposer.def_pickle(sire_pickle_suite< ::SireMol::MolName >());
        MolName_exposer.def( "__str__", &__str__< ::SireMol::MolName > );
        MolName_exposer.def( "__repr__", &__str__< ::SireMol::MolName > );
        MolName_exposer.def( "__hash__", &::SireMol::MolName::hash );
    }

}
