#ifndef CREARTIPPA_H_INCLUDED
#define CREARTIPPA_H_INCLUDED
#include <iostream>
using namespace std;
void crearPaul(string nombres[1][2]){
     for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
                cout<<"Ingrese su apellido"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin>>nombres[i][j];
            }
        }
}
void crearpaul2(string apellidos[1][2]){
     for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
                cout<<"Ingrese su apellido"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin>>apellidos[i][j];
            }
        }
}
float crearPagos(string pagos [2][2][2]){
       for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<"Ingrese los pagos realizados""["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<endl;
                cin>>pagos [i][j][k];
            }
        }
     }
}


#endif // CREARTIPPA_H_INCLUDED
