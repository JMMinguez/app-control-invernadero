/**
* @file Server.cpp
* @brief Clase que contiene los datos de los usuarios y mediciones de los sensores
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <unistd.h>
#include "Dashboard.h"
#include "User.h"
#include "Server.h"
using namespace std;

int nuevoT;
string nuevoNif;
    
Server::Server(){
    datos.insert(User{123,12345678});
    datos.insert(User{124,12345678});
    datos.insert(User{125,12345678});
    
}  

bool Server::login(int numTrabajador, int nif){ //Comprueba si los datos introducidos son correctos
    if(datos.find({numTrabajador,nif}) != datos.end()){
        return true;
    }
    
    return false;
};
/**
 * bool Server::login(int numTrabajador, int nif){ //Comprueba si los datos introducidos son correctos
 *   if(datos.find({numTrabajador,nif}) != datos.end()){
 *       return true;
 *  }
 *   
 *   return false;
 *};
 *
 * Esta parte compara los valores introducidos por el usuario y comprueba si estan
 * en su base de datos, en caso afirmativo, devuelve un true.
*/

void Server::registro(){
    Dashboard d;
    cout << "Funcion sin implemetar";
    sleep(3);
    d.main_screen(admin);
};

float Server::temp_data(){
    float max_temp, min_temp, med_temp;
    float tp;
    max_temp = 0;
    min_temp = 100;
    Dashboard d;

    vector<float> Temperaturas{27, 24.5, 19.3, 17.1, 28.2, 24.3, 30, 18.2, 13.4, 8.2};
    for(int i = 0; i < Temperaturas.size(); i++){
        tp = tp + Temperaturas[i];

        if (Temperaturas[i] > max_temp){
            max_temp = Temperaturas[i];
        }

        if (Temperaturas[i] < min_temp){
            min_temp = Temperaturas[i];
        }
    }
    med_temp = tp / 10;

    cout << "La temperatura maxima en las 10 ultimas mediciones fue de " << max_temp << endl;
    cout << "La temperatura minima en las 10 ultimas mediciones fue de " << min_temp << endl;
    cout << "La temperatura media de las 10 ultimas mediciones fue de " << med_temp << endl;
    sleep(5);
    d.main_screen(admin);

};

float Server::luz_data(){
    float max_l, min_l, med_l;
    float tl;
    max_l = 0;
    min_l = 100;
    Dashboard d;

    vector<float> l{45, 90, 56, 70, 72, 63, 60, 51, 90, 57};
    for(int i = 0; i < l.size(); i++){
        tl = tl + l[i];

        if (l[i] > max_l){
            max_l = l[i];
        }

        if (l[i] < min_l){
            min_l = l[i];
        }
    }
    med_l = tl / 10;

    cout << "El nivel de luz maximo en las 10 ultimas mediciones fue de " << max_l << endl;
    cout << "El nivel de luz minimo en las 10 ultimas mediciones fue de " << min_l << endl;
    cout << "El nivel de luz medio de las 10 ultimas mediciones fue de " << med_l << endl;
    sleep(5);
    d.main_screen(admin);

};

float Server::air_data(){
    float max_air, min_air, med_air;
    float ta;
    max_air = 0;
    min_air = 700;
    Dashboard d;

    vector<float> Air{76, 446, 168, 86, 43, 90, 326, 30, 187, 54};
    for(int i = 0; i < Air.size(); i++){
        ta = ta + Air[i];

        if (l[i] > max_air){
            max_air = Air[i];
        }

        if (l[i] < min_air){
            min_air = Air[i];
        }
    }
    cout << "El valor maximo de la calidad del aire fue de " << max_air;
    cout << "El valor minimo de la calidad del aire fue de " << min_air;
    med_air = ta / 10;
    if (med_air <= 50){
        cout << "La calidad media ha sido buena con un valor medio de: " << med_air;
    }
    else if (med_air <= 100){
        cout << "La calidad media ha sido normal con un valor medio de: " << med_air;
    }
    else if (med_air <= 150){
        cout << "La calidad media ha sido regular con un valor medio de: " << med_air;
    }
    else if (med_air <= 200){
        cout << "La calidad media ha sido mala con un valor medio de: " << med_air;
    }
    else if (med_air <= 300){
        cout << "La calidad media ha sido muy mala con un valor medio de: " << med_air;
    }
    else if (med_air > 300){
        cout << "La calidad media ha sido peligrosa con un valor medio de: " << med_air;
    }
    
    sleep(5);
    d.main_screen(admin);

};

float Server::hum_data(){
    float max_hum, min_hum, med_hum;
    float th;
    max_hum = 0;
    min_hum = 100;
    Dashboard d;

    vector<float> Humedad{45, 90, 56, 70, 72, 63, 60, 51, 90, 57};
    for(int i = 0; i < Humedad.size(); i++){
        th = th + Humedad[i];

        if (l[i] > max_hum){
            max_hum = Humedad[i];
        }
        

        if (l[i] < min_hum){
            min_hum = Humedad[i];
        }
    }
    med_hum = th / 10;

    cout << "El nivel de humedad maximo en las 10 ultimas mediciones fue de " << max_hum << endl;
    cout << "El nivel de humedad minimo en las 10 ultimas mediciones fue de " << min_hum << endl;
    cout << "El nivel de humedad medio de las 10 ultimas mediciones fue de " << med_hum << endl;
    sleep(5);
    d.main_screen(admin);

};
    