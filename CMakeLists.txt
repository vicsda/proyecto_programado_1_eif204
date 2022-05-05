cmake_minimum_required(VERSION 3.21)
project(proyecto_1_eif204)

set(CMAKE_CXX_STANDARD 14)

add_executable(proyecto_1_eif204 main.cpp include/Object.h src/Asiento.cpp include/Asiento.h include/Nodo.h include/Lista.h include/Bus.h src/Bus.cpp include/RutaViaje.h include/Tiquete.h src/Tiquete.cpp include/DatosBus.h src/DatosBus.cpp include/Utilidades.h include/Arreglo.h src/RutaViaje.cpp include/Lista.h controlador/ControladorBus.cpp controlador/ControladorBus.h interfaz/VistaBus.cpp interfaz/VistaBus.h interfaz/VistaRuta.cpp interfaz/VistaRuta.h controlador/ControladorRuta.cpp controlador/ControladorRuta.h)
