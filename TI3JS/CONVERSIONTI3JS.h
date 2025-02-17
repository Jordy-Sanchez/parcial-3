#ifndef CONVERSIONTI3JS_H_INCLUDED
#define CONVERSIONTI3JS_H_INCLUDED

#include <iostream>
using namespace std;

void convertir(string dato[2][1][3]) {

    int Numero1, Numero2;
    int Suma;
    float Division;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {

                if (k == 0) {
                    Numero1 = stoi(dato[i][j][k]);
                    cout << "Primer número (dato[" << i << "][" << j << "][" << k << "]): " << Numero1 << endl;
                }
                else if (k == 1) {
                    Numero2 = stoi(dato[i][j][k]);
                    cout << "Segundo número (dato[" << i << "][" << j << "][" << k << "]): " << Numero2 << endl;
                }


                Suma = Numero1 + Numero2;
                Division = (float)Numero1 / Numero2;

                cout << "El valor de la suma es: " << Suma << endl;
                cout << "El valor de la división es: " << Division << endl;
            }
        }
    }
}

#endif // CONVERSIONTI3JS_H_INCLUDED
