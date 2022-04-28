//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_TIQUETE_H
#define PROYECTO_1_EIF204_TIQUETE_H
#include "Object.h"
#include "Bus.h"
#include "RutaViaje.h"

#include<iostream>
#include<sstream>
using namespace std;


class Tiquete:public Object{

private:
    string numeroTiquete;
    string cedulaComprador;
    Bus* busAsignado;
    RutaViaje* rutaAsignado;

public:
    Tiquete(string=" ",string=" ",Bus* = NULL,RutaViaje* = NULL);
    ~Tiquete();

    string getNumeroTiquete();
    string getCedulaComprador();
    Bus* getBus();
    RutaViaje* getViaje();

    void setNumeroTiquete(string);
    void setCedulaComprador(string);
    void setBus(Bus*);
    void setRuta(RutaViaje*);

    string toString();


};



#endif //PROYECTO_1_EIF204_TIQUETE_H
