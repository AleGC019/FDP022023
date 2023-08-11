// Ingresar el precio de un producto, luego, imprimir el precio final considerando que se aplique un 15% de descuento
// Autor: Carlos Alejandro Gómez Campos

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float precio;
    float descuento;
    float precioFinal;

    cout << "Ingresa el precio del producto: "; 
    cin >> precio;

    descuento = precio * 0.15;
    precioFinal = precio - descuento;

    cout << fixed << setprecision(2);
    cout << "El precio final es: " << precioFinal << endl;

    return 0;
}