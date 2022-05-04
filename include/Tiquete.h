//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_TIQUETE_H
#define PROYECTO_1_EIF204_TIQUETE_H
#include "Object.h"
#include "RutaViaje.h"

class Tiquete:public Object{

private:
    string numeroTiquete;
    string cedulaComprador;
    RutaViaje* rutaAsignado;

public:
    Tiquete(string=" ",string=" ",RutaViaje* = nullptr);
    ~Tiquete();

    string getNumeroTiquete();
    string getCedulaComprador();
    RutaViaje* getViaje();

    void setNumeroTiquete(string);
    void setCedulaComprador(string);
    void setRuta(RutaViaje*);

    string toString();


};



#endif //PROYECTO_1_EIF204_TIQUETE_H
