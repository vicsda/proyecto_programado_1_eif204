//
// Created by Francisco on 26/04/2022.
//

#ifndef PROYECTO_1_EIF204_BUS_H
#define PROYECTO_1_EIF204_BUS_H
#include "Object.h"
#include<iostream>
#include<sstream>
using namespace std;

class Bus:public Object{
private:
    string modeloBus;
    string numeroPlaca;

public:
    Bus(string=" ",string=" ");
    ~Bus();

    string toString();

    string getModeloBus();
    void setModeloBus(string);

    string getNumeroPlaca();
    void setNumeroPlaca(string);

};







#endif //PROYECTO_1_EIF204_BUS_H
