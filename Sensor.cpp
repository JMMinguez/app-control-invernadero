/**
* @file Sensor.cpp
* @brief Clase que alberga todos los sensores
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include "Sensor.h"
#include "Dashboard.h"
#include "Termometro.h"
#include "Luxometro.h"
#include "CalidadAire.h"
#include "Higrometro.h"
#include "RGBcam.h"
#include "Tcam.h"
#include "Excepcion.h"

int opcion2;

Sensor::Sensor(){
}

void Sensor::rethrow(){
    try{
        cout << "Opcion invalida";
        throw Excepcion("sdfsdf");
    }catch(exception& ex){
        cout << "Vuelve a introducir la opcion deseada";
    }
};

void Sensor::get_sens(int opcion){
    system("clear");
    Termometro temp;
    Luxometro nl;
    CalidadAire ca;
    Higrometro hg;
    RGBcam rgb;
    Tcam t;

    try{
        if(opcion <= 0 || opcion > 6) (rethrow());
    }catch(exception& ex){
        cout << "Opcion invalida";
    }

        if (opcion <= 4){
            cout << "\t\t\tJulio Veganos e Hijos" << endl;
            cout << "\t\t\t---------------------\n\n" << endl;
            cout << "\n1Mostrar mediciones pasadas (max, min, media) \n2.Medir";
            cout << "\nOpcion: ";
            cin >> opcion2; //Dependiendo de la eleccion va a una clase y funcion distintas

            if(opcion == 1){
                if(opcion2 = 1){
                    temp.get_data();
                }

                else if(opcion2 = 2){
                    temp.medir();
                }
            }
            else if(opcion == 2){
                if(opcion2 = 1){
                    nl.get_data();
                }

                else if(opcion2 = 2){
                    nl.medir();
                }
            }
            else if(opcion == 3){
                if(opcion2 = 1){
                    ca.get_data();
                }

                else if(opcion2 = 2){
                    ca.medir();
                }
            }
            else if(opcion == 4){
                if(opcion2 = 1){
                    hg.get_data();
                }

                else if(opcion2 = 2){
                    hg.medir();
                }
            }
        }
        else if(opcion == 5){
            rgb.get_imagen();

        }
        else if(opcion == 6){
            t.get_imagen();

        }
};