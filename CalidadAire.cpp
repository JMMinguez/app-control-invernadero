/**
* @file CalidadAire.cpp
* @brief Clase del sensor que mide la calidad del aire
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <unistd.h>
#include <iostream>
#include "CalidadAire.h"
#include "Sensor.h"
#include "Server.h"
#include "Dashboard.h"

float aire; 

CalidadAire::CalidadAire(){

}

float CalidadAire::get_data(){ //Va al server donde estan almacenados los datos
        Server s;
        s.air_data();

};

float CalidadAire::medir(){ //Mide el aire
    Dashboard d;
    aire = 35 + rand() % 95;
    cout << "El nivel de luz actual del invernadero es de " << aire;
    sleep(4);
    d.main_screen(admin);

};