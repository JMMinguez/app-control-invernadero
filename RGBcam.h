/**
* \brief Muestra la cam.
*
* Muestra la cam
*
* \param ex_rec_rgb Valor que para salir de la clase
* 
* 
*/
#ifndef RGBcam_H
#define RGBcam_H

#include <iostream> //
#include <stdlib.h>
#include <string>
using namespace std;

class RGBcam{
    public:
        RGBcam();
        void get_imagen();
        int ex_rec_rgb;
        int opcion;
    
    private:

};

#endif