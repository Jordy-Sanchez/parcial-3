#ifndef DECLARACIONTI3JS_H_INCLUDED
#define DECLARACIONTI3JS_H_INCLUDED

#include <iostream>
using namespace std;




void DECLARACION(string dato[2][1][3]) {

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {
                cout << "Ingrese la Frase para dato[" << i << "][" << j << "][" << k << "]:" << endl;
                getline(cin, dato[i][j][k]);
            }
        }
    }
}


void ASIGNACION(string dato[2][1][3]) {

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {

                dato[i][j][k] = "Asignación de Frase " + to_string(i * 3 + k + 1);
                cout << "Se ha asignado el valor: " << dato[i][j][k]
                     << " a dato[" << i << "][" << j << "][" << k << "]" << endl;
            }
        }
    }
}

#endif // DECLARACIONTI3JS_H_INCLUDED
