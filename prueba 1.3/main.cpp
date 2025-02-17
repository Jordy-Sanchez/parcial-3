#include <iostream>

#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba 1.3\declararjordy.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba 1.3\longitujordy.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba 1.3\comparacionjordy.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba 1.3\conversionjordy.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba 1.3\inversionjordy.h"
using namespace std;

int main() {
    int opcion;


    do {

        cout << "Menu de opciones:" << endl;
        cout << "1. Declaracion" << endl;
        cout << "2. Longitud" << endl;
        cout << "3. Concatenacion" << endl;
        cout << "4. Comparacion" << endl;
        cout << "5. Conversion" << endl;
        cout << "6. Reversa" << endl;
        cout << "7. Inversion" << endl;
        cout << "8. Buscar" << endl;

        cout << "==========="<< endl;

        cout << "Seleccione una opcion: ";

        cin >> opcion;

        cout << "==========="<< endl;


        switch (opcion) {
            case 1:{
                string FRASE1;
                cout << "Declaracion de variable" << endl;
                ASIGNACION(FRASE1);

                break;}

            case 2:{
                cout << "Longitud" << endl;
                longitud();

                break;}

            case 3:{
                cout << "Concatenacion" << endl;
                concatenacion();

                break;}



            case 4:{
                cout << "Comparacion " << endl;
                comparar();
                break;}

                case 5:{
                cout << "Conversion " << endl;
                convertir();}


                case 6:{
                cout << "Inversion " << endl;
                invertir();}


                case 7:{
                cout << "Subcadena " << endl;
                subcadenas();}

                case 7:{
                cout << "Buscar " << endl;
                buscar();}
        }


                cout << "CONTINUAR S/N" << endl;
                cin>> C;

        }
    } while (C == S);

    return 0;
}
