#include <iostream>
#include <algorithm>
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\BUSCARTIPPFV.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\COMPARACIONTIPFV.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\CONCATENARYLONGITUDTIPPA.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\CONVERSIONTIPFV.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\INVERSIONTIPFV.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\SUBCADENATIPFV.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\CREARTIPPA.h"
#include "C:\Users\G406\Desktop\Fun. Prog\Parcial 2\prueba\07\02\2025\MOSTRARTIPPA.h"
using namespace std;
using namespace std;

int main()
{
    int Opcion;
    char C;
    do{
    cout<<"====MENU===="<<endl;
    cout<<"1.CREAR"<<endl;
    cout<<"2.MOSTRAR"<<endl;
    cout<<"3.LONGITUD"<<endl;
    cout<<"4.CONCATENACION"<<endl;
    cout<<"5.COMPARACION"<<endl;
    cout<<"6.CONVERSION"<<endl;
    cout<<"7.REVERSA"<<endl;
    cout<<"8.SUBCADENA"<<endl;
    cout<<"9.BUSCAR"<<endl;
    cout<<"============"<<endl;
    cout<<"Indicar la opcion que desee"<<endl;
    cin>>Opcion;
    cout<<"============"<<endl;
        switch(Opcion){
    case 1:{
        string FRASE1;
        cout<<"CREACION"<<endl;
      crearPaul(FRASE1);
      case 2:{
        string FRASE1;
        cout<<"MOSTRAR"<<endl;
      mostrarPaul(FRASE1);

        break;}
    case 3:{
        cout<<"LONGITUD"<<endl;
        longitud();


        break;}
    case 4:{
        cout<<"CONCATENACION"<<endl;
        concatenacion();}
        case 5:{
        cout<<"COMPARACION"<<endl;
        comparar();}
         case 6:{
        cout<<"CONVERSION"<<endl;
        convertir();}
        case 7:{
        cout<<"CONVERSION"<<endl;
        invertir();}
                case 8:{
        cout<<"SUBCADENA"<<endl;
        subcadenas();}
         case 9:{
        cout<<"BUSCAR"<<endl;
        buscar();}
      }
      cout<<"CONTINUAR S/N"<<endl;
      cin>>C;
    } while(C=='S');{}
    return 0;
}

