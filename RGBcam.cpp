/**
* @file RGBcam.cpp
* @brief Clase de la camara RGB
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include "RGBcam.h"
#include "Sensor.h"


int ex_rec_rgb;

RGBcam::RGBcam(){

};

void RGBcam::get_imagen(){ //Imagen
        Sensor sens;
        system("clear");
        cout << "NO SIGNAL";
        cout << "\n\n\n\n\n 1 para salir";
        cin >> ex_rec_rgb;
        if (ex_rec_rgb == 1){
            sens.get_sens(opcion);
        }
};