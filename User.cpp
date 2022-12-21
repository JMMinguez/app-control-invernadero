/**
* @file User.cpp
* @brief Clase que contiene el login y pide los datos de inicio de sesion
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "Server.h"
#include "Dashboard.h"
using namespace std;

int numTrabajador;
int nif;

User::User(int numTrabajador, int nif){
    nif = NIF;
    numTrabajador = ID;
}

void User::get_access(){
    Server s;
    Dashboard d;
    
    while (true){
        system("clear");
        admin == false;

        registro = false;
        cout << "\t\t\t\tLOGIN DE USUARIO" << endl; //decoracion
        cout << "\t\t\t\t----------------" << endl;

        cout << "Introduzca su numero de empleado: "; //Pide el usuario
        cin >> numTrabajador;
        cout << "Introduzca su nif: "; //Pide la clave
        cin >> nif;

        if (s.login(numTrabajador,nif) == true){
            cout << "Acceso concedido" << endl;
            if (numTrabajador%5 == 0){
                admin == true;
                cout << "Bienvenido Admin";
            }
            else{
                cout << "Bienvenido User";
            }
            d.main_screen(admin);
        
        }
    }
};

bool User::operator<(const User &other)const{
    return(this->ID > other.ID); //
}