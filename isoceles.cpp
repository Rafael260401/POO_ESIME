#include "isoceles.h"

isoceles::isoceles(float p_iguales, float p_desiguales):Triangulo(p_iguales,p_desiguales,p_iguales)
{
    //ctor
}

isoceles::~isoceles()
{
    //dtor
}

isoceles::isoceles(const isoceles& other):Triangulo(other)
{
    //copy ctor
}
