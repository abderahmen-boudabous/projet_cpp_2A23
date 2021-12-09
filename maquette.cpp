#include "maquette.h"
#include "ui_maquette.h"

maquette::maquette(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maquette)
{
    ui->setupUi(this);
}

maquette::~maquette()
{
    delete ui;
}
