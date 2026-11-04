//Una empresa necesita mejorar su sistema de control de acceso, para entrar a una seccion restringida, el usuario debe cumplir dos condiciones
//ser mayor de edad e intoducir correctamente un pin de seguridad
//el sistema permitirá un máximo de 3 intentos para introducir el pin, si el usuario falla los  intentos, el acceso queda bloqueado


#include <iostream>
using namespace std;

int pedirEdad();
bool esMayorDeEdad(int edad);
int pedirPIN();
bool comprobarPIN(int PIN);
void mostrarAcceso(bool permitido);

int main() {
	int edadUsuario = pedirEdad();
	int PIN = pedirPIN();
	bool acceso = esMayorDeEdad(edadUsuario);
	bool PINcorrecto = comprobarPIN(PIN);
	mostrarAcceso(acceso, PINcorrecto);
}


int pedirEdad() {
	int edad;
	cout << "Introduce tu edad: " << endl;
	cin >> edad;
	return edad;

}

bool esMayorDeEdad(int edad) {

	return edad >= 18;


}

int pedirPIN() {
	int PIN;
	cout << "Introduce el PIN: " << endl;
	cin >> PIN;
	return PIN;
}

bool comprobarPIN(int PIN) {
	for (int i = 0; i < 3; i++)
	{
		int pinIngresado = pedirPIN();
		
		if (pinIngresado == 8451)
		{
			return true;
		}
		cout << "Pin incorrecto, tienes 3 intentos en total" << endl;
	}
	return false;
}

void mostrarAcceso(bool permitido, bool PINcorrecto) {
	if (permitido && PINcorrecto) {
		cout << "Acceso permitido" << endl;
	}
	else
	{
		cout << "Acceso denegado" << endl;
	}
}



