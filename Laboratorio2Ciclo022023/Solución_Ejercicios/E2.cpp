// Escribe un programa que permita al usuario introducir el precio de un producto y la cantidad que desea comprar, 
// y calcule el total a pagar, teniendo en cuenta que si se compran más de 10 unidades se aplica un descuento del 10%,
// si se compran más de 20 unidades se aplica un descuento del 20% y si se compran más de 50 unidades se aplica un descuento del 25%.

#include <iostream>

using namespace std;

int main(){

    float precio;
    float total;
    int cantidad;

    cout<< "--------------------------\n\n";

    cout << "Programa para calcular el total a pagar de un producto\n\n";

    cout<< "--------------------------\n\n";

    cout << "Introduce el precio del producto: ";

    cin >> precio;

    cout << "\nIntroduce la cantidad que desea comprar: ";

    cin >> cantidad;

    if(cantidad > 50){

        total = (precio * cantidad) * 0.75;

        cout << "\nEl total a pagar es de: $" << total << ".\n\n";
    }else if(cantidad > 20){

        total = (precio * cantidad) * 0.80;

        cout << "\nEl total a pagar es de: $" << total << ".\n\n";

    }else if(cantidad > 10){

        total = (precio * cantidad) * 0.90;

        cout << "\nEl total a pagar es de: $" << total << ".\n\n";

    }else{

        total = precio * cantidad;

        cout << "\nEl total a pagar es de (no se aplica descuento por la cantidad de productos): $" << total << ".\n\n";

    }


    return 0;
}