#include <iostream>
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\2025\clase-05\02\declararpa.h"
using namespace std;


string apellidosPA[1][2];
int main()
{
    string nombre;
    char C;
     int option;
    do{

        cout<<"****************MENU**************"<<endl;
        cout<<"1.-DECLARAR"<<endl;
        cout<<"2.-CONCATENAR"<<endl;
        cout<<"3.-"<<endl;
        cout<<"4.-Salir"<<endl;
        cout<<"****************MENU**************"<<endl;
        cout<<"Ingrese la opcion que desea"<<endl;
        cin>>option;
        switch(option){
    case'1':
        Declarar(nombre,apellidos);
        MostrarDeclaracion(nombre,apelliods);
        break;
    case'2':
        concatenacion(nombre,apellidos)
        break;

    case'3':
        cout<<"OPERACION"<<endl;
        break;
    case'4':
        cout<<"SALIR"<<endl;

        break;
        cout<<"continuar Y/N?"<<endl;
        cin>>C;
        cout<<"===================="<<endl;

        }
    }while(option==4);

    return 0;
}
