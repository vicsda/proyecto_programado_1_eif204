#include <iostream>
#include "controlador/ControladorBus.h"

int main() {
    ControladorBus* cont1 = new ControladorBus();
    cont1->control0();
    delete cont1;
}
