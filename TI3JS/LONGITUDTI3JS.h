#ifndef LONGITUDTI3JS_H_INCLUDED
#define LONGITUDTI3JS_H_INCLUDED

#include <iostream>
using namespace std;



void longitud(string dato[2][1][3]) {

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {

                int LONGITUD = dato[i][j][k].length();
                cout << "La frase en dato[" << i << "][" << j << "][" << k << "] es: " << dato[i][j][k] << endl;
                cout << "La cantidad de caracteres es: " << LONGITUD << endl;
            }
        }
    }
}
#endif // LONGITUDTI3JS_H_INCLUDED
