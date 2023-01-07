// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "SegName.pypp.hpp"

namespace bp = boost::python;

#include "segname.h"

#include "segname.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segid.h"

#include "segidentifier.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "segid.h"

SireMol::SegName __copy__(const SireMol::SegName &other){ return SireMol::SegName(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_SegName_class(){

    { //::SireMol::SegName
        typedef bp::class_< SireMol::SegName, bp::bases< SireMol::SegID, SireID::ID, SireID::Name > > SegName_exposer_t;
        SegName_exposer_t SegName_exposer = SegName_exposer_t( "SegName", "This class holds the name of a CutGroup.\n\nAuthor: Christopher Woods\n", bp::init< >("") );
        bp::scope SegName_scope( SegName_exposer );
        SegName_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        SegName_exposer.def( bp::init< QString const &, SireID::CaseSensitivity >(( bp::arg("name"), bp::arg("case_sensitivity") ), "") );
        SegName_exposer.def( bp::init< SireMol::SegName const & >(( bp::arg("other") ), "") );
        { //::SireMol::SegName::hash

            typedef ::uint ( ::SireMol::SegName::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::SegName::hash );

            SegName_exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::SegName::isNull

            typedef bool ( ::SireMol::SegName::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::SegName::isNull );

            SegName_exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::SegName::map

            typedef ::QList< SireMol::SegIdx > ( ::SireMol::SegName::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::SegName::map );

            SegName_exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        SegName_exposer.def( bp::self != bp::self );
        { //::SireMol::SegName::operator=

            typedef ::SireMol::SegName & ( ::SireMol::SegName::*assign_function_type)( ::SireMol::SegName const & ) ;
            assign_function_type assign_function_value( &::SireMol::SegName::operator= );

            SegName_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        SegName_exposer.def( bp::self == bp::other< SireID::ID >() );
        SegName_exposer.def( bp::self == bp::self );
        { //::SireMol::SegName::toString

            typedef ::QString ( ::SireMol::SegName::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::SegName::toString );

            SegName_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::SegName::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::SegName::typeName );

            SegName_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::SegName::what

            typedef char const * ( ::SireMol::SegName::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::SegName::what );

            SegName_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        SegName_exposer.staticmethod( "typeName" );
        SegName_exposer.def( "__copy__", &__copy__);
        SegName_exposer.def( "__deepcopy__", &__copy__);
        SegName_exposer.def( "clone", &__copy__);
        SegName_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::SegName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegName_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::SegName >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegName_exposer.def_pickle(sire_pickle_suite< ::SireMol::SegName >());
        SegName_exposer.def( "__str__", &__str__< ::SireMol::SegName > );
        SegName_exposer.def( "__repr__", &__str__< ::SireMol::SegName > );
        SegName_exposer.def( "__hash__", &::SireMol::SegName::hash );
    }

}
