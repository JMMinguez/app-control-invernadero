/**
* \brief Pide login y da acceso.
*
* Pide los datos de inicio de sesion que comprara con los datos del server y da acceso o no
*
* \param ID numTrabajador sobrecvarga.
* \param NIF nif sobrecarga.
* \param nif Valor del nif del trabajador.
* \param numTrabajador Valor del numero de trabajador.
*/
#ifndef User_H
#define User_H

#include <iostream>
#include <string>
#include <vector> 
#include <stdlib.h>
using namespace std;

class User{
    public:
        User(int, int);
        void get_access();
        /**
         * Funcon principal del user que pide los datos y da acceso o nop
        */
        bool operator<(const User&)const; 
        /**
         * Funcion de la sobrecarga
        */

    private:
        int ID;
        int NIF;
        int nif;
        int numTrabajador; 
        bool acceso;
        bool admin;
        bool registro;
};

#endif