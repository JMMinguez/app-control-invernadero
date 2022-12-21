/**
* @file Seguridad.cpp
* @brief Clase que alberga los sensores y camaras utilizados para la seguridad
* @author Jorge Martín
* @date 2022-12-21
*************************************************/
#include "Seguridad.h"
#include "SCam.h"
#include "SV.h"
#include "SP.h"
#include <iostream>

int eleccion;

Seguridad::Seguridad(){

}

void Seguridad::security(){;
    SCam sc;
    SP sp;
    SV sv;
    while(true){
        system("clear");

        cout << "\t\t\tJulio Veganos e Hijos" << endl;
        cout << "\t\t\t---------------------\n\n" << endl;
        cout << "\n1.Sensor Puertas \n2.Sensor Ventanas \n3.Camara \n4.Exit" << endl;
        cout << "\nOpcion: ";
        cin >> eleccion; //Depende de la eleccion va a una clase u a otra

        if(eleccion == 1){
            sp.open();
        }

        else if(eleccion == 2){
            sv.open();
        }

        else if (eleccion == 3){
            sc.get_imagen();
        }

        else if (eleccion == 4){
            break;
        }

        else{
            cout << "Opcion invalida" << endl;
            continue;
        }
    }
}
