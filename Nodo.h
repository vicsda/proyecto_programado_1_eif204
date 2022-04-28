//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_NODO_H
#define PROYECTO_1_EIF204_NODO_H

#include<iostream>
using namespace std;


template<class tipo>
class Nodo{
private:
    tipo* datos;
    Nodo* siguiente;
public:
    Nodo(){
        datos=nullptr;
        siguiente=nullptr;
    }

    tipo* getDatos() const{
        return siguiente;
    }
    void setDatos(tipo* datos){
        Nodo::datos=datos;
    }

    Nodo* getSiguiente() const{
        return siguiente;
    }
    void setSiguiente() const{
        Nodo::siguiente=siguiente;
    }

};



#endif //PROYECTO_1_EIF204_NODO_H
