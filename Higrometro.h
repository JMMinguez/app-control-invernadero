/**
* \brief Muestra info de la humedad.
*
* Esta funcion muestra la humedad en el momento y muestra los valores med, max y min del
la humedad
*
* \param hum Valor de la humedad.
* 
* 
*/
#ifndef Higrometro_H
#define Higrometro_H

#include <iostream> //
#include <stdlib.h>
#include <string>
using namespace std;

class Higrometro{
    public:
        Higrometro();
        float hum;
        float get_data();
        float medir();
    
    private:
        bool admin;
};

#endif