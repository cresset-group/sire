/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2024  Christopher Woods
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
  *  at https://sire.openbiosim.org
  *
\*********************************************/

#include "SireBase/atexit.h"

#include <vector>

#include <QDebug>

namespace SireBase
{
    std::vector<std::function<void()>> clean_up_functions;

    void clean_up()
    {
        qDebug() << "Cleaning up...";

        for (auto &func : clean_up_functions)
        {
            func();
        }

        qDebug() << "...goodbye!";
    }

    void register_clean_up_function(std::function<void()> func)
    {
        clean_up_functions.push_back(func);
    }

} // namespace SireBase
