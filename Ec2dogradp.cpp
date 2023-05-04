#include <iostream>
#include "Operaciones básicas.h"
using namespace std;
using namespace OpBasicas;

int main()
{
    float N1, N2, N3 ;
    cout<<"Este programa tiene el fin de solucionar ecuaciones de segundo grado mediante la formula cuadrática."<<endl<<endl;
    cout<<"Igrese los valores de a, b y c"<<endl;
    cout<<"a: ";
    cin>>N1;
    cout<<"b: ";
    cin>>N2;
    cout<<"c: ";
    cin>>N3;

    cout<<"Las respuestas son:"<<endl;
    cout<<"x2: "<<ec2grap(N1, N2, N3)<<endl;
    cout<<"x1: "<<ec2gran(N1, N2, N3)<<endl;

    return 0;
}