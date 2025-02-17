#ifndef BUSCARTI3JS_H_INCLUDED
#define BUSCARTI3JS_H_INCLUDED

#include <iostream>
#include <algorithm>
using namespace std;

void buscar(string dato[2][1][3]) {
    string BUSCA;
    string FRASE6;


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 1; ++j) {
            for (int k = 0; k < 3; ++k) {
                FRASE6 = dato[i][j][k];
            }
        }
    }


    cout << "Ingrese la palabra que desee buscar: ";
    cin >> BUSCA;


    if (FRASE6.find(BUSCA) != string::npos) {
        cout << "Encontrado" << endl;
    } else {
        cout << "Desaparecido" << endl;
    }
}

#endif // BUSCARTI3JS_H_INCLUDED
