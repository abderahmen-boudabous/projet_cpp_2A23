#ifndef MAQUETTE_H
#define MAQUETTE_H

#include <QDialog>

namespace Ui {
class maquette;
}

class maquette : public QDialog
{
    Q_OBJECT

public:
    explicit maquette(QWidget *parent = nullptr);
    ~maquette();

private:
    Ui::maquette *ui;
};

#endif // MAQUETTE_H
