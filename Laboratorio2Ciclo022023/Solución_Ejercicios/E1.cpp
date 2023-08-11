// Escribe un programa que permita al usuario introducir una letra del alfabeto y muestre en pantalla si es una vocal o una consonante.

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout<< "--------------------------\n\n";
    cout << "Programa para saber si una letra es vocal o consonante\n\n";
    cout<< "--------------------------\n\n";
    cout << "Introduce una letra: "; 
    cin >> letra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){

        cout << "\nLa letra ingresada es un vocal y esta en un minuscula. La letra ingresada fue = " << letra << ".\n\n";

    }else if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){

        cout << "\nLa letra ingresada es un vocal y esta en un mayuscula. La letra ingresada fue = " << letra << ".\n\n";

    }else{

        cout << "\nLa letra ingresada es una consonante. La letra ingresada fue = " << letra << ".\n\n";
        
    }

    return 0;
}