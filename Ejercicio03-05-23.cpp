//Wesley Cardona
#include <iostream>
using namespace std;

int NH1(int N1)
{
    int div=0, cont=1;
    do
    {
        if((N1%cont)==0)
        {
            div+=cont;
        }
        cont++;
    } 
    while (cont<N1);
    
    return div;
}


int main()
{
    
    int a, b;
    cout<<"Programa que verifica si dos numeros hermanos o amigos..."<<endl<<endl;
    cout<<"Ingrese dos numeros comprendidos entre 1 y 1210"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;

    if((NH1(a)==b)&&(NH1(b)==a))
    {
        
    cout<<"Los numeros ingresados son numeros hermanos"<<endl;
    }
    else
    {
    cout<<"Los numeros ingresados no son numeros hermanos"<<endl;
    }

    return 0;
}