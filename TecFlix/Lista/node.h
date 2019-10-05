#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "../Peliculas/pelicula.h"

class Node
{
    public:
        Node();
        Node(Pelicula p);
        ~Node();

        Node *next;
        Pelicula data;

        void delete_all();
        void print(Pelicula p);
};

#endif // NODE_H
