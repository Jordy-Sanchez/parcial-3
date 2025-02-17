#include <iostream>

#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\DECLARACIONTI3JS.h"

#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\CONVERSIONTI3JS.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\COMPARACIONTI3JS.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\CONCATENACIONTI3JS.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\LONGITUDTI3JS.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\BUSCARTI3JS.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\TI3JS\SUBCADENATI3JS.h"


using namespace std;

int main()
{
    string dato[2][1][3];
    int Opcion;
    char C;
    do{
    cout<<"====MENU===="<<endl;
    cout<<"1.DECLARACION"<<endl;
    cout<<"2.LONGITUD"<<endl;
    cout<<"3.CONCATENACION"<<endl;
    cout<<"4.COMPARACION"<<endl;
    cout<<"5.CONVERSION"<<endl;
    cout<<"6.SUBCADENA"<<endl;
      cout<<"7.BUSCAR"<<endl;
    cout<<"============"<<endl;
    cout<<"Indicar la opcion que desee"<<endl;
    cin>>Opcion;
    cout<<"============"<<endl;
        switch(Opcion){

    case 1:{
        cout<<"DECLARACION"<<endl;
       DECLARACION(dato);
        break;}

    case 2:{
        cout<<"LONGITUD"<<endl;
         longitud(dato);
        break;}

    case 3:{
        cout<<"CONCATENACION"<<endl;
         concatenacion(dato);
         break;}

        case 4:{
        cout<<"COMPARACION"<<endl;
        comparar(dato);
        break;}

         case 5:{
        cout<<"CONVERSION"<<endl;
        convertir(dato);
        break;}

                case 6:{
        cout<<"SUBCADENA"<<endl;
        subcadenas(dato);
        break;}

         case 7:{
        cout<<"BUSCAR"<<endl;
         buscar(dato);
         break;}
      }
      cout<<"CONTINUAR S/N"<<endl;
      cin>>C;
    } while(C=='S');{}
    return 0;
}
