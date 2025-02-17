#ifndef BUSQUEDAJORDY_H_INCLUDED
#define BUSQUEDAJORDY_H_INCLUDED

#include <iostream>
using namespace std;

void buscar(){
string FRASE6,BUSCA;
FRASE6="HOLA FUNDAMENTOS DE PROGRAMACION";
cout<<"Ingrese la palabra que desea buscar"<<endl;
cin>>BUSCA;
if (FRASE6.find(BUSCA)! = string::npos){
    cout<<"Encontrado" <<endl;
} else {cout<<"Desaparecido "<<endl;}

}

#endif // BUSQUEDAJORDY_H_INCLUDED
