#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include <QFile>
#include <QVector>
#include <QObject>
#include "element.h"

/*!
 * \brief The PeriodicTable class contains the methods about the periodic table for using in TableSection.
 * It is separate from the element class because of optimization and flexibility.
 */
class PeriodicTable
{
public:
    PeriodicTable();
    /*!
     * \brief elements holds vector of elements that contain their datas
     */
    static QVector<Element *> elements;
    /*!
     * \brief CSVToElements reads from the resource file to generate elements.
     */
    void CSVToElements();
};

#endif // PERIODICTABLE_H
