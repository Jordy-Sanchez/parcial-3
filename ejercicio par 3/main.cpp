#include <iostream>

using namespace std;

int main()
{
    string frase;
    cout << "ingrese la frase: " << endl;
    getline(cin, frase);
    cout << "La frase es: " <<frase<< endl;

    //asignacion
    string texto;
    texto=frase;
    cout << texto<< endl;

    //longitud de una frase

    int longitud;

    longitud= frase.length();
    cout <<"La longitud de la frase es: " <<longitud<<endl;

    //concatenacion
    string frase2;
    cout<< "NOMBRE: " <<endl;
    cin >> frase2;
    string frasetotal=frase+frase2;
    cout << "la longitud total es: " << frasetotal.length() << endl;
    cout << frasetotal << endl;
    string nombre = " jordy sanchez ";
    frasetotal=frase +  frase2+ nombre;
    cout <<frasetotal << endl;

    string n1,n2,a1,a2;

      cout << "primer nombre: " << endl;
         cin >> n1;
        cout << "segundo nombre: " << endl;
           cin >> n2;
          cout << "primer apellido: " << endl;
             cin >> a1;
            cout << "segundo apellido: " << endl;
               cin >> a2;
            string nombresyapellido= n1+ " " +n2+ " " +a1+ " " +a2;
            cout << nombresyapellido<< endl;

            //conversion a mayusculas
            string nombreMayusculas = nombresyapellido;

    return 0;
}
