#include <iostream>

using namespace std;

int main()
{
    string frase="fundamentos de programacion jordy sanchez";
    string nombre;
    nombre=frase.substr(28 ,5);
    cout << "el nombre es " << nombre<< endl;
    return 0;
}
