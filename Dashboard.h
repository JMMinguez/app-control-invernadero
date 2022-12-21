/**
* \brief Muestra info al usuario.
*
* Esta funcion muestra al usuario las opciones que tiene y dependiendo de la opcion elegida
va a una funcion u otra
*
* \param admin True o False para denominar al usuario como admin o no.
* \param opcion Numero para elegir la opcion deseada
* 
*/
#ifndef Dashboard_H
#define Dashboard_H

#include <iostream> //
#include <string>
#include <vector>
using namespace std;

class Dashboard{
    public:
        Dashboard();
        bool admin;
        void main_screen(bool admin);
        /**
         * 
         * La funcion muestra la pantalla principal y se trae el valor de admin para acceder a funciones reservadas
         * para los administradores
         * 
         */
        int opcion;

    
    private:
        string nif;
        int numTrabajador; 
        
};

#endif