//
// Created by Francisco on 26/04/2022.
//

#include "RutaViaje.h"


RutaViaje::RutaViaje(string nom){
    nombreBus=nom;
}
RutaViaje::~RutaViaje(){

}

string RutaViaje::toString(){
    stringstream ss;
    ss<<"Ruta INFO: "<<endl;
    ss<<"Nombre BUS: "<<nombreBus<<endl;
    return ss.str();
}

string RutaViaje::getNombreBus(){
    return nombreBus;
}
void RutaViaje::setNombreBus(string nom){
    nombreBus=nom;
}