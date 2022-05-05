#include <iostream>
#include "controlador/ControladorRuta.h"

int main() {
    Bus* bus1 = new Bus("HUI767", "H1");
    Bus* bus2 = new Bus("AOI343", "Coaster");
    Bus* bus3 = new Bus("LEO696", "H1");

    Lista<Bus*>* dbBuses = new Lista<Bus*>(true);

    dbBuses->agregarElemento(bus1);
    dbBuses->agregarElemento(bus2);
    dbBuses->agregarElemento(bus3);

    ControladorRuta* cont1 = new ControladorRuta();

    cont1->control0(dbBuses);

    delete cont1;
}
