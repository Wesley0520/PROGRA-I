#include <iostream>
#include "Operaciones básicas.h"
using namespace std;
using namespace OpBasicas;

int main()
{
    float an;
    cout<<"Programa que muestra las funciones trigonometricas del valor de un angulo."<<endl;
    cout<<"Ingrese el valor del angulo:";
    cin>>an;

    cout<<"Las funciones trigonometricas de "<<an<<" son:"<<endl;
    cout<<"Seno: "<<seno(grad_rad(an))<<endl;
    cout<<"Coseno: "<<coseno(grad_rad(an))<<endl;
    cout<<"Tangente: "<<tangente(grad_rad(an))<<endl;
    cout<<"Cotangente: "<<cottang(grad_rad(an))<<endl;
    cout<<"Secante: "<<sec(grad_rad(an))<<endl;
    cout<<"Cosecante: "<<cosec(grad_rad(an))<<endl;

    return 0;
}
