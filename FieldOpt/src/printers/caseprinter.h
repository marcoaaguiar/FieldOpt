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

#ifndef CASEPRINTER_H
#define CASEPRINTER_H

#include "printer.h"
#include <QObject>
#include "optimizers/case.h"

class Case;

/*!
 * \brief Printer for Case Objects.
 *
 * Prints a representation of a Case to the console.
 */
class CasePrinter : public QObject, Printer
{
    Q_OBJECT
public slots:
    /*!
     * \brief Print a string representation of a Case object.
     * \param c The Case object to be printed.
     */
    void printCase(const Case& c) const;
};

#endif // CASEPRINTER_H