/**
* \brief Muestra la cmara termica.
*
* Muestra la camra termica
*
* \param ex_rec_t Valor para salir de la clase.
* 
* 
*/
#ifndef Tcam_H
#define Tcam_H

#include <iostream>
#include <stdlib.h>
#include <string> //
using namespace std;

class Tcam{
    public:
        Tcam();
        void get_imagen();
        int ex_rec_t;
        int opcion;
    
    private:

};

#endif