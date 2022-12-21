/**
* @file Luxometro.cpp
* @brief Clase del sensor que mide la intensidad de luz
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <unistd.h>
#include <iostream>
#include "Luxometro.h"
#include "Sensor.h"
#include "Server.h"
#include "Dashboard.h"

float luz; 

Luxometro::Luxometro(){

}

float Luxometro::get_data(){ //Va al server donde estan almacenados los datos
        Server s;
        s.luz_data();

};

float Luxometro::medir(){ //mide la luz
    Dashboard d;
    luz = 35 + rand() % 95;
    cout << "El nivel de luz actual del invernadero es de " << luz << "lm";
    sleep(4);
    d.main_screen(admin);

};