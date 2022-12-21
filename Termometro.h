/**
* \brief Muestra info dela temperatura.
*
* Esta funcion muestra la temperatura en el momento y muestra los valores med, max y min del
temp
*
* \param temp Valor de la temperatura.
* 
* 
*/
#ifndef Termometro_H
#define Termometro_H

#include <iostream>
#include <stdlib.h>
#include <string> //
using namespace std;

class Termometro{
    public:
        Termometro();
        float temp;
        float get_data();
        float medir();
    
    private:
        bool admin;
        double p;
};

#endif