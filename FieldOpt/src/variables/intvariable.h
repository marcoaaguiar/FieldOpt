/*
 * This file is part of the FieldOpt project.
 *
 * Copyright (C) 2015-2015 Einar J.M. Baumann <einarjba@stud.ntnu.no>
 *
 * The code is largely based on ResOpt, created by  Aleksander O. Juell <aleksander.juell@ntnu.no>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef INTVARIABLE_H
#define INTVARIABLE_H

#include "variable.h"

/*!
 * \brief Class for integer type variables.
 *
 * Integer variables are primarily used for well placement.
 *
 * \todo Check that min/max bounds make sense when set. E.g. max > min
 */
class IntVariable : public Variable
{
private:
    int m_value; //!< Current value
    int m_min;   //!< Lower bound for value. Initialized to <int>::min().
    int m_max;   //!< Upper bound for value. Initialized to <int>::max().

public:
    IntVariable(Component *parent); //!< Calls parent Variable constructor. Initializes m_min and m_max.

    /*!
     * \brief Set the current value for this variable.
     *
     * Checks that the new value is within the bounds defined by m_min and m_max.
     * Emits the warning signal if the parameter is greater/less than the bounds.
     * \param value The new value to be set.
     */
    void setValue(int value);
    void setMin(int min) { m_min = min; }            //!< Set the lower bound
    void setMax(int max) { m_max = max; }            //!< Set the upper bound

    int value() { return m_value; }            //!< Get function for m_value
    int min() { return m_min; }                //!< Get function for m_min
    int max() { return m_max; }                //!< Get function for m_max


    /*!
     * \brief Check if this is a variable.
     *
     * A Variable is considered to be variable if the max and min bounds are _not_ equal to the value.
     * \return True if this Variable is variable, otherwise false.
     */
     virtual bool isVariable();
};

#endif // INTVARIABLE_H
