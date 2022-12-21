/**
* \brief Muestra la cam.
*
* Muestra la cam
*
* \param ex_rec_t Valor para salir de la clase.
* 
* 
*/
#ifndef SCam_H
#define SCam_H

#include <iostream>
#include <stdlib.h> //
#include <string>
using namespace std;

class SCam{
    public:
        SCam();
        void get_imagen();
        int ex_rec_t;
        int opcion;
    
    private:

};

#endif