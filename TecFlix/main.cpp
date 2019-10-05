#include "Ventana/ventana.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[]) {
    //Interfaz
    QApplication app(argc, argv);
    Ventana ventana;
    Ventana2 ventana2;


    return app.exec();
}