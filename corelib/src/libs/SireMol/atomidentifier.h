/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2007  Christopher Woods
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
  *  You can contact the authors at https://sire.openbiosim.org
  *
\*********************************************/

#ifndef SIREMOL_ATOMIDENTIFIER_H
#define SIREMOL_ATOMIDENTIFIER_H

#include "atomid.h"

#include <memory>

namespace SireMol
{
    class AtomIdentifier;
    class AtomIDSet;
} // namespace SireMol

SIREMOL_EXPORT QDataStream &operator<<(QDataStream &, const SireMol::AtomIdentifier &);
SIREMOL_EXPORT QDataStream &operator>>(QDataStream &, SireMol::AtomIdentifier &);

SIREMOL_EXPORT QDataStream &operator<<(QDataStream &, const SireMol::AtomIDSet &);
SIREMOL_EXPORT QDataStream &operator>>(QDataStream &, SireMol::AtomIDSet &);

namespace SireMol
{

    class AtomIdx;

    /** This is a generic holder for any AtomID class!

        @author Christopher Woods
    */
    class SIREMOL_EXPORT AtomIdentifier : public AtomID
    {

        friend SIREMOL_EXPORT QDataStream & ::operator<<(QDataStream &, const AtomIdentifier &);
        friend SIREMOL_EXPORT QDataStream & ::operator>>(QDataStream &, AtomIdentifier &);

    public:
        AtomIdentifier();
        AtomIdentifier(const AtomID &atomid);
        AtomIdentifier(const AtomIdentifier &other);

        ~AtomIdentifier();

        static const char *typeName();

        const char *what() const
        {
            return AtomIdentifier::typeName();
        }

        AtomIdentifier *clone() const;

        bool isNull() const;

        uint hash() const;

        QString toString() const;

        const AtomID &base() const;

        AtomIdentifier &operator=(const AtomIdentifier &other);
        AtomIdentifier &operator=(const AtomID &other);

        bool operator==(const SireID::ID &other) const;
        using SireID::ID::operator!=;

        bool operator==(const AtomIdentifier &other) const;
        bool operator!=(const AtomIdentifier &other) const;

        bool operator==(const AtomID &other) const;
        bool operator!=(const AtomID &other) const;

        QList<AtomIdx> map(const MolInfo &molinfo) const;

    private:
        /** Pointer to the AtomID */
        std::shared_ptr<AtomID> d;
    };

    SIRE_ALWAYS_INLINE uint qHash(const AtomIdentifier &atomid)
    {
        return atomid.hash();
    }

} // namespace SireMol

Q_DECLARE_METATYPE(SireMol::AtomIdentifier);

Q_DECLARE_METATYPE(SireID::Specify<SireMol::AtomID>);
Q_DECLARE_METATYPE(SireID::IDAndSet<SireMol::AtomID>);
Q_DECLARE_METATYPE(SireID::IDOrSet<SireMol::AtomID>);
Q_DECLARE_METATYPE(SireID::InvertMatch<SireMol::AtomID>);
Q_DECLARE_METATYPE(SireID::MatchAll<SireMol::AtomID>);

#endif
