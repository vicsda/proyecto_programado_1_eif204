//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_RUTAVIAJE_H
#define PROYECTO_1_EIF204_RUTAVIAJE_H

#include<iostream>
#include<sstream>
using namespace std;
#include "Object.h"
class RutaViaje: public Object{


public:
    string nombreBus;

private:
    RutaViaje(string=" ");
    ~RutaViaje();

    string toString();

    string getNombreBus();
    void setNombreBus(string);


};




#endif //PROYECTO_1_EIF204_RUTAVIAJE_H
