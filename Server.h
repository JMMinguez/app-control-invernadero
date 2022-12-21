/**
* \brief Contiene todos los datos.
*
* Contiene los datos de los users, sensores y realiza alguna operacion basica
*
* \param Temperaturas vector con las temp
* \param l vector con los valores de la luz
* \param Aire vector con los valores del aire.
* \param Humedad vector con lso valores de la humedad
* \param min_x Valor minimo del vector
* \param max_x Valor maximo del vector
* \param med_x Valor medio del vector
*/
#ifndef Server_H
#define Server_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <set>
#include "User.h"
using namespace std;

class Server{
    public:
        Server();
        int numTrabajador;
        int nif;

        bool login(int,int);
        void registro();
        float temp_data();
        float luz_data();
        float air_data();
        float hum_data();
        bool admin;
        set<User>datos;    

        vector<float> Temperaturas; 
        float min_temp;
        float max_temp;
        float med_temp;
        int i;
        float tp;

        vector<float> l;
        float min_l;
        float max_l;
        float med_l;
        float tl;

        vector<float> Aire;
        float min_air;
        float max_air;
        float med_air;
        float ta;

        vector<float> Humedad;
        float min_hum;
        float max_hum;
        float med_hum;
        float th;
        
    private:
        int nuevoT;
        string nuevoNif;
        bool is;
        int distancia;
        bool is2;
        int distancia2;
};

#endif