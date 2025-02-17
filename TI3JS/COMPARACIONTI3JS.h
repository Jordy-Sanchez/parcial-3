#ifndef COMPARACIONTI3JS_H_INCLUDED
#define COMPARACIONTI3JS_H_INCLUDED

#include <iostream>
using namespace std;

void comparar(string dato[2][1][3]) {

    string Palabra1, Palabra2;


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {

                if (k == 0) {
                    Palabra1 = dato[i][j][k];
                }
                else if (k == 1) {
                    Palabra2 = dato[i][j][k];
                }
            }
        }
    }


    if (Palabra1 == Palabra2) {
        cout << "Coinciden" << endl;
    } else {
        cout << "Son diferentes" << endl;
    }
}

#endif // COMPARACIONTI3JS_H_INCLUDED
