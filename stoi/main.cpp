#include <iostream>
#include <string>

using namespace std;

int main() {
    string valor1, valor2;

    cout << "Ingrese el valor 1 en string ";
    cin >> valor1;
    cout << "Ingrese el valor 2 en string ";
    cin >> valor2;

    int suma = stoi(valor1) + stoi (valor2);
    cout << "la suma es: " << suma << endl;

    float division = stof(valor1) / stof (valor2);

    cout << "la division es: " << division << endl;
    return 0;
}
