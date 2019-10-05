
#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets>
#include "../IMDB/leerIMdB.h"
#include "../IMDB/descarga.h"
#include "../Lista/list.h"
#include "../CSV/lectura.cpp"
#include "../Paginacion/Pagina.h"
#include "ventana2.h"


#ifndef TECFLIX_VENTANA_H
#define TECFLIX_VENTANA_H


class Ventana : public QMainWindow
{
public:
/**
 * Constructor de la ventana, en el cual se definen los botones y otros Widgets presentes
 * en la ventana principal, ademas de un pequeño if que ayuda a definir las imagenes
 * en la primera hoja de ejecucion, es decir la primera hoja que se muestra al ejecutar por
 * primera vez el programa
 * Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html
 */
    Ventana(QWidget *parent=0);


    /**
 * Destructor ~Ventana como su nombre describe, libera de memoria todos los punteros presentes y creados
 * en la Clase Ventana
 */
    virtual ~Ventana();


private:
    /**
     * Definición de todos los botones a utilizar en la ventana
     */
    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;
    QPushButton* btn4;
    QPushButton* btn5;
    QPushButton* btn6;
    QPushButton* btnN1;
    QPushButton* btnN2;
    QPushButton* btnN3;
    QPushButton* btnN4;
    QPushButton* btnN5;
    QPushButton* btnN6;
    QPushButton* btnN7;
    QPushButton* btnAtras;
    QPushButton* btnDel;

    int handleBtn1();
    int handleBtn2();
    int handleBtn3();
    int handleBtn4();
    int handleBtn5();
    int handleBtn6();


    /**
 * Metodo handleSig se encarga de manejar el evento de el boton de pagina siguiente sumando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
    int handleSig();

    /**
 * Metodo handleAnt() se encarga de manejar el evento de el boton de pagina anterior restando 1 a la variable
 * pActual la que se encarga de indicar la pagina actual, asimismo llama a los metodos pant()
 * y psig() para que ellos actualicen las imagenes anteriores y siguientes, tambien llama al metodo
 * actPenPant() para que actualice la pantalla con los posters de la pagina actual
 */
    int handleAnt();
/**
 * metodos que manejan los botones de navegación, se encargan de llamar el metodo actNav(intcont)
 */
    int handleN1();
    int handleN2();
    int handleN3();
    int handleN4();
    int handleN5();
    int handleN6();
    int handleN7();

/**
 * metodo que recibe la llamada para actualizar los botones cuando un usuario acciono un boton de
 * navegación y actualiza los botones con los numeros correspondientes en base a la nueva pagina
 * y ademas actualiza las peliculas en pantalla con base en la pagina escogida por el usuario
 * @param cont
 */
    void actNav(int cont);

    int handleAtras();
    int handleDel();

    QPushButton* btnBack;
    QPushButton* btnSig;
    int *pActual= new int (0);
    lectura l;
    HTTPDownloader http;
    Pagina p;
    int *cantPPag=new int (6);
    List L = l.lect();
    int *pelTot=new int (L.cant());
    int *pagTot=new int (*pelTot/ *cantPPag);
    string* rutaA=new string("/home/kev/CLionProjects/TecFlix/pstA");
    string* rutaB=new string("/home/kev/CLionProjects/TecFlix/pstB");
    string* ruta=new string("/home/kev/CLionProjects/TecFlix/pst");

    void resizeEvent(QResizeEvent* event) override;

    /**Metodo psig, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagina siguiente, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina siguiente.
 */
    void psig();

    /**Metodo pant, realiza la descarga del html, busca en el mismo el url de la imagen y la descarga en
 * una ruta especificada para la pagina anterior, lo hace pidiendo a la clase paginación la lista de
 * peliculas correspondiente a la pagina anterior.
 */
    void pant();
    int Pini=0;
    descarga d;

    /**
 * actPenPant es un metodo que se basa en actualizar los poster de cada uno de los botones por medio de
 * un pixmap, el cual es definido por la ruta recibida y un contador que define la pelicula en el irden en
 * que se recibio
 * @param rutaAct recibe la ruta actual utilizada la cual puede ser rutaA o rutaB dependiendo si se esta
 * migrando a la pagina anterior o siguiente de la que estaba antes en pantalla
 */
    void actPenPant(string ruta);
    Ventana2 *ventana2;
    List *lAct=new List();
    void pact();

    const int dist =10;
    const int x= 182;
    const int y= 268;


};


#endif //TECFLIX_VENTANA_H
