/**
* \brief Muestra info de lso sensores.
*
* Esta funcion contiene a tods los sensores
*
* \param opcion Valor de la opcion elegida por el user que lleva al sensor deseado.
* 
* 
*/
#ifndef Sensor_H
#define Sensor_H

#include <iostream>
#include <stdlib.h> //
using namespace std;

class Sensor{
    public:
        Sensor();
        int opcion;
        void get_sens(int);
        /**
         * Funcion que tienen tienen todos los sensores y que dependiendo de la eleccion
         * enciara al usuario a uno u otro
        */
        void rethrow();
        /**
         * Funcion de la excepcion
        */
    
    private:
        
};

#endif