#include <iostream>
#include "Operaciones básicas.h"
using namespace std;
using namespace OpBasicas;

int main()
{
    float N1;
    cout<<"Este programa tiene el fin de convertir grados a radianes."<<endl<<endl;
    cout<<"Igrese los grados: ";
    cin>>N1;
    
    cout<<"La conversion de "<<N1<<" grados a radianes es: "<<grad_rad(N1)<<endl;

    return 0;
}