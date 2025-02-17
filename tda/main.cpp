#include <iostream>

using namespace std;
struct carro{
    string marca;
    string modelo;
    int ano;
    float kilometraje;


};




int main()
{
    carro p1;
    p1.marca = "mercedez";
    p1.modelo= "clase g";
    p1.ano = 2022;
    p1.kilometraje = 0;


    carro p2;
    p2.marca = "audi";
    p2.modelo= "R6";
    p2.ano = 2024;
    p2.kilometraje = 26000;

    cout<< "Marca: "<< p1.marca << " Modelo: " << p1. modelo << " Ano: " << p1.ano << " Kilometraje: " << p1.kilometraje << endl;
    cout<< "Marca: "<< p2.marca << " Modelo: " << p2. modelo << " Ano: " << p2.ano << " Kilometraje: " << p2.kilometraje << endl;

    return 0;
}
