#include "mainmenu.h"
#include "forms/ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnTable->setChecked(true);
    ui->Windows->setCurrentIndex(0);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_btnTable_clicked()
{
    ui->Windows->setCurrentIndex(0);
}
