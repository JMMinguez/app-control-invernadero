/**
* \brief Excepcionjes.
*
* Esta funcion muestra el aire en el momento y muestra los valores med, max y min del
aire
*
* \param aire The first number to add.
* 
* 
*/
#ifndef Excepcion_H
#define Exepcion_H

#include <iostream>
#include <string>
#include <limits>
#include <stdexcept>
using namespace std;

class Excepcion: public std::exception{

    public:
        Excepcion(const char* mensaje):mensaje_(mensaje){}
        const char* what() const throw() { return mensaje_.c_str();}
    
    private:
        std::string mensaje_;
};

#endif