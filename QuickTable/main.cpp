#include "mainmenu.h"
#include <QApplication>
#include <QFile>

// load style.qss
void loadStyle()
{
    QFile file(":/stylesheets/resources/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
}

// initialize project
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loadStyle();
    MainMenu menu;
    menu.resize(900, 620);
    menu.setWindowTitle("QuickTable");
    menu.show();
    return a.exec();
}
