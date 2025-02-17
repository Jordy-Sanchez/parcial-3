#ifndef LONGITUJORDY_H_INCLUDED
#define LONGITUJORDY_H_INCLUDED

#include <iostream>
using namespace std;


 void longitud() { // DE CLARO UN VALO

 string FRASE3; // declarar
 FRASE3= "JORDY JAREN SANCHEZ BOSMEDIANO"; //asignar valor
 int LONGITUD; //numero de caracteres
 LONGITUD=FRASE3.length (); // contar caracteres de la frase
 cout<< FRASE3 << endl; // mostrar frase
    cout << "LA CANTIDAD ES : " <<  LONGITUD<< endl; //MOSTRAR NUMERO
 }

 void concatenacion() {
 string Nombre1, Nombre2, Apellido1, Apellido2, nombreYapellido;
 cout<<"Ingresar Nombre1" <<endl;
 cin >> Nombre1;
 cout<<"Ingresar Nombre2" <<endl;
 cin >> Nombre2;
 cout<<"Ingresar Apellido1" <<endl;
 cin >> Apellido1;
 cout<<"Ingresar Apellido2" <<endl;
 cin >> Apellido2;
 nombreYapellido = Nombre1 + " " + Nombre2 + " " + Apellido1 + " " + Apellido2;

 cout<< " Nombres completos: " << nombreYapellido<<endl;

 }


#endif // LONGITUJORDY_H_INCLUDED
