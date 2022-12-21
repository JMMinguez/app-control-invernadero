/**
* \brief Muestra info del aire.
*
* Esta funcion muestra el aire en el momento y muestra los valores med, max y min del
aire
*
* \param aire Valor del aire.
* 
* 
*/
#ifndef CalidadAire_H
#define CalidadAire_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 

class CalidadAire{ 
    public:
        CalidadAire(); 
        float aire;
        float get_data();
        float medir();
    
    private:
        bool admin;
};

#endif