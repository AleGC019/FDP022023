// Ingresar por teclado 2 valores, multiplicarlos, presentar el resultado y finalizar
// Autor: Carlos Alejandro Gómez Campos

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float valor1;
    float valor2;
    float resultado;

    cout<<endl;
    cout << "Ingresa el primer valor: "; 
    cin >> valor1;
    cout<<endl;

    cout << "Ingresa el segundo valor: "; 
    cin >> valor2;
    cout<<endl;

    resultado = valor1 * valor2;

    cout << fixed << setprecision(2);
    cout << "El resultado es: " << resultado << endl <<endl;

    return 0;
}

