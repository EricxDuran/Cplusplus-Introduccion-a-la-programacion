#include <iostream>

int main() {
    int alertas = 3;
    std::cout << "Alertas registradas: " << alertas << '\n';

        if (alertas >= 3) {
            std::cout << "Estado: ATENCION\n";
        }

        return 0;
}
