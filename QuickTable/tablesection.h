#ifndef TABLESECTION_H
#define TABLESECTION_H

#include <QButtonGroup>
#include <QPushButton>
#include <QWidget>
#include <QMap>
#include "element.h"

namespace Ui
{
    class TableSection;
}

/*!
 * \brief The TableSection class is the main class for the "Table" section. It extends QWidget to be able to use in main menu.
 */
class TableSection : public QWidget
{
    Q_OBJECT

public:
    explicit TableSection(QWidget *parent = nullptr);
    ~TableSection();

private:
    Ui::TableSection *ui;

    /*!
     * \brief categoryColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> categoryColorMap = {
        {"Alkali Metal", "#ff0303"},
        {"Alkaline Earth Metal", "#ff7503"},
        {"Transition Metal", "#ffbf03"},
        {"Post-Transition Metal", "#008a0e"},
        {"Lanthanide", "#700b57"},
        {"Actinide", "#d916a8"},
        {"Metalloid", "#008573"},
        {"Halogen", "#3935ad"},
        {"Non Metal", "#1071e5"},
        {"Noble Gas", "#ba23f6"},
        {"(undefined)", "#979ea8"}};

    /*!
     * \brief metallicPropertyColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> metallicPropertyColorMap = {
        {"metal", "#ff7503"},
        {"metalloid", "#008a0e"},
        {"nonmetal", "#3935ad"},
        {"(unknown)", "#979ea8"}};

    /*!
     * \brief blockColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> blockColorMap = {
        {"s", "#ff7503"},
        {"p", "#008a0e"},
        {"d", "#3935ad"},
        {"f", "#700b57"}};

    /*!
     * \brief phaseColorMap holds the button colors corresponding the selected property.
     */
    QMap<QString, QString> phaseColorMap = {
        {"Solid", "#ff7503"},
        {"Liquid", "#008a0e"},
        {"Gas", "#700b57"}};

    /*!
     * \brief setBorderForButton is a helper method for updating button borders
     * \param button
     * \param color
     */
    void setBorderForButton(QPushButton *button, const QString &color);
    /*!
     * \brief setColorForButton is a helper method for updating button colors
     * \param button
     * \param color
     */
    void setColorForButton(QPushButton *button, const QString &color);

    /*!
     * \brief updateButtonColors is the method that updates the colors of buttons when  a property selected
     */
    void updateButtonColors();

    /*!
     * \brief updateLegend is the method that updates the colors of buttons when a property selected
     */
    void updateLegend();

    /*!
     * \brief connectButtons connects the buttons in the form file (tablesection.ui) with click method.
     */
    void connectButtons();
    /*!
     * \brief searchElements method is a helper method to search elements
     * \param input
     */

    QString convertSearchedText(const QString &input);

    void searchElements(const QString &input);
    /*!
     * \brief convertSearchedText a helper method for searching elements from the search bar
     * \param input
     * \return
     */

private slots:

    /*!
     * \brief on_colorButton_clicked is the method to handle the color button click event
     */
    void on_colorButton_clicked();

    /*!
     * \brief onElementButtonClicked is the method to handle the element button click event
     * \param element
     */
    void onElementButtonClicked(const Element &element);

    void on_SearchBar_textEdited(const QString &arg1);
    void on_SearchButton_clicked();
};
#endif // TABLESECTION_H
