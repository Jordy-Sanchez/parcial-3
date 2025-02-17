#ifndef CONVERSIONTIPFV_H_INCLUDED
#define CONVERSIONTIPFV_H_INCLUDED
#include <iostream>
using namespace std;
void convertir(){
    string Numero1,Numero2;
    int Suma;
    float Division;
cout<<"Ingresar Numero1"<<endl;
cin>>Numero1;
cout<<"Ingresar Numero2"<<endl;
cin>>Numero2;
Suma=stoi(Numero1)+stoi(Numero2);
Division=stof(Numero1)/stof(Numero2);
cout<<"El valor de la suma es:"<<Suma<<endl;
cout<<"El valor de la Division es:"<<Division<<endl;}


#endif // CONVERSIONTIPFV_H_INCLUDED
