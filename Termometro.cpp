/**
* @file Termometro.cpp
* @brief Clase del sensor que mide la temperatura
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <unistd.h>
#include <iostream>
#include "Termometro.h"
#include "Sensor.h"
#include "Server.h"
#include "Dashboard.h"

float temp; 

Termometro::Termometro(){

}

float Termometro::get_data(){ //Va al server donde estan almacenados los datos
        Server s;
        s.temp_data();

};

float Termometro::medir(){ //mide la temp
    Dashboard d;
    double *p[30];
    try{
        for (size_t i=0; i < 30; ++i){
            p[i] = new double [999999999];
        }
    }catch (bad_alloc &ex){
        cout << "Error";
    }

    
    temp = 7 + rand() % 34;
    cout << "La temperatura actual del invernadero es de " << temp << "ºC";
    sleep(4);
    d.main_screen(admin);

};