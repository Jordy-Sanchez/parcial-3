#ifndef CONCATENARYLONGITUDTIPPA_H_INCLUDED
#define CONCATENARYLONGITUDTIPPA_H_INCLUDED
#include <iostream>
using namespace std;

void longitud(){
string FRASE3;
FRASE3= "paul alejandro flores velez";
int LONGITUD;
LONGITUD=FRASE3.length();
cout<<FRASE3<<endl;
cout<<"La cantidad es: "<<LONGITUD<<endl;

}
void concatenacion(){
    string Nombre1,Nombre2,Apellido1,Apellido2,nombreYapellido;
cout<<"Ingresar Nombre1"<<endl;
cin>>Nombre1;
cout<<"Ingresar Nombre2"<<endl;
cin>>Nombre2;
cout<<"Ingresar Apellido1"<<endl;
cin>>Apellido1;
cout<<"Ingresar Apellido2"<<endl;
cin>>Apellido2;
nombreYapellido = Nombre1 + " "+ Nombre2 +" " + Apellido1 +" " + Apellido2;
cout<<"Nombres completos: "<<nombreYapellido<<endl;}




#endif // CONCATENARYLONGITUDTIPPA_H_INCLUDED
