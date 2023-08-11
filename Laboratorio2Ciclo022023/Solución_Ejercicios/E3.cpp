// Crea un programa que solicite al usuario que introduzca un número del 1 al 7 que represente un día de la semana y 
// muestre en pantalla el mismo, de igual forma, que indique cuentos días faltan para que sea el último día de la semana.
// Considera que la semana inicia en lunes y termina en domingo.

#include <iostream>

using namespace std;

int main(){

    int dia;

    int diasRestantes;

    cout<< "--------------------------\n\n";

    cout << "Programa para calcular la cantidad de días que faltan para el fin de semana\n\n";

    cout << "Considera que la semana inicia en lunes y finaliza el domingo.\n\n";

    cout<< "--------------------------\n\n";

    cout << "Introduce un número del 1 al 7 que represente un día de la semana: ";

    cin >> dia;

    if(dia == 1){

        cout << "\nEl día ingresado es lunes.\n\n";

        diasRestantes = 7 - dia;

        cout << "Faltan " << diasRestantes << " días para el fin de la semana.\n\n";
    }else if(dia == 2){
            
        cout << "\nEl día ingresado es martes.\n\n";
    
        diasRestantes = 7 - dia;
    
        cout << "Faltan " << diasRestantes << " días para el fin de la semana.\n\n";

    }else if(dia == 3){
                
        cout << "\nEl día ingresado es miércoles.\n\n";
        
        diasRestantes = 7 - dia;
        
        cout << "Faltan " << diasRestantes << " días para el fin de la semana.\n\n";

    }else if(dia == 4){

        cout << "\nEl día ingresado es jueves.\n\n";
        
        diasRestantes = 7 - dia;
        
        cout << "Faltan " << diasRestantes << " días para el fin de la semana.\n\n";

    }else if(dia == 5){
        
        cout << "\nEl día ingresado es viernes.\n\n";
        
        diasRestantes = 7 - dia;
        
        cout << "Faltan " << diasRestantes << " días para el fin de la semana.\n\n";
    }else if(dia == 6){
            
        cout << "\nEl día ingresado es sábado.\n\n";
            
        diasRestantes = 7 - dia;
            
        cout << "Falta " << diasRestantes << " día para el fin de la semana.\n\n";
    }else if(dia == 7){
                
        cout << "\nEl día ingresado es domingo.\n\n";
                
        diasRestantes = 7 - dia;
                
        cout << "Hoy es el último día de la semana.\n\n";

    }else{
            
        cout << "\nEl número ingresado no es válido. Recuerda el número a ingresar debe estar del 1 al 7,\nconsiderando que el primer día es lunes\n\n";
    }

    return 0;
}