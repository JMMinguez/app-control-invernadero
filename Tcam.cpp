/**
* @file Tcam.cpp
* @brief Clase de la camara termica
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include "Tcam.h"
#include "Sensor.h"

Tcam::Tcam(){

}

void Tcam::get_imagen(){ //Imagen
        Sensor sens;
        system("clear");
        cout << "NO SIGNAL";
        cout << "\n\n\n\n\n 1 para salir";
        cin >> ex_rec_t;
        if (ex_rec_t == 1){
            sens.get_sens(opcion);
        }

};