//
// Created by Francisco on 26/04/2022.
//

#include "Bus.h"


Bus::Bus(string mod,string num){
    modeloBus=mod;
    numeroPlaca=num;
}
Bus::~Bus(){

}

string Bus::toString(){
    stringstream ss;
    ss<<"Bus INFO: "<<endl;
    ss<<"Modelo bus: "<<modeloBus<<endl;
    ss<<"Numerp placa: "<<numeroPlaca<<endl;
    return ss.str();

}

string Bus::getModeloBus(){
    return modeloBus;
}
void Bus::setModeloBus(string mod){
    modeloBus=mod;
}

string Bus::getNumeroPlaca(){
    return numeroPlaca;
}
void Bus::setNumeroPlaca(string num){
    numeroPlaca=num;
}