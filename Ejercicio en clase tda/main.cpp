#include <iostream>
#include <vector>
using namespace std;

struct Jordy {
    string nombre;
    string tipo;
    float valor;
    string unidad;
    int cantidad;
};

int main() {

    vector<Jordy> componentes;
    int n;

    cout << "Ingrese el numero de componentes electronicos a registrar: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Jordy valentin;
        cout << "\nIngrese el nombre del componente: ";
        cin.ignore();
        getline(cin, valentin.nombre);
        cout << "Ingrese el tipo: ";
        getline(cin, valentin.tipo);
        cout << "Ingrese el valor del componente: ";
        cin >> valentin.valor;
        cout << "Ingrese la unidad: ";
        cin >> valentin.unidad;
        cout << "Ingrese la cantidad disponible en stock: ";
        cin >> valentin.cantidad;

        componentes.push_back(valentin);
    }

    cout << "\n===== Lista de Componentes Electronicos =====\n";
    for (int i = 0; i < componentes.size(); i++) {
        cout << "Nombre: " << componentes[i].nombre << endl;
        cout << "Tipo: " << componentes[i].tipo << endl;
        cout << "Valor: " << componentes[i].valor << " " << componentes[i].unidad << endl;
        cout << "Cantidad en stock: " << componentes[i].cantidad << endl;
        cout << "--------------------------------------------\n";
    }

    bool encontrado = false;

    for (int i = 0; i < componentes.size(); i++) {
        if (componentes[i].nombre == "resistencia") {
            cout << " SE ENCONTRO : " << componentes[i].nombre << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << " NO SE ENCONTRO." << endl;
    }

    return 0;
}
