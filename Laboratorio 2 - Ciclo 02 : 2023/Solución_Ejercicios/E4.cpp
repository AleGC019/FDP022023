// Crea un programa que solicite al usuario que introduzca tres números enteros y determine cuál es el número más grande de los tres.

#include <iostream>

using namespace std;

int main(){

    int num1;
    int num2;
    int num3;

    cout<< "--------------------------\n\n";

    cout << "Programa para determinar el número más grande de tres números enteros\n\n";

    cout<< "--------------------------\n\n";

    cout << "Introduce el primer número: ";

    cin >> num1;

    cout << "\nIntroduce el segundo número: ";

    cin >> num2;

    cout << "\nIntroduce el tercer número: ";

    cin >> num3;

    if(num1 > num2 && num1 > num3){

        cout << "\nEl número más grande es el primer ingresado, el cual es: " << num1 << ".\n\n";

    }else if(num2 > num1 && num2 > num3){

        cout << "\nEl número más grande es el segundo ingresado, el cual es: " << num2 << ".\n\n";

    }else if(num3 > num1 && num3 > num2){

        cout << "\nEl número más grande es el tercer ingresado, el cual es: " << num3 << ".\n\n";

    }else{
            
        cout << "\nLos números son iguales.\n\n";
    
    }

    return 0;
}