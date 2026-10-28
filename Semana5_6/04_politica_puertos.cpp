#include <iostream>

int main() {
    int puerto;
    std::cout << "Puerto solicitado: ";
    std::cin >> puerto;

    if (puerto >= 1000 && puerto <= 2000) {
        std::cout << "Puerto dentro del rango permitido\n";
    }
    else {
        std::cout << "Puerto fuera del rango permitido\n";
    }

    return 0;
}
