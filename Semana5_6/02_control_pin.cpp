#include <iostream>

int main() {
    const int PIN_CORRECTO = 2468;
    int pinIngresado;

    std::cout << "Introduce el PIN: ";
    std::cin >> pinIngresado;

    if (pinIngresado == PIN_CORRECTO) {
        std::cout << "Acceso permitido\n";
    }
    else {
        std::cout << "Acceso denegado\n";
    }

    return 0;
}
