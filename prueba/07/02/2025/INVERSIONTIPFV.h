#ifndef INVERSIONTIPFV_H_INCLUDED
#define INVERSIONTIPFV_H_INCLUDED
#include <iostream>
#include <algorithm>
using namespace std;
void invertir(){
string FRASE4;
FRASE4="HOLA INVITADO Esta es la clave";
cout<<"FRASE ORIGINAL: "<<FRASE4<<endl;
reverse(FRASE4.begin(),FRASE4.end());
cout<<"FRASE EN REVERSA: "<<FRASE4<<endl;
reverse(FRASE4.begin(),FRASE4.end());
cout<<"FRASE EN RECUPERADA: "<<FRASE4<<endl;}


#endif // INVERSIONTIPFV_H_INCLUDED
