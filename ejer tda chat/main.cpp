#include <iostream>
#include <vector>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
    string carrera;
};

int main() {
    vector<Estudiante> estudiantes;
    int n;

    cout << "Ingrese el número de estudiantes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Estudiante e;
        cout << "Ingrese el nombre: ";
        cin.ignore();
        getline(cin, e.nombre);
        cout << "Ingrese la edad: ";
        cin >> e.edad;
        cout << "Ingrese la calificación: ";
        cin >> e.calificacion;
        cout << "Ingrese la carrera: ";
        cin.ignore();
        getline(cin, e.carrera);

        estudiantes.push_back(e);
    }

    cout << "\nLista de Estudiantes:\n";
    for (int i = 0; i < estudiantes.size(); i++) {
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificación: " << estudiantes[i].calificacion << endl;
        cout << "Carrera: " << estudiantes[i].carrera << endl;
        cout << "--------------------------\n";
    }

    return 0;
}

