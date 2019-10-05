



#include "ventana2.h"

Ventana2::Ventana2(QWidget *parent) {
    this->setFixedSize(1010, 280);
    this->setWindowTitle("TecFlix");
    this->setStyleSheet("background-color:black;");
    lblTitulo = new QLabel(this);
    lblTitulo->setGeometry(322, 5, 369, 25);
    lblTitulo->setFont(QFont("Calibri", 12,75));
    lblTitulo->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblTitulo->setText("Titulo de la pelicula");

    lblLink = new QPushButton("Link del Trailer", this);
    lblLink->setGeometry(322, 220, 369, 25);
    lblLink->setFont(QFont("Calibri", 10,25));
    lblLink->setStyleSheet("*{background-color: rgb(150,255,255)}");
    connect(lblLink,&QPushButton::clicked, this, &Ventana2::handleLink);

    lblGenero = new QLabel(this);
    lblGenero->setGeometry(10, 70, 369, 25);
    lblGenero->setFont(QFont("Calibri", 10,25));
    lblGenero->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblGenero->setText("Genero de la pelicula");

    lblGenero2 = new QLabel(this);
    lblGenero2->setGeometry(10, 100, 369, 25);
    lblGenero2->setFont(QFont("Calibri", 10,25));
    lblGenero2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblGenero2->setText("Genero de la pelicula");

    lblIdioma = new QLabel(this);
    lblIdioma->setGeometry(390, 70, 123, 25);
    lblIdioma->setFont(QFont("Calibri", 10,25));
    lblIdioma->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblIdioma->setText("Idioma de la pelicula");

    lblIdioma2 = new QLabel(this);
    lblIdioma2->setGeometry(390, 100, 123, 25);
    lblIdioma2->setFont(QFont("Calibri", 10,25));
    lblIdioma2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblIdioma2->setText("Idioma de la pelicula");

    lblDuracion = new QLabel(this);
    lblDuracion->setGeometry(525, 70, 123, 25);
    lblDuracion->setFont(QFont("Calibri", 10,25));
    lblDuracion->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblDuracion->setText("Duracion de la pelicula");

    lblDuracion2 = new QLabel(this);
    lblDuracion2->setGeometry(525, 100, 123, 25);
    lblDuracion2->setFont(QFont("Calibri", 10,25));
    lblDuracion2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblDuracion2->setText("Duracion de la pelicula");

    lblAgno = new QLabel(this);
    lblAgno->setGeometry(660, 70, 61.5, 25);
    lblAgno->setFont(QFont("Calibri", 10,25));
    lblAgno->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblAgno->setText("Año de la pelicula");

    lblAgno2 = new QLabel(this);
    lblAgno2->setGeometry(660, 100, 61.5, 25);
    lblAgno2->setFont(QFont("Calibri", 10,25));
    lblAgno2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblAgno2->setText("Año de la pelicula");

    lblPais = new QLabel(this);
    lblPais->setGeometry(733.5, 70, 133, 25);
    lblPais->setFont(QFont("Calibri", 10,25));
    lblPais->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblPais->setText("Pais de la pelicula");

    lblPais2 = new QLabel(this);
    lblPais2->setGeometry(733.5, 100, 133, 25);
    lblPais2->setFont(QFont("Calibri", 10,25));
    lblPais2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblPais2->setText("Pais de la pelicula");

    lblContenido = new QLabel(this);
    lblContenido->setGeometry(878.5, 70, 123, 25);
    lblContenido->setFont(QFont("Calibri", 10,25));
    lblContenido->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblContenido->setText("Contenido de la pelicula");

    lblContenido2 = new QLabel(this);
    lblContenido2->setGeometry(878.5, 100, 123, 25);
    lblContenido2->setFont(QFont("Calibri", 10,25));
    lblContenido2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblContenido2->setText("Contenido de la pelicula");

    lblPresupuesto = new QLabel(this);
    lblPresupuesto->setGeometry(10, 130, 123, 25);
    lblPresupuesto->setFont(QFont("Calibri", 10,25));
    lblPresupuesto->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblPresupuesto->setText("Presupuesto de la pelicula");

    lblPresupuesto2 = new QLabel(this);
    lblPresupuesto2->setGeometry(10, 160, 123, 25);
    lblPresupuesto2->setFont(QFont("Calibri", 10,25));
    lblPresupuesto2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblPresupuesto2->setText("Presupuesto de la pelicula");

    lblGanancia = new QLabel(this);
    lblGanancia->setGeometry(150, 130, 123, 25);
    lblGanancia->setFont(QFont("Calibri", 10,25));
    lblGanancia->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblGanancia->setText("Ganancia de la pelicula");

    lblGanancia2 = new QLabel(this);
    lblGanancia2->setGeometry(150, 160, 123, 25);
    lblGanancia2->setFont(QFont("Calibri", 10,25));
    lblGanancia2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblGanancia2->setText("Ganancia de la pelicula");

    lblDirector= new QLabel(this);
    lblDirector->setGeometry(290, 130, 123, 25);
    lblDirector->setFont(QFont("Calibri", 10,25));
    lblDirector->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblDirector->setText("Director de la pelicula");

    lblDirector2= new QLabel(this);
    lblDirector2->setGeometry(290, 160, 123, 25);
    lblDirector2->setFont(QFont("Calibri", 10,25));
    lblDirector2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblDirector2->setText("Director de la pelicula");

    lblColor= new QLabel(this);
    lblColor->setGeometry(430, 130, 123, 25);
    lblColor->setFont(QFont("Calibri", 10,25));
    lblColor->setStyleSheet("*{background-color: rgb(200,255,255)}");
    lblColor->setText("Color de la pelicula");

    lblColor2= new QLabel(this);
    lblColor2->setGeometry(430, 160, 123, 25);
    lblColor2->setFont(QFont("Calibri", 10,25));
    lblColor2->setStyleSheet("*{background-color: rgb(150,255,255)}");
    lblColor2->setText("Color de la pelicula");

    lblAct1= new QLabel(this);
    lblAct1->setGeometry(570, 130, 138, 25);
    lblAct1->setFont(QFont("Calibri", 10,25));
    lblAct1->setText("Actor Principal de la pelicula");
    lblAct1->setStyleSheet("*{background-color: rgb(200,255,255)}");

    lblAct12= new QLabel(this);
    lblAct12->setGeometry(570, 160, 138, 25);
    lblAct12->setFont(QFont("Calibri", 10,25));
    lblAct12->setText("Actor Principal de la pelicula");
    lblAct12->setStyleSheet("*{background-color: rgb(150,255,255)}");

    lblAct2= new QLabel(this);
    lblAct2->setGeometry(725, 130, 138, 25);
    lblAct2->setFont(QFont("Calibri", 10,25));
    lblAct2->setText("Actor Secundario de la pelicula");
    lblAct2->setStyleSheet("*{background-color: rgb(200,255,255)}");

    lblAct22= new QLabel(this);
    lblAct22->setGeometry(725, 160, 138, 25);
    lblAct22->setFont(QFont("Calibri", 10,25));
    lblAct22->setText("Actor Secundario de la pelicula");
    lblAct22->setStyleSheet("*{background-color: rgb(150,255,255)}");

    lblScore= new QLabel(this);
    lblScore->setGeometry(878.5, 130, 123, 25);
    lblScore->setFont(QFont("Calibri", 10,25));
    lblScore->setText("Score de IMdB de la pelicula");
    lblScore->setStyleSheet("*{background-color: rgb(200,255,255)}");

    lblScore2= new QLabel(this);
    lblScore2->setGeometry(878.5, 160, 123, 25);
    lblScore2->setFont(QFont("Calibri", 10,25));
    lblScore2->setText("Score de IMdB de la pelicula");
    lblScore2->setStyleSheet("*{background-color: rgb(150,255,255)}");

}

