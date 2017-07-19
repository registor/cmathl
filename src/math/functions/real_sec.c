/* Copyright (C) 2017 CMATHL

   This file is part of CML.

   CML is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   CML is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with CML. If not, see <http://www.gnu.org/licenses/>.     */

#include "../../../includes/cml.h"

/*
 * sec(x) function developed by using trigonometric identities
 *
 * @param real x
 *
 * @return real sec(x)
 */

real real_sec(real x)
{
        // Declaration of structures
        real y, z, h;

        // Mathematical algorithm
        y = x->cos(x);
        z = real(1.0);
        h = y->value(y) == 0.0 ? real(NAN) : z->div(z, y);

        // Free structures
        y->free(y);
        z->free(z);

        // Return
        return h;
}