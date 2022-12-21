/**
* @file Higrometro.cpp
* @brief Clase del sensor que mide la humedad
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <unistd.h>
#include <iostream>
#include "Higrometro.h"
#include "Sensor.h"
#include "Server.h"
#include "Dashboard.h"

float hum; 

Higrometro::Higrometro(){

}

float Higrometro::get_data(){ //Va al server donde estan almacenados los datos
        Server s;
        s.hum_data();

};

float Higrometro::medir(){ //mide la humedad
    Dashboard d;
    hum = 7 + rand() % 34;
    cout << "La humedad actual del invernadero es del " << hum << "%";
    sleep(4);
    d.main_screen(admin);

};