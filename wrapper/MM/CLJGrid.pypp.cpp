// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CLJGrid.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/multidouble.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "cljcalculator.h"

#include "cljgrid.h"

#include "cljshiftfunction.h"

#include <QElapsedTimer>

#include <QMutex>

#include "cljgrid.h"

SireMM::CLJGrid __copy__(const SireMM::CLJGrid &other){ return SireMM::CLJGrid(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJGrid_class(){

    { //::SireMM::CLJGrid
        typedef bp::class_< SireMM::CLJGrid > CLJGrid_exposer_t;
        CLJGrid_exposer_t CLJGrid_exposer = CLJGrid_exposer_t( "CLJGrid", "This class holds a 3D grid of the coulomb potential\nat points in space created by a set of atoms, and calculates\nthe coulomb and LJ energies of atoms with that grid\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope CLJGrid_scope( CLJGrid_exposer );
        CLJGrid_exposer.def( bp::init< SireVol::AABox const & >(( bp::arg("grid_dimensions") ), "Construct, specifying the dimensions of the grid") );
        CLJGrid_exposer.def( bp::init< SireVol::AABox const &, SireUnits::Dimension::Length >(( bp::arg("grid_dimensions"), bp::arg("grid_spacing") ), "Construct, specifying the dimensions and spacing for the grid") );
        CLJGrid_exposer.def( bp::init< SireVol::GridInfo const & >(( bp::arg("grid") ), "Construct, specifying the grid") );
        CLJGrid_exposer.def( bp::init< SireMM::CLJFunction const & >(( bp::arg("cljfunc") ), "Construct, specifying the function to use to calculate the energy") );
        CLJGrid_exposer.def( bp::init< SireMM::CLJFunction const &, SireVol::AABox const & >(( bp::arg("cljfunc"), bp::arg("grid_dimensions") ), "Construct, specifying the function to use to calculate the energy and\nthe grid dimensions") );
        CLJGrid_exposer.def( bp::init< SireMM::CLJFunction const &, SireVol::AABox const &, SireUnits::Dimension::Length >(( bp::arg("cljfunc"), bp::arg("grid_dimensions"), bp::arg("grid_spacing") ), "Construct, specifying the function to use to calculate the energy and\nthe grid dimensions and grid spacing") );
        CLJGrid_exposer.def( bp::init< SireMM::CLJFunction const &, SireVol::GridInfo const & >(( bp::arg("cljfunc"), bp::arg("grid") ), "Construct, specifying the grid and the energy function") );
        CLJGrid_exposer.def( bp::init< SireMM::CLJGrid const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::CLJGrid::addFixedAtoms
        
            typedef void ( ::SireMM::CLJGrid::*addFixedAtoms_function_type)( ::SireMM::CLJAtoms const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::CLJGrid::addFixedAtoms );
            
            CLJGrid_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("atoms") )
                , "Add the passed atoms onto the set of fixed atoms" );
        
        }
        { //::SireMM::CLJGrid::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJGrid::*calculate_function_type)( ::SireMM::CLJAtoms const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJGrid::calculate );
            
            CLJGrid_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms") )
                , "Return the coulomb and LJ energies of the passed atoms with the fixed\natoms added to this grid" );
        
        }
        { //::SireMM::CLJGrid::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJGrid::*calculate_function_type)( ::SireMM::CLJBoxes const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJGrid::calculate );
            
            CLJGrid_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms") )
                , "Return the coulomb and LJ energies of the passed atoms with the fixed\natoms added to this grid" );
        
        }
        { //::SireMM::CLJGrid::cljFunction
        
            typedef ::SireMM::CLJFunction const & ( ::SireMM::CLJGrid::*cljFunction_function_type)(  ) const;
            cljFunction_function_type cljFunction_function_value( &::SireMM::CLJGrid::cljFunction );
            
            CLJGrid_exposer.def( 
                "cljFunction"
                , cljFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the function used to calculate the coulomb and LJ energy" );
        
        }
        { //::SireMM::CLJGrid::coulomb
        
            typedef double ( ::SireMM::CLJGrid::*coulomb_function_type)( ::SireMM::CLJAtoms const & ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJGrid::coulomb );
            
            CLJGrid_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms") )
                , "Return the coulomb energy of the passed atoms interacting with\nthe fixed atoms on this grid" );
        
        }
        { //::SireMM::CLJGrid::coulomb
        
            typedef double ( ::SireMM::CLJGrid::*coulomb_function_type)( ::SireMM::CLJBoxes const & ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJGrid::coulomb );
            
            CLJGrid_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms") )
                , "Return the coulomb energy of the passed atoms interacting with\nthe fixed atoms on this grid" );
        
        }
        { //::SireMM::CLJGrid::disableGrid
        
            typedef void ( ::SireMM::CLJGrid::*disableGrid_function_type)(  ) ;
            disableGrid_function_type disableGrid_function_value( &::SireMM::CLJGrid::disableGrid );
            
            CLJGrid_exposer.def( 
                "disableGrid"
                , disableGrid_function_value
                , "Disable use of the grid" );
        
        }
        { //::SireMM::CLJGrid::disableParallelCalculation
        
            typedef void ( ::SireMM::CLJGrid::*disableParallelCalculation_function_type)(  ) ;
            disableParallelCalculation_function_type disableParallelCalculation_function_value( &::SireMM::CLJGrid::disableParallelCalculation );
            
            CLJGrid_exposer.def( 
                "disableParallelCalculation"
                , disableParallelCalculation_function_value
                , "Disable use of the parallel algorithm for calculating energies" );
        
        }
        { //::SireMM::CLJGrid::disableReproducibleCalculation
        
            typedef void ( ::SireMM::CLJGrid::*disableReproducibleCalculation_function_type)(  ) ;
            disableReproducibleCalculation_function_type disableReproducibleCalculation_function_value( &::SireMM::CLJGrid::disableReproducibleCalculation );
            
            CLJGrid_exposer.def( 
                "disableReproducibleCalculation"
                , disableReproducibleCalculation_function_value
                , "Turn off an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will not be identical)" );
        
        }
        { //::SireMM::CLJGrid::enableGrid
        
            typedef void ( ::SireMM::CLJGrid::*enableGrid_function_type)(  ) ;
            enableGrid_function_type enableGrid_function_value( &::SireMM::CLJGrid::enableGrid );
            
            CLJGrid_exposer.def( 
                "enableGrid"
                , enableGrid_function_value
                , "Enable used of the grid - note that the grid may\nstill be disabled if the CLJFunction is not compatible with\nuse of a grid" );
        
        }
        { //::SireMM::CLJGrid::enableParallelCalculation
        
            typedef void ( ::SireMM::CLJGrid::*enableParallelCalculation_function_type)(  ) ;
            enableParallelCalculation_function_type enableParallelCalculation_function_value( &::SireMM::CLJGrid::enableParallelCalculation );
            
            CLJGrid_exposer.def( 
                "enableParallelCalculation"
                , enableParallelCalculation_function_value
                , "Enable use of a parallel multicore algorithm to calculate energies" );
        
        }
        { //::SireMM::CLJGrid::enableReproducibleCalculation
        
            typedef void ( ::SireMM::CLJGrid::*enableReproducibleCalculation_function_type)(  ) ;
            enableReproducibleCalculation_function_type enableReproducibleCalculation_function_value( &::SireMM::CLJGrid::enableReproducibleCalculation );
            
            CLJGrid_exposer.def( 
                "enableReproducibleCalculation"
                , enableReproducibleCalculation_function_value
                , "Turn on an energy summing algorithm that guarantees the same energy\nregardless of whether a single core or multicore calculation is being\nperformed (i.e. rounding errors in both cases will be identical)" );
        
        }
        { //::SireMM::CLJGrid::fixedAtoms
        
            typedef ::SireMM::CLJAtoms ( ::SireMM::CLJGrid::*fixedAtoms_function_type)(  ) const;
            fixedAtoms_function_type fixedAtoms_function_value( &::SireMM::CLJGrid::fixedAtoms );
            
            CLJGrid_exposer.def( 
                "fixedAtoms"
                , fixedAtoms_function_value
                , "Return all of the fixed atoms" );
        
        }
        { //::SireMM::CLJGrid::functionSupportsGrid
        
            typedef bool ( ::SireMM::CLJGrid::*functionSupportsGrid_function_type)(  ) const;
            functionSupportsGrid_function_type functionSupportsGrid_function_value( &::SireMM::CLJGrid::functionSupportsGrid );
            
            CLJGrid_exposer.def( 
                "functionSupportsGrid"
                , functionSupportsGrid_function_value
                , "Return whether or not the CLJFunction supports use of the grid.\nTo support a grid, the function must intrinsically support the grid,\nand the coulomb cutoff must be much greater than the LJ cutoff" );
        
        }
        { //::SireMM::CLJGrid::grid
        
            typedef ::SireVol::GridInfo ( ::SireMM::CLJGrid::*grid_function_type)(  ) const;
            grid_function_type grid_function_value( &::SireMM::CLJGrid::grid );
            
            CLJGrid_exposer.def( 
                "grid"
                , grid_function_value
                , "Return the grid" );
        
        }
        { //::SireMM::CLJGrid::gridBuffer
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::CLJGrid::*gridBuffer_function_type)(  ) const;
            gridBuffer_function_type gridBuffer_function_value( &::SireMM::CLJGrid::gridBuffer );
            
            CLJGrid_exposer.def( 
                "gridBuffer"
                , gridBuffer_function_value
                , "Return the grid buffer" );
        
        }
        { //::SireMM::CLJGrid::gridDimensions
        
            typedef ::SireVol::AABox ( ::SireMM::CLJGrid::*gridDimensions_function_type)(  ) const;
            gridDimensions_function_type gridDimensions_function_value( &::SireMM::CLJGrid::gridDimensions );
            
            CLJGrid_exposer.def( 
                "gridDimensions"
                , gridDimensions_function_value
                , "Return the dimensions of the grid" );
        
        }
        { //::SireMM::CLJGrid::gridSpacing
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::CLJGrid::*gridSpacing_function_type)(  ) const;
            gridSpacing_function_type gridSpacing_function_value( &::SireMM::CLJGrid::gridSpacing );
            
            CLJGrid_exposer.def( 
                "gridSpacing"
                , gridSpacing_function_value
                , "Return the grid spacing" );
        
        }
        { //::SireMM::CLJGrid::idOfFixedAtom
        
            typedef ::qint32 ( *idOfFixedAtom_function_type )(  );
            idOfFixedAtom_function_type idOfFixedAtom_function_value( &::SireMM::CLJGrid::idOfFixedAtom );
            
            CLJGrid_exposer.def( 
                "idOfFixedAtom"
                , idOfFixedAtom_function_value
                , "Return the ID number of a fixed atom. All fixed atoms are given this ID, so that\nyou can mask out interactions with them. This is a negative number and unlikely\nto be used by any other part of the code" );
        
        }
        { //::SireMM::CLJGrid::isEmpty
        
            typedef bool ( ::SireMM::CLJGrid::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::CLJGrid::isEmpty );
            
            CLJGrid_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireMM::CLJGrid::lj
        
            typedef double ( ::SireMM::CLJGrid::*lj_function_type)( ::SireMM::CLJAtoms const & ) const;
            lj_function_type lj_function_value( &::SireMM::CLJGrid::lj );
            
            CLJGrid_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms") )
                , "Return the LJ energy of the passed atoms interacting with\nthe fixed atoms on this grid" );
        
        }
        { //::SireMM::CLJGrid::lj
        
            typedef double ( ::SireMM::CLJGrid::*lj_function_type)( ::SireMM::CLJBoxes const & ) const;
            lj_function_type lj_function_value( &::SireMM::CLJGrid::lj );
            
            CLJGrid_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms") )
                , "Return the LJ energy of the passed atoms interacting with\nthe fixed atoms on this grid" );
        
        }
        { //::SireMM::CLJGrid::nFixedAtoms
        
            typedef int ( ::SireMM::CLJGrid::*nFixedAtoms_function_type)(  ) const;
            nFixedAtoms_function_type nFixedAtoms_function_value( &::SireMM::CLJGrid::nFixedAtoms );
            
            CLJGrid_exposer.def( 
                "nFixedAtoms"
                , nFixedAtoms_function_value
                , "Return the number of fixed atoms" );
        
        }
        CLJGrid_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJGrid::operator=
        
            typedef ::SireMM::CLJGrid & ( ::SireMM::CLJGrid::*assign_function_type)( ::SireMM::CLJGrid const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJGrid::operator= );
            
            CLJGrid_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CLJGrid_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJGrid::setCLJFunction
        
            typedef void ( ::SireMM::CLJGrid::*setCLJFunction_function_type)( ::SireMM::CLJFunction const & ) ;
            setCLJFunction_function_type setCLJFunction_function_value( &::SireMM::CLJGrid::setCLJFunction );
            
            CLJGrid_exposer.def( 
                "setCLJFunction"
                , setCLJFunction_function_value
                , ( bp::arg("function") )
                , "Set the function used to calculate the coulomb and LJ energy" );
        
        }
        { //::SireMM::CLJGrid::setFixedAtoms
        
            typedef void ( ::SireMM::CLJGrid::*setFixedAtoms_function_type)( ::SireMM::CLJAtoms const & ) ;
            setFixedAtoms_function_type setFixedAtoms_function_value( &::SireMM::CLJGrid::setFixedAtoms );
            
            CLJGrid_exposer.def( 
                "setFixedAtoms"
                , setFixedAtoms_function_value
                , ( bp::arg("atoms") )
                , "Set the fixed atoms equal to the passed atoms" );
        
        }
        { //::SireMM::CLJGrid::setFixedAtoms
        
            typedef void ( ::SireMM::CLJGrid::*setFixedAtoms_function_type)( ::SireMM::CLJBoxes const & ) ;
            setFixedAtoms_function_type setFixedAtoms_function_value( &::SireMM::CLJGrid::setFixedAtoms );
            
            CLJGrid_exposer.def( 
                "setFixedAtoms"
                , setFixedAtoms_function_value
                , ( bp::arg("atoms") )
                , "Set the fixed atoms equal to the passed atoms" );
        
        }
        { //::SireMM::CLJGrid::setGrid
        
            typedef void ( ::SireMM::CLJGrid::*setGrid_function_type)( ::SireVol::GridInfo const & ) ;
            setGrid_function_type setGrid_function_value( &::SireMM::CLJGrid::setGrid );
            
            CLJGrid_exposer.def( 
                "setGrid"
                , setGrid_function_value
                , ( bp::arg("grid") )
                , "Set the grid to be used for the optimised calculation" );
        
        }
        { //::SireMM::CLJGrid::setGridBuffer
        
            typedef void ( ::SireMM::CLJGrid::*setGridBuffer_function_type)( ::SireUnits::Dimension::Length ) ;
            setGridBuffer_function_type setGridBuffer_function_value( &::SireMM::CLJGrid::setGridBuffer );
            
            CLJGrid_exposer.def( 
                "setGridBuffer"
                , setGridBuffer_function_value
                , ( bp::arg("grid_buffer") )
                , "Set the grid buffer" );
        
        }
        { //::SireMM::CLJGrid::setGridDimensions
        
            typedef void ( ::SireMM::CLJGrid::*setGridDimensions_function_type)( ::SireVol::AABox const & ) ;
            setGridDimensions_function_type setGridDimensions_function_value( &::SireMM::CLJGrid::setGridDimensions );
            
            CLJGrid_exposer.def( 
                "setGridDimensions"
                , setGridDimensions_function_value
                , ( bp::arg("grid_dimensions") )
                , "Set the dimensions of the grid" );
        
        }
        { //::SireMM::CLJGrid::setGridDimensions
        
            typedef void ( ::SireMM::CLJGrid::*setGridDimensions_function_type)( ::SireMM::CLJAtoms const & ) ;
            setGridDimensions_function_type setGridDimensions_function_value( &::SireMM::CLJGrid::setGridDimensions );
            
            CLJGrid_exposer.def( 
                "setGridDimensions"
                , setGridDimensions_function_value
                , ( bp::arg("atoms") )
                , "Set the dimensions of the grid so that it encompasses all of the atoms in atoms\n(plus a gridBuffer() buffer around all atoms)" );
        
        }
        { //::SireMM::CLJGrid::setGridDimensions
        
            typedef void ( ::SireMM::CLJGrid::*setGridDimensions_function_type)( ::SireMM::CLJAtoms const &,::SireUnits::Dimension::Length ) ;
            setGridDimensions_function_type setGridDimensions_function_value( &::SireMM::CLJGrid::setGridDimensions );
            
            CLJGrid_exposer.def( 
                "setGridDimensions"
                , setGridDimensions_function_value
                , ( bp::arg("atoms"), bp::arg("grid_spacing") )
                , "Set the dimensions of the grid so that it encompasses all of the atoms in atoms\n(plus a gridBuffer() buffer around all atoms) using a grid with spacing grid_spacing" );
        
        }
        { //::SireMM::CLJGrid::setGridDimensions
        
            typedef void ( ::SireMM::CLJGrid::*setGridDimensions_function_type)( ::SireMM::CLJAtoms const &,::SireUnits::Dimension::Length,::SireUnits::Dimension::Length ) ;
            setGridDimensions_function_type setGridDimensions_function_value( &::SireMM::CLJGrid::setGridDimensions );
            
            CLJGrid_exposer.def( 
                "setGridDimensions"
                , setGridDimensions_function_value
                , ( bp::arg("atoms"), bp::arg("grid_spacing"), bp::arg("buffer") )
                , "Set the dimensions of the grid so that it encompasses all of the atoms in atoms\n(with a buffer of buffer around all atoms) using a grid with spacing grid_spacing" );
        
        }
        { //::SireMM::CLJGrid::setGridSpacing
        
            typedef void ( ::SireMM::CLJGrid::*setGridSpacing_function_type)( ::SireUnits::Dimension::Length ) ;
            setGridSpacing_function_type setGridSpacing_function_value( &::SireMM::CLJGrid::setGridSpacing );
            
            CLJGrid_exposer.def( 
                "setGridSpacing"
                , setGridSpacing_function_value
                , ( bp::arg("grid_spacing") )
                , "Set the grid spacing" );
        
        }
        { //::SireMM::CLJGrid::setUseGrid
        
            typedef void ( ::SireMM::CLJGrid::*setUseGrid_function_type)( bool ) ;
            setUseGrid_function_type setUseGrid_function_value( &::SireMM::CLJGrid::setUseGrid );
            
            CLJGrid_exposer.def( 
                "setUseGrid"
                , setUseGrid_function_value
                , ( bp::arg("on") )
                , "Switch on or off the use of a grid - note that the grid may\nstill be disabled if the CLJFunction is not compatible with\nuse of a grid" );
        
        }
        { //::SireMM::CLJGrid::setUseParallelCalculation
        
            typedef void ( ::SireMM::CLJGrid::*setUseParallelCalculation_function_type)( bool ) ;
            setUseParallelCalculation_function_type setUseParallelCalculation_function_value( &::SireMM::CLJGrid::setUseParallelCalculation );
            
            CLJGrid_exposer.def( 
                "setUseParallelCalculation"
                , setUseParallelCalculation_function_value
                , ( bp::arg("on") )
                , "Switch on or off use of a parallel multicore algorithm for calculating\nenergies" );
        
        }
        { //::SireMM::CLJGrid::setUseReproducibleCalculation
        
            typedef void ( ::SireMM::CLJGrid::*setUseReproducibleCalculation_function_type)( bool ) ;
            setUseReproducibleCalculation_function_type setUseReproducibleCalculation_function_value( &::SireMM::CLJGrid::setUseReproducibleCalculation );
            
            CLJGrid_exposer.def( 
                "setUseReproducibleCalculation"
                , setUseReproducibleCalculation_function_value
                , ( bp::arg("on") )
                , "Switch on or off use of an energy summing algorithm that guarantees the\nsame energy regardless of whether a single core or multicore calculation\nis being performed" );
        
        }
        { //::SireMM::CLJGrid::toString
        
            typedef ::QString ( ::SireMM::CLJGrid::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJGrid::toString );
            
            CLJGrid_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMM::CLJGrid::total
        
            typedef void ( ::SireMM::CLJGrid::*total_function_type)( ::SireMM::CLJAtoms const &,double &,double & ) const;
            total_function_type total_function_value( &::SireMM::CLJGrid::total );
            
            CLJGrid_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") )
                , "Calculate the total energy of interaction between the passed atoms and\nall of the atoms added to the grid" );
        
        }
        { //::SireMM::CLJGrid::total
        
            typedef void ( ::SireMM::CLJGrid::*total_function_type)( ::SireMM::CLJBoxes const &,double &,double & ) const;
            total_function_type total_function_value( &::SireMM::CLJGrid::total );
            
            CLJGrid_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") )
                , "Calculate the total energy of interaction between the passed atoms and\nall of the atoms added to the grid" );
        
        }
        { //::SireMM::CLJGrid::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJGrid::typeName );
            
            CLJGrid_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::CLJGrid::usesGrid
        
            typedef bool ( ::SireMM::CLJGrid::*usesGrid_function_type)(  ) const;
            usesGrid_function_type usesGrid_function_value( &::SireMM::CLJGrid::usesGrid );
            
            CLJGrid_exposer.def( 
                "usesGrid"
                , usesGrid_function_value
                , "Return whether or not the grid will be used in the calculation" );
        
        }
        { //::SireMM::CLJGrid::usesParallelCalculation
        
            typedef bool ( ::SireMM::CLJGrid::*usesParallelCalculation_function_type)(  ) const;
            usesParallelCalculation_function_type usesParallelCalculation_function_value( &::SireMM::CLJGrid::usesParallelCalculation );
            
            CLJGrid_exposer.def( 
                "usesParallelCalculation"
                , usesParallelCalculation_function_value
                , "Return whether or not a parallel algorithm is being used\nto calculate grid energies" );
        
        }
        { //::SireMM::CLJGrid::usesReproducibleCalculation
        
            typedef bool ( ::SireMM::CLJGrid::*usesReproducibleCalculation_function_type)(  ) const;
            usesReproducibleCalculation_function_type usesReproducibleCalculation_function_value( &::SireMM::CLJGrid::usesReproducibleCalculation );
            
            CLJGrid_exposer.def( 
                "usesReproducibleCalculation"
                , usesReproducibleCalculation_function_value
                , "Return whether or not a reproducible energy summing algorithm is being\nused to accumulate the energies" );
        
        }
        { //::SireMM::CLJGrid::what
        
            typedef char const * ( ::SireMM::CLJGrid::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::CLJGrid::what );
            
            CLJGrid_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        CLJGrid_exposer.staticmethod( "idOfFixedAtom" );
        CLJGrid_exposer.staticmethod( "typeName" );
        CLJGrid_exposer.def( "__copy__", &__copy__);
        CLJGrid_exposer.def( "__deepcopy__", &__copy__);
        CLJGrid_exposer.def( "clone", &__copy__);
        CLJGrid_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJGrid >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJGrid_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJGrid >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJGrid_exposer.def( "__str__", &__str__< ::SireMM::CLJGrid > );
        CLJGrid_exposer.def( "__repr__", &__str__< ::SireMM::CLJGrid > );
    }

}
