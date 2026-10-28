#include <iostream>

int main() {
    int total = 0;

    for (int minuto = 1; minuto <= 3; minuto++) {
        int alertas;
        std::cout << "Alertas del minuto " << minuto << ": ";
        std::cin >> alertas;

        total += alertas;
    }

    std::cout << "Total de alertas: " << total << '\n';
    return 0;
}
