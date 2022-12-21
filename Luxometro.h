/**
* \brief Muestra info de la luz.
*
* Esta funcion muestra la intensidad de la luz en el momento y muestra los valores med, max y min del
a luz
*
* \param luz Valor de la luz.
* 
* 
*/
#ifndef Luxometro_H
#define Luxometro_H

#include <iostream> //
#include <stdlib.h>
#include <string>
using namespace std;

class Luxometro{
    public:
        Luxometro();
        float luz;
        float get_data();
        float medir();
    
    private:
        bool admin;
};

#endif