#include <iostream>
using namespace std;

int main(){
    int pin = 0000;
    int intentos = 0;
    string Correcto = "Pin Correcto";

    cout << "Introduce tu PIN";
    cin >> pin;

    while (pin != 2468 && intentos < 3)
    {
        cout << "Pin Incorrecto\n";
        cout << "Intentalo de nuevo";
        intentos++;
    }
    
    if (pin == 2468)
    {
        cout << "Correcto";
    }
    else
    {
        cout << "Pin incorrecto, intentalo de nuevo\n";
        cout << "Quedan " << 3 - intentos << "intentos";
    }
    
    

}