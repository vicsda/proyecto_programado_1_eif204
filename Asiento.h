//
// Created by Daniela Madrigal on 21/4/2022.
//

#ifndef PROYECTO_1_EIF204_ASIENTO_H
#define PROYECTO_1_EIF204_ASIENTO_H

#include "Object.h"

class Asiento {
private:
    int numAsientos;
    bool disponibilidad;
public:
    Asiento(int numAsientos = 0, bool disponibilidad = false);
    int getNumAsientos() const;
    void setNumAsientos(int numAsientos);
    bool isDisponibilidad() const;
    void setDisponibilidad(bool disponibilidad);

     std::string toString();

};


#endif //PROYECTO_1_EIF204_ASIENTO_H
