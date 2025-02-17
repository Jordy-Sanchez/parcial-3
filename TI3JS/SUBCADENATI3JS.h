#ifndef SUBCADENATI3JS_H_INCLUDED
#define SUBCADENATI3JS_H_INCLUDED

#include <iostream>
using namespace std;

void subcadenas(string dato[2][1][3]) {
    string FRASE5;


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {
                FRASE5 = dato[i][j][k];
            }
        }
    }


    string APELLIDO = FRASE5.substr(14, 7);


    cout << "APELLIDO: " << APELLIDO << endl;
}

#endif // SUBCADENATI3JS_H_INCLUDED
