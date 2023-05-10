#include <iostream>
#include "Operaciones básicas.h"
using namespace std;
using namespace OpBasicas;

int main()
{
    int a, m, d;
    cout<<"Ingrese su fecha de nacimiento:"<<endl;
    cout<<"Año: ";
    cin>>a;
    cout<<"Mes: ";
    cin>>m;
    cout<<"Dia: ";
    cin>>d;

    if (fecump(d, m)==1)
    {
     cout<<"No ha celebrado su cumpleaños."<<endl;   
    }
    else
    {
        cout<<"Ya ha celebrado su cumpleaños."<<endl;
    }

return 0;
}