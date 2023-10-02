/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2009  Christopher Woods
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

#ifndef SIREID_IDENTIFIER_H
#define SIREID_IDENTIFIER_H

#include "id.h"

#include <memory>

SIRE_BEGIN_HEADER

namespace SireID
{
    class Identifier;
}

SIREID_EXPORT QDataStream &operator<<(QDataStream &, const SireID::Identifier &);
SIREID_EXPORT QDataStream &operator>>(QDataStream &, SireID::Identifier &);

namespace SireID
{

    /** This is a generic holder for any ID class!

        @author Christopher Woods
    */
    class SIREID_EXPORT Identifier : public ID
    {

        friend SIREID_EXPORT QDataStream & ::operator<<(QDataStream &, const Identifier &);
        friend SIREID_EXPORT QDataStream & ::operator>>(QDataStream &, Identifier &);

    public:
        Identifier();
        Identifier(const ID &id);
        Identifier(const Identifier &other);

        ~Identifier();

        static const char *typeName();

        const char *what() const
        {
            return Identifier::typeName();
        }

        Identifier *clone() const;

        bool isNull() const;

        uint hash() const;

        QString toString() const;

        const ID &base() const;

        Identifier &operator=(const Identifier &other);
        Identifier &operator=(const ID &other);

        bool operator==(const ID &other) const;
        bool operator!=(const ID &other) const;

        bool operator==(const Identifier &other) const;
        bool operator!=(const Identifier &other) const;

    private:
        /** Pointer to the ID */
        std::shared_ptr<ID> d;
    };

    SIRE_ALWAYS_INLINE uint qHash(const Identifier &id)
    {
        return id.hash();
    }

} // namespace SireID

Q_DECLARE_METATYPE(SireID::Identifier)

SIRE_END_HEADER

#endif
