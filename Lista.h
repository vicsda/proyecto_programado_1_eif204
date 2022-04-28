//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_LISTA_H
#define PROYECTO_1_EIF204_LISTA_H


#include "Nodo.h"
using namespace std;

template <class tipo>
class Lista{
private:
    Nodo<tipo> *raiz;

public:
    Lista();
    ~Lista();
    string toString();
    void agregarFinal(tipo*);
    void agregarInicio(tipo*);
    bool borrar(tipo*,string &);
    bool eliminarEnELugar(int lug);
};

#endif //PROYECTO_1_EIF204_LISTA_H
