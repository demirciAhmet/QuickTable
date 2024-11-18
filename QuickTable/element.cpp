#include "element.h"

Element::Element(int atomicNumber,
                 QString symbol,
                 QString name,
                 double atomicMass,
                 double atomicRadius,
                 int period,
                 int group,
                 QString summary,
                 QString category,
                 QString metallicProperty,
                 QString block,
                 QString phase,
                 double boilingPoint,
                 double meltingPoint,
                 QString electronicConfiguration,
                 double electronegativity,
                 QString oxidationStates,
                 int ionizationEnergy,
                 int electronAffinity,
                 double density,
                 int discoveryYear,
                 QString discoveredBy,
                 int displayRow,
                 int displayColumn)
{
    this->atomicNumber = atomicNumber;
    this->symbol = symbol;
    this->name = name;
    this->atomicMass = atomicMass;
    this->atomicRadius = atomicRadius;
    this->period = period;
    this->group = group;
    this->summary = summary;
    this->category = category;
    this->metallicProperty = metallicProperty;
    this->block = block;
    this->phase = phase;
    this->boilingPoint = boilingPoint;
    this->meltingPoint = meltingPoint;
    this->electronicConfiguration = electronicConfiguration;
    this->electronegativity = electronegativity;
    this->oxidationStates = oxidationStates;
    this->ionizationEnergy = ionizationEnergy;
    this->electronAffinity = electronAffinity;
    this->density = density;
    this->discoveryYear = discoveryYear;
    this->discoveredBy = discoveredBy;
    this->displayRow = displayRow;
    this->displayColumn = displayColumn;
}

// getters
int Element::getAtomicNumber() const { return atomicNumber; }
QString Element::getSymbol() const { return symbol; }
QString Element::getName() const { return name; }
double Element::getAtomicMass() const { return atomicMass; }
double Element::getAtomicRadius() const { return atomicRadius; }
int Element::getPeriod() const { return period; }
int Element::getGroup() const { return group; }
QString Element::getSummary() const { return summary; }
QString Element::getCategory() const { return category; }
QString Element::getMetallicProperty() const { return metallicProperty; }
QString Element::getBlock() const { return block; }
QString Element::getPhase() const { return phase; }
double Element::getBoilingPoint() const { return boilingPoint; }
double Element::getMeltingPoint() const { return meltingPoint; }
QString Element::getElectronicConfiguration() const { return electronicConfiguration; }
double Element::getElectronegativity() const { return electronegativity; }
QString Element::getOxidationStates() const { return oxidationStates; }
int Element::getIonizationEnergy() const { return ionizationEnergy; }
int Element::getElectronAffinity() const { return electronAffinity; }
double Element::getDensity() const { return density; }
int Element::getDiscoveryYear() const { return discoveryYear; }
QString Element::getDiscoveredBy() const { return discoveredBy; }
int Element::getDisplayRow() const { return displayRow; }
int Element::getDisplayColumn() const { return displayColumn; }
