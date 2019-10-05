

#ifndef TECFLIX_PAGINA_H
#define TECFLIX_PAGINA_H


#include "../Lista/list.h"

class Pagina {
protected:
    int *numPagina =new int(0);
    int cantPag = 12;
    int pagTotales = 5000;
    List* pelisG = new(List);


public:
    List newpag(int nump, List pelis);
    List pagant();
    List pagsig();
    int getCantPag ();
    int getPagTotales() const;
    void setPagTotales(int pagTotales);
    void setCantPag(int cantPag);
};


#endif //TECFLIX_PAGINA_H
