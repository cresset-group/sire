/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2023  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the website
  *  at http://sire.openbiosim.org
  *
\*********************************************/

#ifndef SIREUNITS_AST_H
#define SIREUNITS_AST_H

#include "SireUnits/generalunit.h"

#include "SireError/errors.h"

SIRE_BEGIN_HEADER

#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/support_line_pos_iterator.hpp>

#include <boost/phoenix.hpp>
#include <boost/phoenix/fusion.hpp>
#include <boost/phoenix/object.hpp>
#include <boost/phoenix/operator.hpp>
#include <boost/phoenix/stl.hpp>

#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/io.hpp>

#include <QDebug>

// A lot of the below code is heavily inspired by
// https://medium.com/@alinakipoglu/parsing-with-spirit-qi-fcaeaf4357b3

namespace SireUnits
{

    /** Namespace holding the objects used in the abstract syntax tree */
    namespace AST
    {
        using SireUnits::Dimension::GeneralUnit;

        struct Node;
        struct Expression;

        /** Struct the holds the SI prefix */
        struct Prefix
        {
            Prefix() : value(1.0)
            {
            }

            Prefix(double v) : value(v)
            {
            }

            double value;
        };

        /** Struct the holds the Unit */
        struct Unit
        {
            Unit() : unit(0), prefix(1.0)
            {
            }

            Unit(const GeneralUnit &u) : unit(u), prefix(1.0)
            {
            }

            template <class T>
            Unit(const T &u) : unit(u), prefix(1.0)
            {
            }

            Unit &operator=(const Prefix &p)
            {
                prefix = p.value;
                unit = GeneralUnit(0);
                return *this;
            }

            Unit &operator=(const Unit &u)
            {
                prefix = 1.0;
                unit = u.unit;
                return *this;
            }

            Unit &operator*=(const Prefix &p)
            {
                prefix = p.value;
                unit = GeneralUnit(0);
                return *this;
            }

            Unit &operator*=(const Unit &u)
            {
                unit = u.unit;
                return *this;
            }

            QString toString() const;

            GeneralUnit toUnit() const;

        private:
            GeneralUnit unit;
            double prefix;
        };

        struct Power
        {
            int power = 1;

            Power &operator*=(int p)
            {
                power = p;
                return *this;
            }
        };

        struct FullUnit
        {
            FullUnit() : power(1)
            {
            }

            Unit unit;
            int power;

            FullUnit &operator+=(const Unit &u)
            {
                unit = u;
                return *this;
            }

            FullUnit &operator*=(const Power &p)
            {
                power = p.power;
                return *this;
            }

            QString toString() const;
            GeneralUnit toUnit() const;
        };

        /** Struct that holds a general selection expression */
        struct Expression
        {
            GeneralUnit unit;

            Expression &operator=(const Expression &e)
            {
                unit = e.unit;
                return *this;
            }

            Expression &operator*=(const Expression &e)
            {
                unit *= e.unit;
                return *this;
            }

            Expression &operator*=(const Power &power)
            {
                FullUnit f;
                f += unit;
                f *= power;
                unit = f.toUnit();
                return *this;
            }

            Expression &operator=(const FullUnit &u)
            {
                unit = u.toUnit();
                return *this;
            }

            Expression &operator*=(const FullUnit &other)
            {
                unit *= other.toUnit();
                return *this;
            }

            Expression &operator/=(const FullUnit &other)
            {
                unit /= other.toUnit();
                return *this;
            }

            QString toString() const;

            GeneralUnit toUnit() const;
        };

        /** The root node of the AST - this holds a single Expression */
        struct Node
        {
            Expression values;

            QString toString() const;

            GeneralUnit toUnit() const;
        };

    } // namespace AST

} // namespace SireUnits

BOOST_FUSION_ADAPT_STRUCT(SireUnits::AST::Expression, (SireUnits::Dimension::GeneralUnit, unit))
BOOST_FUSION_ADAPT_STRUCT(SireUnits::AST::Node, (SireUnits::AST::Expression, values))

SIRE_END_HEADER

#endif
