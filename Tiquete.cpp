//
// Created by Francisco on 26/04/2022.
//

#include"Tiquete.h"


Tiquete::Tiquete(string numT,string cedC,RutaViaje* rut){
    numeroTiquete=numT;
    cedulaComprador=cedC;
    rutaAsignado = new RutaViaje;

}
Tiquete::~Tiquete(){

}

string Tiquete::getNumeroTiquete(){
    return numeroTiquete;
}
string Tiquete::getCedulaComprador(){
    return cedulaComprador;
}

RutaViaje* Tiquete::getViaje(){
    return rutaAsignado;
}

void Tiquete::setNumeroTiquete(string num){
    numeroTiquete=num;
}
void Tiquete::setCedulaComprador(string ced){
    cedulaComprador=ced;
}

void Tiquete::setRuta(RutaViaje* rut){
    rutaAsignado=rut;
}

string Tiquete::toString(){
    stringstream ss;
    ss<<"---TIQUETE---"<<endl;
    ss<<"Num tiquete: "<<numeroTiquete<<endl;
    ss<<"Cedula comprador: "<<cedulaComprador<<endl;
    ss<<"Ruta Asignada: "<<getViaje()->toString();
    return ss.str();




}