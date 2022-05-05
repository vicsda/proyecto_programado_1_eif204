//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_LISTA_H
#define PROYECTO_1_EIF204_LISTA_H
#include <sstream>
#include "Nodo.h"

template <class tipo>
class Lista{
private:
    Nodo<tipo> *raiz;
public:
    Lista(){
        raiz = new Nodo<tipo>;
    }
    ~Lista(){
        Nodo<tipo> *temp;
        Nodo<tipo> *anterior;
        if (raiz->getSiguiente() == nullptr){
            delete raiz;
        } else{
            while (raiz->getSiguiente() != nullptr){
                temp = raiz;
                while (temp->getSiguiente() != nullptr){
                    anterior = temp;
                    temp = temp->getSiguiente();
                }
                anterior->setSiguiente(nullptr);
                delete temp;
            }
        }
    }

    string toString() {
        stringstream s;
        Nodo<tipo> *temporal = raiz;
        if (temporal->getSiguiente() == nullptr){
            s<<"Lista vacia. "<<std::endl;
        } else{
            temporal = temporal->getSiguiente();
            do {
                s<<temporal->getDatos()->toString();
                s<< "--->";
                temporal = temporal->getSiguiente();
            }while (temporal != nullptr);
            // s<<"NULL"<<std::endl;
        }
        return s.str();
    }
    void agregarInicio(tipo* p) {
        Nodo<tipo> *nuevo = new Nodo<tipo>;
        nuevo->setDatos(p);
        nuevo->setSiguiente(raiz->getSiguiente());
        raiz->setSiguiente(nuevo);

    }
};

#endif //PROYECTO_1_EIF204_LISTA_H
