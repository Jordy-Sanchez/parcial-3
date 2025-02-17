#ifndef CONCATENACIONTI3JS_H_INCLUDED
#define CONCATENACIONTI3JS_H_INCLUDED

#include <iostream>
using namespace std;

void concatenacion(string dato[2][1][3]) {

    string Nombre1, Nombre2, Apellido1, Apellido2, nombreYapellido;


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {

                if (k == 0) {
                    Nombre1 = dato[i][j][k];
                } else if (k == 1) {
                    Nombre2 = dato[i][j][k];
                } else if (k == 2) {
                    Apellido1 = dato[i][j][k];
                    Apellido2 = dato[i][j][k];
                }
            }
        }
    }


    nombreYapellido = Nombre1 + " " + Nombre2 + " " + Apellido1 + " " + Apellido2;


    cout << "Nombre completo: " << nombreYapellido << endl;
}
#endif // CONCATENACIONTI3JS_H_INCLUDED
