/**
* \brief Muestra info de la puerta
*
* 
*
* \param pstatus Valor de la puerta.
* 
* 
*/
#ifndef SP_H
#define SP_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; //

class SP{
    public:
        SP();
        bool pstatus;
        bool open();

};

#endif