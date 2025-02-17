#ifndef BUSCARTIPPFV_H_INCLUDED
#define BUSCARTIPPFV_H_INCLUDED
#include <iostream>
#include <algorithm>
using namespace std;
void buscar(){
    string FRASE6,BUSCA;
FRASE6="HOLA INVITADO";
cout<<"Ingrese la palabra que desee buscar"<<endl;
cin>>BUSCA;
if(FRASE6.find(BUSCA)!=string::npos){
    cout<<"Encontrado"<<endl;
}else{cout<<"Desaparecido "<<endl;}
}



#endif // BUSCARTIPPFV_H_INCLUDED
