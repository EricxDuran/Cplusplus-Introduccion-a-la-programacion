// Sistema-acceso.cpp : Defines the entry point for the application.
#include <iostream>
using namespace std;

int main()
{
	std::cout << "Bienvenido a la caja Fuerte" << std::endl;
	std::cout << "Tienes como maximo 5 intentos" << std::endl;

	int PIN = 725, contrasena = 0, intentos = 5, intentos_fallidos = 0, preguntas = 1;
	cout << "Introduce el pin: ";
	cin >> contrasena;
	if (contrasena != PIN && preguntas == 1) {
		intentos--;
		intentos_fallidos++;
		cout << "Pista " << intentos_fallidos << " Acertijo 1: La primera cifra es la raiz cuadrada de 49. " << endl;
		cin >> contrasena;
		preguntas++;
	}
	if (contrasena != PIN && preguntas == 2) {
		intentos--;
		intentos_fallidos++;
		cout << "Pista " << intentos_fallidos << " Acertijo 2: La ultima cifra es el resultado de la pista anterior menos el unico numero primo par. " << endl;
		cin >> contrasena;
		preguntas++;
	}
	if (contrasena != PIN && preguntas == 3) {
		intentos--;
		intentos_fallidos++;
		cout << "Pista " << intentos_fallidos << " Acertijo 3: La cifra central equivale a restar el resultado de la pista 2 al de la pista 1. " << endl;
		cin >> contrasena;
		preguntas++;
	}
	if (contrasena != PIN && preguntas == 4) {
		intentos--;
		intentos_fallidos++;
		cout << "Pista " << intentos_fallidos << " Acertijo 4: El PIN completo (de tres cifras) es divisible de forma exacta por el numero que hallaste en la pista 2. " << endl;
		cin >> contrasena;
		preguntas++;
	}
	if (contrasena != PIN && preguntas == 5) {
		intentos--;
		intentos_fallidos++;
		cout << "Pista " << intentos_fallidos << "Acertijo 5: Como confirmacion final: si multiplicas el PIN completo por tu cifra central, el resultado es 1450. " << endl;
		cin >> contrasena;
		preguntas++;
	}
	if (contrasena == PIN) {
		cout << "Acceso Correcto" << endl;
		cout << "Presiona Enter para salir...";
		cin.ignore();
		cin.get();
		return 0;

	}
	if (intentos_fallidos == 5) {
		cout << "Has superado el numero maximo de intentos. Has perdido la caja ha sido bloqueada" << endl;
	}
	cout << "Presiona Enter para salir...";
	cin.ignore();
	cin.get();   
	return 0;
}
