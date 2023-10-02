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

#ifndef SIREMOL_SEGIDENTIFIER_H
#define SIREMOL_SEGIDENTIFIER_H

#include "segid.h"

#include <memory>

namespace SireMol
{
    class SegIdentifier;
}

SIREMOL_EXPORT QDataStream &operator<<(QDataStream &, const SireMol::SegIdentifier &);
SIREMOL_EXPORT QDataStream &operator>>(QDataStream &, SireMol::SegIdentifier &);

namespace SireMol
{

    class SegIdx;

    /** This is the polymorphic holder of all Segment IDs */
    class SIREMOL_EXPORT SegIdentifier : public SegID
    {

        friend SIREMOL_EXPORT QDataStream & ::operator<<(QDataStream &, const SegIdentifier &);
        friend SIREMOL_EXPORT QDataStream & ::operator>>(QDataStream &, SegIdentifier &);

    public:
        SegIdentifier();
        SegIdentifier(const SegID &segid);
        SegIdentifier(const SegIdentifier &other);

        ~SegIdentifier();

        static const char *typeName();

        const char *what() const
        {
            return SegIdentifier::typeName();
        }

        SegIdentifier *clone() const;

        bool isNull() const;

        uint hash() const;

        QString toString() const;

        const SegID &base() const;

        SegIdentifier &operator=(const SegIdentifier &other);
        SegIdentifier &operator=(const SegID &other);

        bool operator==(const SireID::ID &other) const;
        using SireID::ID::operator!=;

        bool operator==(const SegIdentifier &other) const;
        bool operator!=(const SegIdentifier &other) const;

        bool operator==(const SegID &other) const;
        bool operator!=(const SegID &other) const;

        QList<SegIdx> map(const MolInfo &molinfo) const;

    private:
        /** Pointer to the SegID */
        std::shared_ptr<SegID> d;
    };

    SIRE_ALWAYS_INLINE uint qHash(const SegIdentifier &segid)
    {
        return segid.hash();
    }

} // namespace SireMol

#include "atomidx.h"
#include "segidx.h"

#ifdef SIRE_INSTANTIATE_TEMPLATES
template class SireID::Specify<SireMol::SegID>;
template class SireMol::AtomsIn<SireMol::SegID>;
template class SireID::IDAndSet<SireMol::SegID>;
template class SireID::IDOrSet<SireMol::SegID>;
template class SireID::MatchAll<SireMol::SegID>;
template class SireID::InvertMatch<SireMol::SegID>;
#endif

Q_DECLARE_METATYPE(SireID::Specify<SireMol::SegID>);
Q_DECLARE_METATYPE(SireMol::AtomsIn<SireMol::SegID>);
Q_DECLARE_METATYPE(SireID::IDAndSet<SireMol::SegID>);
Q_DECLARE_METATYPE(SireID::IDOrSet<SireMol::SegID>);
Q_DECLARE_METATYPE(SireID::MatchAll<SireMol::SegID>);
Q_DECLARE_METATYPE(SireID::InvertMatch<SireMol::SegID>);

Q_DECLARE_METATYPE(SireMol::SegIdentifier);

#endif
