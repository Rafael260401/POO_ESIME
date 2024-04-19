#include "triangulo.h"

Triangulo::Triangulo( float p_Lado1,  float p_Lado2,  float p_Lado3)
{
    //ctor
}

Triangulo::~Triangulo()
{
    //dtor
}

Triangulo::Triangulo(const Triangulo& other)
{
    //copy ctor
}

Triangulo& Triangulo::operator=(const Triangulo& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

float Triangulo::area(){return m_Lado1 + m_Lado2/2;}
float Triangulo::perimetro(){return m_Lado1 + m_Lado2 + m_Lado3;}
