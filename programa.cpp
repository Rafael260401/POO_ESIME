#include "programa.h"

Programa::Programa()
{
    //ctor

}

Programa::~Programa()
{
    //dtor
}

void Programa::creartriangulo(){

    cout<<"¿Cúanto mide el primer lado?";
    int lado1;
    cin>>lado1;
    cout<<"¿Cúanto mide el segundo lado?";
    int lado2;
    cin>>lado2;
    cout<<"¿Cúanto mide el tercer lado?";
    int lado3;
    cin>>lado3;
    m_f = new Triangulo(lado1,lado2,lado3);
}

void Programa::menu(){
cout<<"¿Qué figura quieres crear?";
int opcion;
cin>>opcion;
switch(opcion){
case 1:
    Figura


    }
case 2:
    Triangulo

}
