//
// Created by Daniela Madrigal on 21/4/2022.
//

#include "Asiento.h"

Asiento::Asiento(int numAsientos, bool disponibilidad) : numAsientos(numAsientos), disponibilidad(disponibilidad) {}

int Asiento::getNumAsientos() const {
    return numAsientos;
}

void Asiento::setNumAsientos(int numAsientos) {
    Asiento::numAsientos = numAsientos;
}

bool Asiento::isDisponibilidad() const {
    return disponibilidad;
}

void Asiento::setDisponibilidad(bool disponibilidad) {
    Asiento::disponibilidad = disponibilidad;
}

std::string Asiento::toString() {
    std::stringstream s;

    return s.str();

}