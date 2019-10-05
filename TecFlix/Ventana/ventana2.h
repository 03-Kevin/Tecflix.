

#ifndef TECFLIX_VENTANA2_H
#define TECFLIX_VENTANA2_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QtGui/QDesktopServices>
#include <QUrl>
#include "../Peliculas/pelicula.h"

class Ventana2: public QMainWindow {
public:
    Ventana2(QWidget *parent=0);
    void infoPeli(Pelicula peli,string link);
    virtual ~Ventana2();
private:
    QLabel* lblTitulo;
    QPushButton* lblLink;
    QLabel* lblDuracion;
    QLabel* lblDuracion2;
    QLabel* lblDirector;
    QLabel* lblDirector2;
    QLabel* lblGenero;
    QLabel* lblGenero2;
    QLabel* lblAct1;
    QLabel* lblAct12;
    QLabel* lblAct2;
    QLabel* lblAct22;
    QLabel* lblIdioma;
    QLabel* lblIdioma2;
    QLabel* lblPais;
    QLabel* lblPais2;
    QLabel* lblAgno;
    QLabel* lblAgno2;
    QLabel* lblScore;
    QLabel* lblScore2;
    QLabel* lblContenido;
    QLabel* lblContenido2;
    QLabel* lblPresupuesto;
    QLabel* lblPresupuesto2;
    QLabel* lblGanancia;
    QLabel* lblGanancia2;
    QLabel* lblColor;
    QLabel* lblColor2;
    int handleLink();
    string* link = new string("");


};


#endif //TECFLIX_VENTANA2_H
