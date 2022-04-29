//
// Created by Francisco on 26/04/2022.
//

#include "RutaViaje.h"


RutaViaje::RutaViaje(const string &nombreRuta, Lista<Bus> *busAsignados) : nombreRuta(nombreRuta),
                                                                             busAsignados(busAsignados) {}

const string &RutaViaje::getNombreRuta() const {
    return nombreRuta;
}

void RutaViaje::setNombreRuta(const string &nombreRuta) {
    RutaViaje::nombreRuta = nombreRuta;
}

Lista<Bus> *RutaViaje::getBusAsignados() const {
    return busAsignados;
}

void RutaViaje::setBusAsignados(Lista<Bus> *busAsignados) {
    RutaViaje::busAsignados = busAsignados;
}

std::string RutaViaje::toString() {
    std::stringstream s;
    s<<"Ruta INFO: "<<endl;
    s<<"Nombre de la Ruta: "<<getNombreRuta()<<std::endl;
    s<<"---Buses para ruta---"<<std::endl;
    s<<getBusAsignados()->toString();

    return s.str();
}

