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

    cout<<"�C�anto mide el primer lado?";
    int lado1;
    cin>>lado1;
    cout<<"�C�anto mide el segundo lado?";
    int lado2;
    cin>>lado2;
    cout<<"�C�anto mide el tercer lado?";
    int lado3;
    cin>>lado3;
    m_f = new Triangulo(lado1,lado2,lado3);
}

void Programa::menu(){
cout<<"�Qu� figura quieres crear?";
int opcion;
cin>>opcion;
switch(opcion){
case 1:
    Figura


    }
case 2:
    Triangulo

}
