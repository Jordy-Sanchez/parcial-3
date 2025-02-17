#ifndef DECLARARPA_H_INCLUDED
#define DECLARARPA_H_INCLUDED
#include <iostream>
using namespace std;

void DeclararPA (string nombre, string apelldos[1][2]){

cout<< "ingrese el nombre"<<endl;
cin >> nombre;

for (i=0,i<1,i++){
    for(j=0,j<2,j++){
       cin>>apellidos[i][j];

    }
}
}

void MostrarDeclaracion(string nombre, string apellidos[1][2]){
 cout<<nombre<<endl;
 for (i=0,i<1,i++){
    for(j=0,j<2,j++){
            cout<<apellidos[i][j]<<"   ";
    }
            cout<<endl;
    }
 }


#endif // DECLARARPA_H_INCLUDED
