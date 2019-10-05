#include "node.h"

// Constructor por defecto
Node::Node()
{
    data = Pelicula();
    next = NULL;
}

// Constructor por parámetro

Node::Node(Pelicula data_)
{
    data = data_;
    next = NULL;
}

// Eliminar todos los Nodos

void Node::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo

void Node::print(Pelicula pelicula)
{

    pelicula.print(pelicula);
}


Node::~Node() {}
