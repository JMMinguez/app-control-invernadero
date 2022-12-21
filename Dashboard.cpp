/**
* @file Dashboard.cpp
* @brief Clase que mostrara al usuario una interfaz grafica y que redigira a otras clases
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include <iostream>
#include <vector>
#include <unistd.h>
#include <string>
#include <stdlib.h>
#include "Dashboard.h"
#include "Server.h"
#include "Sensor.h"
#include "Seguridad.h"
#include "Excepcion.h"

int opcion;

Dashboard::Dashboard(){

}

void Dashboard::main_screen(bool admin){
        Server s;
        Sensor sens;
        Seguridad seg;
    
    while(true){ //Muestra las opciones y dependiendo de la eleccion va a una clase u a otra
        system("clear");

        cout << "\t\t\tJulio Veganos e Hijos" << endl;
        cout << "\t\t\t---------------------\n\n" << endl;
        cout << "\n1.Temperatura \n2.Nivel de luz \n3.Calidad del aire \n4.Humedad \n5.Cámara \n6.Cámara térmica \n7.Seguridad \n8.Configuracion \n9.Cerrar sesión" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;
        
        try{
            if(opcion <= 6 && opcion > 0){
                sens.get_sens(opcion);
            }

            else if(opcion == 7){
                seg.security();
            }

            else if(opcion == 8){
                while(true){
                    system("clear");
                    cout << "\t\t\tJulio Veganos e Hijos" << endl;
                    cout << "\t\t\t---------------------\n\n" << endl;
                    cout << "\n1.Registrar nuevo empleado" << endl;
                    cout << "\nOpcion: ";
                    cin >> opcion;

                    if(opcion == 1){ //Solo permite esta opcion si el usuario es administrador
                        if(admin == true){
                            s.registro();
                        }
                        else{
                            cout << "No tienes permisos suficientes, por favor, contacta con un administrador";
                            sleep(3);
                            system("clear");
                            main_screen(admin);
                        }
                    }
                }  
            }

            else if(opcion == 9){
                system("clear");
                cout << "Cerrando sesion..."<< endl;
                sleep(2);
                system("clear");
                exit(0);
            }
        }catch(exception& ex){
            cout << "Opción invalida" << endl;
            sleep(2);
        }
    }
};