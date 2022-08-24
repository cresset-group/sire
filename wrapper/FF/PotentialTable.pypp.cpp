// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PotentialTable.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleculeview.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "potentialtable.h"

#include "potentialtable.h"

SireFF::PotentialTable __copy__(const SireFF::PotentialTable &other){ return SireFF::PotentialTable(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireFF::PotentialTable&){ return "SireFF::PotentialTable";}

#include "Helpers/release_gil_policy.hpp"

void register_PotentialTable_class(){

    { //::SireFF::PotentialTable
        typedef bp::class_< SireFF::PotentialTable > PotentialTable_exposer_t;
        PotentialTable_exposer_t PotentialTable_exposer = PotentialTable_exposer_t( "PotentialTable", "A PotentialTable is a workspace within which all of the potentials\nat the points of atoms in molecules, or the points on a grid\nmay be stored. A PotentialTable is used as storing the potentials\nmay require lots of memory, and continually\ncreating a deleting such large amouts of memory would be inefficient.\nAlso, using a PotentialTable allows for potentials to be accumalated directly,\nrather than requiring intermediate storage space for the\nindividual components.\n\nYou create a potential table to hold all of the potentials at all of\nthe atoms of all of the molecules in a specified MoleculeGroup,\nor at all of the points of a passed Grid.\n\nThe potentials are held in an array that holds the potentials for\nthe molecules in the same order as the molecules appear\nin the molecule group, or in an array that holds the potentials\nin the same order as they appear in the grid.\nThe potential table also comes with an index so you can quickly\nlook up the potential for a specific molecule.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope PotentialTable_scope( PotentialTable_exposer );
        PotentialTable_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("molgroup") ), "Construct the table to hold the potentials at the points of all\nof the atoms in the CutGroups that are viewed in the molecules\nin molgroup") );
        PotentialTable_exposer.def( bp::init< SireVol::Grid const & >(( bp::arg("grid") ), "Construct the table to hold the potentials at all of the points\nin the passed grid") );
        PotentialTable_exposer.def( bp::init< QVector< SireBase::PropPtr< SireVol::Grid > > const & >(( bp::arg("grids") ), "Construct the table to hold the potentials at all of the points\nof all of the passed grids") );
        PotentialTable_exposer.def( bp::init< SireMol::MoleculeGroup const &, SireVol::Grid const & >(( bp::arg("molgroup"), bp::arg("grid") ), "Construct the table to hold the potentials at the points of all\nof the atoms in the CutGroups that are viewed in the molecules\nin molgroup, and all of the grid points in the passed grid") );
        PotentialTable_exposer.def( bp::init< SireMol::MoleculeGroup const &, QVector< SireBase::PropPtr< SireVol::Grid > > const & >(( bp::arg("molgroup"), bp::arg("grids") ), "Construct the table to hold the potentials at the points of all\nof the atoms in the CutGroups that are viewed in the molecules\nin molgroup, and all of the grid points in the passed grids") );
        PotentialTable_exposer.def( bp::init< SireFF::PotentialTable const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireFF::PotentialTable::add
        
            typedef void ( ::SireFF::PotentialTable::*add_function_type)( ::SireFF::PotentialTable const & ) ;
            add_function_type add_function_value( &::SireFF::PotentialTable::add );
            
            PotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "Add the contents of the table other onto this table. This will only\nadd the potentials for the molecules  grids that are in both tables" );
        
        }
        { //::SireFF::PotentialTable::add
        
            typedef void ( ::SireFF::PotentialTable::*add_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            add_function_type add_function_value( &::SireFF::PotentialTable::add );
            
            PotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("potential") )
                , bp::release_gil_policy()
                , "Add the potential potential onto all of the atom  grid points in this table" );
        
        }
        { //::SireFF::PotentialTable::assertContainsTableFor
        
            typedef void ( ::SireFF::PotentialTable::*assertContainsTableFor_function_type)( ::SireMol::MolNum ) const;
            assertContainsTableFor_function_type assertContainsTableFor_function_value( &::SireFF::PotentialTable::assertContainsTableFor );
            
            PotentialTable_exposer.def( 
                "assertContainsTableFor"
                , assertContainsTableFor_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Assert that this contains a table for the molecule with number molnum\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::assertContainsTableFor
        
            typedef void ( ::SireFF::PotentialTable::*assertContainsTableFor_function_type)( ::SireVol::Grid const & ) const;
            assertContainsTableFor_function_type assertContainsTableFor_function_value( &::SireFF::PotentialTable::assertContainsTableFor );
            
            PotentialTable_exposer.def( 
                "assertContainsTableFor"
                , assertContainsTableFor_function_value
                , ( bp::arg("grid") )
                , bp::release_gil_policy()
                , "Assert that this contains a table for the passed grid\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::constGetTable
        
            typedef ::SireFF::MolPotentialTable const & ( ::SireFF::PotentialTable::*constGetTable_function_type)( ::SireMol::MolNum ) const;
            constGetTable_function_type constGetTable_function_value( &::SireFF::PotentialTable::constGetTable );
            
            PotentialTable_exposer.def( 
                "constGetTable"
                , constGetTable_function_value
                , ( bp::arg("molnum") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the potential table for the passed grid\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::constGetTable
        
            typedef ::SireFF::GridPotentialTable const & ( ::SireFF::PotentialTable::*constGetTable_function_type)( ::SireVol::Grid const & ) const;
            constGetTable_function_type constGetTable_function_value( &::SireFF::PotentialTable::constGetTable );
            
            PotentialTable_exposer.def( 
                "constGetTable"
                , constGetTable_function_value
                , ( bp::arg("grid") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the potential table for the passed grid\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::contains
        
            typedef bool ( ::SireFF::PotentialTable::*contains_function_type)( ::SireMol::MolNum ) const;
            contains_function_type contains_function_value( &::SireFF::PotentialTable::contains );
            
            PotentialTable_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Return whether or not this contains a table for the passed grid" );
        
        }
        { //::SireFF::PotentialTable::contains
        
            typedef bool ( ::SireFF::PotentialTable::*contains_function_type)( ::SireVol::Grid const & ) const;
            contains_function_type contains_function_value( &::SireFF::PotentialTable::contains );
            
            PotentialTable_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("grid") )
                , bp::release_gil_policy()
                , "Return whether or not this contains a table for the passed grid" );
        
        }
        { //::SireFF::PotentialTable::divide
        
            typedef void ( ::SireFF::PotentialTable::*divide_function_type)( double ) ;
            divide_function_type divide_function_value( &::SireFF::PotentialTable::divide );
            
            PotentialTable_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "Divide the potential at all atom and grid points by value" );
        
        }
        { //::SireFF::PotentialTable::getTable
        
            typedef ::SireFF::MolPotentialTable const & ( ::SireFF::PotentialTable::*getTable_function_type)( ::SireMol::MolNum ) const;
            getTable_function_type getTable_function_value( &::SireFF::PotentialTable::getTable );
            
            PotentialTable_exposer.def( 
                "getTable"
                , getTable_function_value
                , ( bp::arg("molnum") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the potential table for the passed grid\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::getTable
        
            typedef ::SireFF::GridPotentialTable const & ( ::SireFF::PotentialTable::*getTable_function_type)( ::SireVol::Grid const & ) const;
            getTable_function_type getTable_function_value( &::SireFF::PotentialTable::getTable );
            
            PotentialTable_exposer.def( 
                "getTable"
                , getTable_function_value
                , ( bp::arg("grid") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the potential table for the passed grid\nThrow: SireError::unavailable_resource\n" );
        
        }
        { //::SireFF::PotentialTable::index
        
            typedef ::QHash< SireMol::MolNum, int > const & ( ::SireFF::PotentialTable::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireFF::PotentialTable::index );
            
            PotentialTable_exposer.def( 
                "index"
                , index_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireFF::PotentialTable::indexOf
        
            typedef int ( ::SireFF::PotentialTable::*indexOf_function_type)( ::SireMol::MolNum ) const;
            indexOf_function_type indexOf_function_value( &::SireFF::PotentialTable::indexOf );
            
            PotentialTable_exposer.def( 
                "indexOf"
                , indexOf_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Return the index of the molecule with number molnum in this table\nThrow: SireMol::missing_molecule\n" );
        
        }
        { //::SireFF::PotentialTable::initialiseTable
        
            typedef void ( ::SireFF::PotentialTable::*initialiseTable_function_type)( ::SireMol::MolNum ) ;
            initialiseTable_function_type initialiseTable_function_value( &::SireFF::PotentialTable::initialiseTable );
            
            PotentialTable_exposer.def( 
                "initialiseTable"
                , initialiseTable_function_value
                , ( bp::arg("molnum") )
                , bp::release_gil_policy()
                , "Initialise the table for the molecule with number molnum" );
        
        }
        { //::SireFF::PotentialTable::initialiseTable
        
            typedef void ( ::SireFF::PotentialTable::*initialiseTable_function_type)( ::SireVol::Grid const & ) ;
            initialiseTable_function_type initialiseTable_function_value( &::SireFF::PotentialTable::initialiseTable );
            
            PotentialTable_exposer.def( 
                "initialiseTable"
                , initialiseTable_function_value
                , ( bp::arg("grid") )
                , bp::release_gil_policy()
                , "Initialise the table for the grid grid" );
        
        }
        { //::SireFF::PotentialTable::initialiseTables
        
            typedef void ( ::SireFF::PotentialTable::*initialiseTables_function_type)(  ) ;
            initialiseTables_function_type initialiseTables_function_value( &::SireFF::PotentialTable::initialiseTables );
            
            PotentialTable_exposer.def( 
                "initialiseTables"
                , initialiseTables_function_value
                , bp::release_gil_policy()
                , "Initialise all of the tables to have a zero potential" );
        
        }
        { //::SireFF::PotentialTable::isEmpty
        
            typedef bool ( ::SireFF::PotentialTable::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireFF::PotentialTable::isEmpty );
            
            PotentialTable_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this table is empty" );
        
        }
        { //::SireFF::PotentialTable::molNums
        
            typedef ::QList< SireMol::MolNum > ( ::SireFF::PotentialTable::*molNums_function_type)(  ) const;
            molNums_function_type molNums_function_value( &::SireFF::PotentialTable::molNums );
            
            PotentialTable_exposer.def( 
                "molNums"
                , molNums_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::PotentialTable::multiply
        
            typedef void ( ::SireFF::PotentialTable::*multiply_function_type)( double ) ;
            multiply_function_type multiply_function_value( &::SireFF::PotentialTable::multiply );
            
            PotentialTable_exposer.def( 
                "multiply"
                , multiply_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "Multiply the potential at all atom and grid points by value" );
        
        }
        { //::SireFF::PotentialTable::nGrids
        
            typedef int ( ::SireFF::PotentialTable::*nGrids_function_type)(  ) const;
            nGrids_function_type nGrids_function_value( &::SireFF::PotentialTable::nGrids );
            
            PotentialTable_exposer.def( 
                "nGrids"
                , nGrids_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::PotentialTable::nMolecules
        
            typedef int ( ::SireFF::PotentialTable::*nMolecules_function_type)(  ) const;
            nMolecules_function_type nMolecules_function_value( &::SireFF::PotentialTable::nMolecules );
            
            PotentialTable_exposer.def( 
                "nMolecules"
                , nMolecules_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        PotentialTable_exposer.def( bp::self != bp::self );
        PotentialTable_exposer.def( bp::self * bp::other< double >() );
        PotentialTable_exposer.def( bp::self + bp::self );
        PotentialTable_exposer.def( bp::self + bp::other< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > >() );
        PotentialTable_exposer.def( bp::self - bp::self );
        PotentialTable_exposer.def( bp::self - bp::other< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > >() );
        PotentialTable_exposer.def( -bp::self );
        PotentialTable_exposer.def( bp::self / bp::other< double >() );
        { //::SireFF::PotentialTable::operator=
        
            typedef ::SireFF::PotentialTable & ( ::SireFF::PotentialTable::*assign_function_type)( ::SireFF::PotentialTable const & ) ;
            assign_function_type assign_function_value( &::SireFF::PotentialTable::operator= );
            
            PotentialTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireFF::PotentialTable::operator=
        
            typedef ::SireFF::PotentialTable & ( ::SireFF::PotentialTable::*assign_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            assign_function_type assign_function_value( &::SireFF::PotentialTable::operator= );
            
            PotentialTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("potential") )
                , bp::return_self< >()
                , "" );
        
        }
        PotentialTable_exposer.def( bp::self == bp::self );
        { //::SireFF::PotentialTable::setAll
        
            typedef void ( ::SireFF::PotentialTable::*setAll_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            setAll_function_type setAll_function_value( &::SireFF::PotentialTable::setAll );
            
            PotentialTable_exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("potential") )
                , bp::release_gil_policy()
                , "Set the potential at all atom and grid points equal to potential" );
        
        }
        { //::SireFF::PotentialTable::subtract
        
            typedef void ( ::SireFF::PotentialTable::*subtract_function_type)( ::SireFF::PotentialTable const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::PotentialTable::subtract );
            
            PotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "Subtract the contents of the table other from this table. This will only\nsubtract the potentials for the molecules  grids that are in both tables" );
        
        }
        { //::SireFF::PotentialTable::subtract
        
            typedef void ( ::SireFF::PotentialTable::*subtract_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::PotentialTable::subtract );
            
            PotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("potential") )
                , bp::release_gil_policy()
                , "Subtract the potential potential from all of the atom  grid points in this table" );
        
        }
        { //::SireFF::PotentialTable::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::PotentialTable::typeName );
            
            PotentialTable_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::PotentialTable::what
        
            typedef char const * ( ::SireFF::PotentialTable::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::PotentialTable::what );
            
            PotentialTable_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        PotentialTable_exposer.staticmethod( "typeName" );
        PotentialTable_exposer.def( "__copy__", &__copy__);
        PotentialTable_exposer.def( "__deepcopy__", &__copy__);
        PotentialTable_exposer.def( "clone", &__copy__);
        PotentialTable_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::PotentialTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PotentialTable_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::PotentialTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PotentialTable_exposer.def_pickle(sire_pickle_suite< ::SireFF::PotentialTable >());
        PotentialTable_exposer.def( "__str__", &pvt_get_name);
        PotentialTable_exposer.def( "__repr__", &pvt_get_name);
    }

}
