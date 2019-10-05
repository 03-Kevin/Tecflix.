/**
 * Basado en: https://github.com/ronnyml/C-Tutorial-Series/tree/master/Listas_enlazadas
 */

#include "list.h"

using namespace std;

// Constructor por defecto

List::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
void List::add_head(Pelicula data_)
{
    Node *new_node = new Node (data_);
    Node *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

// Eliminar al inicio
void List::del_head(){
        Node* aux1 = m_head;
        m_head = m_head->next;
        aux1->next = NULL;
        m_num_nodes --;
}


// Obtener por posición del nodo
Pelicula List::obt_by_position(int pos) {
    Node *temp = m_head;

    for(int i=0; i<=m_num_nodes; i++){
        if (i==pos){
            return temp->data;
        }else{
            temp=temp->next;
        }
    }

}
int List::cant() {
    return m_num_nodes;
}
void List::print() {
    Node *temp = m_head;
        if (!m_head) {
            cout << "La Lista está vacía " << endl;
        } else {
            while (temp) {
                temp->print(temp->data);
                if (!temp->next) cout << "NULL";
                temp = temp->next;
            }
        }
    }


List::~List() {}
