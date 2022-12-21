/**
* @file main.cpp
* @brief Main del programa
* @author Jorge Martín
* @date 2022-12-21
*************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "User.h"

int main(){
    int numTrabajador, nif;
    User u(numTrabajador, nif); 

    system("clear");

    u.get_access(); //va a la funcion user
    return 0;
};