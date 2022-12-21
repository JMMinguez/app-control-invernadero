/**
* \brief Muestra info del ventanas.
*
* 
*
* \param vstatus Valor de la ventana.
* 
* 
*/
#ifndef SV_H
#define SV_H

#include <iostream>
#include <stdlib.h>
#include <string> //
using namespace std;

class SV{
    public:
        SV();
        bool vstatus;
        bool open();
};

#endif