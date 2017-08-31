// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PDBAtom.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/pdb2.h"

#include "SireMM/pdbparams.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atomelements.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "pdb2.h"

#include <iostream>

#include "pdb2.h"

SireIO::PDBAtom __copy__(const SireIO::PDBAtom &other){ return SireIO::PDBAtom(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PDBAtom_class(){

    { //::SireIO::PDBAtom
        typedef bp::class_< SireIO::PDBAtom > PDBAtom_exposer_t;
        PDBAtom_exposer_t PDBAtom_exposer = PDBAtom_exposer_t( "PDBAtom", "This class provides functionality for readingwriting\nProtein Data Bank (PDB) ATOM records.\n\nAuthor: Lester Hedges\n", bp::init< >("Default constructor.") );
        bp::scope PDBAtom_scope( PDBAtom_exposer );
        PDBAtom_exposer.def( bp::init< QString const &, QStringList & >(( bp::arg("line"), bp::arg("errors") ), "Constructor.") );
        { //::SireIO::PDBAtom::getChainId
        
            typedef ::QString ( ::SireIO::PDBAtom::*getChainId_function_type)(  ) const;
            getChainId_function_type getChainId_function_value( &::SireIO::PDBAtom::getChainId );
            
            PDBAtom_exposer.def( 
                "getChainId"
                , getChainId_function_value
                , "Get the chain id." );
        
        }
        { //::SireIO::PDBAtom::getName
        
            typedef ::QString ( ::SireIO::PDBAtom::*getName_function_type)(  ) const;
            getName_function_type getName_function_value( &::SireIO::PDBAtom::getName );
            
            PDBAtom_exposer.def( 
                "getName"
                , getName_function_value
                , "Get the atom name." );
        
        }
        { //::SireIO::PDBAtom::getResName
        
            typedef ::QString ( ::SireIO::PDBAtom::*getResName_function_type)(  ) const;
            getResName_function_type getResName_function_value( &::SireIO::PDBAtom::getResName );
            
            PDBAtom_exposer.def( 
                "getResName"
                , getResName_function_value
                , "Get the residue name." );
        
        }
        { //::SireIO::PDBAtom::getResNum
        
            typedef ::qint64 ( ::SireIO::PDBAtom::*getResNum_function_type)(  ) const;
            getResNum_function_type getResNum_function_value( &::SireIO::PDBAtom::getResNum );
            
            PDBAtom_exposer.def( 
                "getResNum"
                , getResNum_function_value
                , "Get the residue sequence number." );
        
        }
        { //::SireIO::PDBAtom::getSerial
        
            typedef ::qint64 ( ::SireIO::PDBAtom::*getSerial_function_type)(  ) const;
            getSerial_function_type getSerial_function_value( &::SireIO::PDBAtom::getSerial );
            
            PDBAtom_exposer.def( 
                "getSerial"
                , getSerial_function_value
                , "Get the atom serial number." );
        
        }
        { //::SireIO::PDBAtom::isTer
        
            typedef bool ( ::SireIO::PDBAtom::*isTer_function_type)(  ) const;
            isTer_function_type isTer_function_value( &::SireIO::PDBAtom::isTer );
            
            PDBAtom_exposer.def( 
                "isTer"
                , isTer_function_value
                , "Whether this is a terminal atom." );
        
        }
        { //::SireIO::PDBAtom::setAnisTemp
        
            typedef void ( ::SireIO::PDBAtom::*setAnisTemp_function_type)( ::QString const &,::QString const &,::QStringList & ) ;
            setAnisTemp_function_type setAnisTemp_function_value( &::SireIO::PDBAtom::setAnisTemp );
            
            PDBAtom_exposer.def( 
                "setAnisTemp"
                , setAnisTemp_function_value
                , ( bp::arg("line1"), bp::arg("line2"), bp::arg("errors") )
                , "Set anisotropic temperature record data." );
        
        }
        { //::SireIO::PDBAtom::setTerminal
        
            typedef void ( ::SireIO::PDBAtom::*setTerminal_function_type)( bool ) ;
            setTerminal_function_type setTerminal_function_value( &::SireIO::PDBAtom::setTerminal );
            
            PDBAtom_exposer.def( 
                "setTerminal"
                , setTerminal_function_value
                , ( bp::arg("_isTer") )
                , "Set the terminal atom flag." );
        
        }
        { //::SireIO::PDBAtom::toPDBLine
        
            typedef ::QString ( ::SireIO::PDBAtom::*toPDBLine_function_type)(  ) const;
            toPDBLine_function_type toPDBLine_function_value( &::SireIO::PDBAtom::toPDBLine );
            
            PDBAtom_exposer.def( 
                "toPDBLine"
                , toPDBLine_function_value
                , "Generate a PDB record from the atom data." );
        
        }
        { //::SireIO::PDBAtom::toString
        
            typedef ::QString ( ::SireIO::PDBAtom::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::PDBAtom::toString );
            
            PDBAtom_exposer.def( 
                "toString"
                , toString_function_value
                , "Generate a string representation of the object." );
        
        }
        { //::SireIO::PDBAtom::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::PDBAtom::typeName );
            
            PDBAtom_exposer.def( 
                "typeName"
                , typeName_function_value
                , "Return the C++ name for this class" );
        
        }
        PDBAtom_exposer.staticmethod( "typeName" );
        PDBAtom_exposer.def( "__copy__", &__copy__);
        PDBAtom_exposer.def( "__deepcopy__", &__copy__);
        PDBAtom_exposer.def( "clone", &__copy__);
        PDBAtom_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::PDBAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBAtom_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::PDBAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PDBAtom_exposer.def( "__str__", &__str__< ::SireIO::PDBAtom > );
        PDBAtom_exposer.def( "__repr__", &__str__< ::SireIO::PDBAtom > );
    }

}
