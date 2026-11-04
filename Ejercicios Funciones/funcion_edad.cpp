// Una empresa quiere implementar un sistema sencillo para comprobar la edad de una persona antes de permitirle acceder a una seccion restringida
// El programa debe utilizar tres funciones:
//int pedirEdad();
// bool esMayorDeEdad(int edad);
//void mostrarAcceso(bool permitido);
// pedirEdad() solicita una edad y la devuelve
// esMayorDeEdad() recibe la edad y devuelve true si es mayor o igual a 18
// mostrarAcceso() recibe un booleano y muestra si el acceso está permitido
// main() organiza las llamadas a las tres funciones

#include <iostream>
using namespace std;

int pedirEdad();
bool esMayorDeEdad(int edad);
void mostrarAcceso(bool permitido);

int pedirEdad() {
	int edad;
	cout << "Introduce tu edad: " << endl;
	cin >> edad;
	return edad;

}

bool esMayorDeEdad(int edad) {

	return edad >= 18;


}

void mostrarAcceso(bool permitido) {
	if (permitido) {
		cout << "Acceso permitido" << endl;
	}
	else
	{
		cout << "Acceso denegado" << endl;
	}
}



int main() {
	int edadUsuario = pedirEdad();
	bool acceso = esMayorDeEdad(edadUsuario);
	mostrarAcceso(acceso);
}