#include <iostream>

int main() {
    int total, sospechosos;
    std::cout << "Introduce total de paquetes y paquetes sospechosos: ";
    std::cin >> total >> sospechosos;

    double porcentaje = (sospechosos * 100.0) / total;
    std::cout << "Porcentaje sospechoso: " << porcentaje << "%\n";

    if (porcentaje >= 20) {
        std::cout << "ALERTA: trafico sospechoso\n";
    }
    else {
        std::cout << "Trafico normal\n";
    }

    return 0;
}
