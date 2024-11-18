#ifndef ELEMENT_H
#define ELEMENT_H

#include <QImage>
#include <QObject>
#include <QString>

/*!
 * \brief The Element class is responsible for hold the attributies of an element.
 */
class Element
{
private:
    int atomicNumber;
    QString symbol;
    QString name;
    double atomicMass;
    double atomicRadius;
    int period;
    int group;
    QString summary;
    QString category;
    QString metallicProperty;
    QString block;
    QString phase;
    double boilingPoint;
    double meltingPoint;
    QString electronicConfiguration;
    double electronegativity;
    QString oxidationStates;
    int ionizationEnergy;
    int electronAffinity;
    double density;
    int discoveryYear;
    QString discoveredBy;
    int displayRow;
    int displayColumn;
    QString imageFile;

public:
    Element(int atomicNumber, QString symbol, QString name, double atomicMass, double atomicRadius,
            int period, int group, QString summary, QString category, QString metallicProperty,
            QString block, QString phase, double boilingPoint, double meltingPoint, QString electronicConfiguration,
            double electronegativity, QString oxidationStates, int ionizationEnergy, int electronAffinity,
            double density, int discoveryYear, QString discoveredBy, int displayRow, int displayColumn);

    // getters
    int getAtomicNumber() const;
    QString getSymbol() const;
    QString getName() const;
    double getAtomicMass() const;
    double getAtomicRadius() const;
    int getPeriod() const;
    int getGroup() const;
    QString getSummary() const;
    QString getCategory() const;
    QString getMetallicProperty() const;
    QString getBlock() const;
    QString getPhase() const;
    double getBoilingPoint() const;
    double getMeltingPoint() const;
    QString getElectronicConfiguration() const;
    double getElectronegativity() const;
    QString getOxidationStates() const;
    int getIonizationEnergy() const;
    int getElectronAffinity() const;
    double getDensity() const;
    int getDiscoveryYear() const;
    QString getDiscoveredBy() const;
    int getDisplayRow() const;
    int getDisplayColumn() const;

signals:
};

#endif // ELEMENT_H
