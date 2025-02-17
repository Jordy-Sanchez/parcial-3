#ifndef INVERSIONJORDY_H_INCLUDED
#define INVERSIONJORDY_H_INCLUDED

#include <iostream>
using namespace std;

void invertir(){
string FRASE4;
FRASE4="HOLA FUNDAMENTOS DE PROGRAMACION 2025 Esta es la clave";
cout <<"FRASE ORIGINAL " <<FRASE4 <<endl;
reverse(FRASE4.begin (), FRASE4.end ());
cout<< "FRASE EN REVERSA: " <<FRASE4<<endl;
reverse(FRASE4.begin (), FRASE4.end ());
cout<<"FRASE RECUPERADA " << FRASE4<<endl;

}

#endif // INVERSIONJORDY_H_INCLUDED
