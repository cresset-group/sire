// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "GTOPair.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "gto.h"

#include "sgto.h"

#include "gto.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_GTOPair_class(){

    { //::Squire::GTOPair
        typedef bp::class_< Squire::GTOPair, bp::bases< Squire::ShellPair, SireBase::Property >, boost::noncopyable > GTOPair_exposer_t;
        GTOPair_exposer_t GTOPair_exposer = GTOPair_exposer_t( "GTOPair", "This is the base class of all of the combined shell-pairs\n(e.g. SS_GTO, PS_GTO etc.)\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope GTOPair_scope( GTOPair_exposer );
        { //::Squire::GTOPair::K

            typedef double ( ::Squire::GTOPair::*K_function_type)(  ) const;
            K_function_type K_function_value( &::Squire::GTOPair::K );

            GTOPair_exposer.def(
                "K"
                , K_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::K_AB

            typedef double ( ::Squire::GTOPair::*K_AB_function_type)(  ) const;
            K_AB_function_type K_AB_function_value( &::Squire::GTOPair::K_AB );

            GTOPair_exposer.def(
                "K_AB"
                , K_AB_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::K_CD

            typedef double ( ::Squire::GTOPair::*K_CD_function_type)(  ) const;
            K_CD_function_type K_CD_function_value( &::Squire::GTOPair::K_CD );

            GTOPair_exposer.def(
                "K_CD"
                , K_CD_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::P

            typedef ::SireMaths::Vector const & ( ::Squire::GTOPair::*P_function_type)(  ) const;
            P_function_type P_function_value( &::Squire::GTOPair::P );

            GTOPair_exposer.def(
                "P"
                , P_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::Squire::GTOPair::Q

            typedef ::SireMaths::Vector const & ( ::Squire::GTOPair::*Q_function_type)(  ) const;
            Q_function_type Q_function_value( &::Squire::GTOPair::Q );

            GTOPair_exposer.def(
                "Q"
                , Q_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::Squire::GTOPair::Q_AB

            typedef double ( ::Squire::GTOPair::*Q_AB_function_type)(  ) const;
            Q_AB_function_type Q_AB_function_value( &::Squire::GTOPair::Q_AB );

            GTOPair_exposer.def(
                "Q_AB"
                , Q_AB_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::Q_CD

            typedef double ( ::Squire::GTOPair::*Q_CD_function_type)(  ) const;
            Q_CD_function_type Q_CD_function_value( &::Squire::GTOPair::Q_CD );

            GTOPair_exposer.def(
                "Q_CD"
                , Q_CD_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::R2

            typedef double ( ::Squire::GTOPair::*R2_function_type)(  ) const;
            R2_function_type R2_function_value( &::Squire::GTOPair::R2 );

            GTOPair_exposer.def(
                "R2"
                , R2_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::T

            typedef double ( *T_function_type )( ::Squire::GTOPair const &,::Squire::GTOPair const & );
            T_function_type T_function_value( &::Squire::GTOPair::T );

            GTOPair_exposer.def(
                "T"
                , T_function_value
                , ( bp::arg("P"), bp::arg("Q") )
                , bp::release_gil_policy()
                , "Return the T value for the two passed GTOPair pairs\nT = rho (P-Q)^2\n" );

        }
        { //::Squire::GTOPair::W

            typedef ::SireMaths::Vector ( *W_function_type )( ::Squire::GTOPair const &,::Squire::GTOPair const & );
            W_function_type W_function_value( &::Squire::GTOPair::W );

            GTOPair_exposer.def(
                "W"
                , W_function_value
                , ( bp::arg("P"), bp::arg("Q") )
                , bp::release_gil_policy()
                , "Return the W value for the two passed GTOPair pairs\nW = (zeta(zeta+eta)) P + (eta(zeta+eta)) Q\n" );

        }
        { //::Squire::GTOPair::eta

            typedef double ( ::Squire::GTOPair::*eta_function_type)(  ) const;
            eta_function_type eta_function_value( &::Squire::GTOPair::eta );

            GTOPair_exposer.def(
                "eta"
                , eta_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::isNull

            typedef bool ( ::Squire::GTOPair::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::Squire::GTOPair::isNull );

            GTOPair_exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Return whether or not this pair is null" );

        }
        { //::Squire::GTOPair::null

            typedef ::Squire::GTOPair const & ( *null_function_type )(  );
            null_function_type null_function_value( &::Squire::GTOPair::null );

            GTOPair_exposer.def(
                "null"
                , null_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::Squire::GTOPair::preFac

            typedef double ( *preFac_function_type )( ::Squire::GTOPair const &,::Squire::GTOPair const & );
            preFac_function_type preFac_function_value( &::Squire::GTOPair::preFac );

            GTOPair_exposer.def(
                "preFac"
                , preFac_function_value
                , ( bp::arg("P"), bp::arg("Q") )
                , bp::release_gil_policy()
                , "Return the prefactor value for the two passed GTOPair pairs\npreFac = K_AB K_CD  Sqrt(zeta+eta)\n" );

        }
        { //::Squire::GTOPair::rho

            typedef double ( *rho_function_type )( ::Squire::GTOPair const &,::Squire::GTOPair const & );
            rho_function_type rho_function_value( &::Squire::GTOPair::rho );

            GTOPair_exposer.def(
                "rho"
                , rho_function_value
                , ( bp::arg("P"), bp::arg("Q") )
                , bp::release_gil_policy()
                , "Return the rho value for the two passed GTOPair pairs\nrho = (zeta  eta)  (zeta + eta)\n" );

        }
        { //::Squire::GTOPair::ss

            typedef double ( ::Squire::GTOPair::*ss_function_type)(  ) const;
            ss_function_type ss_function_value( &::Squire::GTOPair::ss );

            GTOPair_exposer.def(
                "ss"
                , ss_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::GTOPair::typeName );

            GTOPair_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::xi

            typedef double ( ::Squire::GTOPair::*xi_function_type)(  ) const;
            xi_function_type xi_function_value( &::Squire::GTOPair::xi );

            GTOPair_exposer.def(
                "xi"
                , xi_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::GTOPair::zeta

            typedef double ( ::Squire::GTOPair::*zeta_function_type)(  ) const;
            zeta_function_type zeta_function_value( &::Squire::GTOPair::zeta );

            GTOPair_exposer.def(
                "zeta"
                , zeta_function_value
                , bp::release_gil_policy()
                , "" );

        }
        GTOPair_exposer.staticmethod( "T" );
        GTOPair_exposer.staticmethod( "W" );
        GTOPair_exposer.staticmethod( "null" );
        GTOPair_exposer.staticmethod( "preFac" );
        GTOPair_exposer.staticmethod( "rho" );
        GTOPair_exposer.staticmethod( "typeName" );
        GTOPair_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::GTOPair >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GTOPair_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::GTOPair >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GTOPair_exposer.def_pickle(sire_pickle_suite< ::Squire::GTOPair >());
        GTOPair_exposer.def( "__str__", &__str__< ::Squire::GTOPair > );
        GTOPair_exposer.def( "__repr__", &__str__< ::Squire::GTOPair > );
    }

}