void Ventana2::infoPeli(Pelicula peli,string nlink) {
    lblTitulo->setText(peli.getTitulo().c_str());
    lblGenero->setText(("Genero: "));
    lblGenero2->setText((" " + peli.getGenero()).c_str());
    lblIdioma->setText(("Idioma: "));
    lblIdioma2->setText((" " + peli.getIdioma()).c_str());
    lblDuracion->setText(("Duracion: "));
    lblDuracion2->setText((" " + peli.getDuracion()).c_str());
    lblAgno->setText(("Año: "));
    lblAgno2->setText((" "+ peli.getAgno()).c_str());
    lblPais->setText(("Pais: "));
    lblPais2->setText((" "+ peli.getPais()).c_str());
    lblContenido->setText(("Contenido: "));
    lblContenido2->setText((" "+ peli.getContenido()).c_str());
    lblPresupuesto->setText(("Presupuesto: "));
    lblPresupuesto2->setText((" "+ peli.getPresupuesto()).c_str());
    lblGanancia->setText(("Ganancia: "));
    lblGanancia2->setText((" "+ peli.getGanancia()).c_str());
    lblDirector->setText(("Director: "));
    lblDirector2->setText((" "+ peli.getNombreDelDirector()).c_str());
    lblColor->setText(("Color: "));
    lblColor2->setText((" "+ peli.getColor()).c_str());
    lblAct1->setText(("Actor #1: "));
    lblAct12->setText((" "+ peli.getNombreAct1()).c_str());
    lblAct2->setText(("Actor #2: "));
    lblAct22->setText((" "+ peli.getNombreAct2()).c_str());
    lblScore->setText(("Score: "));
    lblScore2->setText((" "+ peli.getImdbScore()).c_str());
    *link = nlink;
}

int Ventana2::handleLink() {
    QString Link = link->c_str();
    QDesktopServices::openUrl(QUrl(Link));
    return 0;
}

Ventana2::~Ventana2() {
}



