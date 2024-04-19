#include "figura.h"

Figura::Figura(unsigned int p_Num)
{
    //ctor
}

Figura::~Figura()
{
    //dtor
}

Figura::Figura(const Figura& other)
{
    //copy ctor
}

Figura& Figura::operator=(const Figura& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

float Figura::area(){
return 0;
}

float Figura::perimetro(){
return 0;
}
