#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int semilla = 0;
    int tiradas = 0;
    int dado_uno = 0;
    int dado_dos = 0;
    int suma = 0;

    int resultado_2 = 0, resultado_3 = 0, resultado_4 = 0;
    int resultado_5 = 0, resultado_6 = 0, resultado_7 = 0;
    int resultado_8 = 0, resultado_9 = 0, resultado_10 = 0;
    int resultado_11 = 0, resultado_12 = 0;

    cout << "Introduce una semilla para los dados: ";
    cin >> semilla;
    srand(semilla);

    cout << "\nLanzando los dados 100 veces...\n\n";

    while (tiradas < 100) {
        dado_uno = rand() % 6 + 1;
        dado_dos = rand() % 6 + 1;
        suma = dado_uno + dado_dos;

        if (suma == 2) {
            resultado_2++;
        }
        else if (suma == 3) {
            resultado_3++;
        }
        else if (suma == 4) {
            resultado_4++;
        }
        else if (suma == 5) {
            resultado_5++;
        }
        else if (suma == 6) {
            resultado_6++;
        }
        else if (suma == 7) {
            resultado_7++;
        }
        else if (suma == 8) {
            resultado_8++;
        }
        else if (suma == 9) {
            resultado_9++;
        }
        else if (suma == 10) {
            resultado_10++;
        }
        else if (suma == 11) {
            resultado_11++;
        }
        else if (suma == 12) {
            resultado_12++;
        }

        tiradas++;
    }

    cout << "--- Resultados finales tras 100 tiradas ---\n";
    cout << "El 2 ha salido " << resultado_2 << " veces\n";
    cout << "El 3 ha salido " << resultado_3 << " veces\n";
    cout << "El 4 ha salido " << resultado_4 << " veces\n";
    cout << "El 5 ha salido " << resultado_5 << " veces\n";
    cout << "El 6 ha salido " << resultado_6 << " veces\n";
    cout << "El 7 ha salido " << resultado_7 << " veces\n";
    cout << "El 8 ha salido " << resultado_8 << " veces\n";
    cout << "El 9 ha salido " << resultado_9 << " veces\n";
    cout << "El 10 ha salido " << resultado_10 << " veces\n";
    cout << "El 11 ha salido " << resultado_11 << " veces\n";
    cout << "El 12 ha salido " << resultado_12 << " veces\n";


    cout << "\n--- Grafica de resultados (Histograma) ---\n";

    cout << " 2 (" << resultado_2 << "):\t";
    for (int i = 0; i < resultado_2; i++) { cout << "*"; }
    cout << "\n";

    cout << " 3 (" << resultado_3 << "):\t";
    for (int i = 0; i < resultado_3; i++) { cout << "*"; }
    cout << "\n";

    cout << " 4 (" << resultado_4 << "):\t";
    for (int i = 0; i < resultado_4; i++) { cout << "*"; }
    cout << "\n";

    cout << " 5 (" << resultado_5 << "):\t";
    for (int i = 0; i < resultado_5; i++) { cout << "*"; }
    cout << "\n";

    cout << " 6 (" << resultado_6 << "):\t";
    for (int i = 0; i < resultado_6; i++) { cout << "*"; }
    cout << "\n";

    cout << " 7 (" << resultado_7 << "):\t";
    for (int i = 0; i < resultado_7; i++) { cout << "*"; }
    cout << "\n";

    cout << " 8 (" << resultado_8 << "):\t";
    for (int i = 0; i < resultado_8; i++) { cout << "*"; }
    cout << "\n";

    cout << " 9 (" << resultado_9 << "):\t";
    for (int i = 0; i < resultado_9; i++) { cout << "*"; }
    cout << "\n";

    cout << "10 (" << resultado_10 << "):\t";
    for (int i = 0; i < resultado_10; i++) { cout << "*"; }
    cout << "\n";

    cout << "11 (" << resultado_11 << "):\t";
    for (int i = 0; i < resultado_11; i++) { cout << "*"; }
    cout << "\n";

    cout << "12 (" << resultado_12 << "):\t";
    for (int i = 0; i < resultado_12; i++) { cout << "*"; }
    cout << "\n";
}