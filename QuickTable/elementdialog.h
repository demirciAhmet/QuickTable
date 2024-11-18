#ifndef ELEMENTDIALOG_H
#define ELEMENTDIALOG_H

#include <QDialog>
#include <QLabel>
#include "element.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class ElementDialog;
}
QT_END_NAMESPACE

/*!
 *
 * @file elementdialog.h
 * @author Ahmet Kaan Demirci
 * @date 04 Jan, 2024
 *
 */
/*!
 * \brief The ElementDialog class responsible for the dialog that opens when you click to an element button
 */
class ElementDialog : public QDialog
{
    Q_OBJECT

public:
    ElementDialog(QWidget *parent = nullptr);
    ElementDialog(const Element &element, QWidget *parent = nullptr);
    ~ElementDialog();

private:
    Ui::ElementDialog *ui;
};

#endif // ELEMENTDIALOG_H
