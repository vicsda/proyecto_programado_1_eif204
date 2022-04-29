//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_RUTAVIAJE_H
#define PROYECTO_1_EIF204_RUTAVIAJE_H

#include "Object.h"
#include "Bus.h"
#include "Lista.h"

class RutaViaje: public Object{
private:
    string nombreRuta;
    Lista<Bus> *busAsignados;
public:
    RutaViaje(const string &nombreRuta = "", Lista<Bus> *busAsignados = new Lista<Bus>());
    const string &getNombreRuta() const;
    void setNombreRuta(const string &nombreRuta);
    Lista<Bus> *getBusAsignados() const;
    void setBusAsignados(Lista<Bus> *busAsignados);
    //Metodos
    string toString();


};




#endif //PROYECTO_1_EIF204_RUTAVIAJE_H
