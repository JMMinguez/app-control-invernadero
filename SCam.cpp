/**
* @file SCam.cpp
* @brief Clase de la camara de seguridad
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include "SCam.h"
#include "Sensor.h"
#include "Seguridad.h"

int ex_rec_t;

SCam::SCam(){

};

void SCam::get_imagen(){ //Imagen
        Sensor sens;
        system("clear");
        cout << "NO SIGNAL";
        cout << "\n\n\n\n\n 1 para salir";
        cin >> ex_rec_t;
        if (ex_rec_t == 1){
            sens.get_sens(opcion);
        }
};