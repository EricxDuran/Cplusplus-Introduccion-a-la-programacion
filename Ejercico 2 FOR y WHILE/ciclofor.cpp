#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int alertas = 0;

    for (int minuto = 1; minuto <= 6; minuto++){
        int intentos = minuto * 3;

        total = total + intentos;

        cout << "Minuto" << minuto <<": " << intentos << " intentos\n";

        if (intentos >=12){
            cout << "ALERTA!\n";
            alertas++;
        }
    }

    cout << "\nRESUMEN DE SEGURIDAD\n";
    cout << "\nTOTAL DE INTENTOS: " << total << "\n";
    cout << "Minutos con alerta: " << alertas << "\n";
}