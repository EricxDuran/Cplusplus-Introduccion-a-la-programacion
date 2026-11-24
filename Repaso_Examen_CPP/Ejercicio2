#include <iostream>
#include <string>
using namespace std;

bool tieneLongitudValida(string clave);
bool contieneNumero(string clave);
bool contieneMayuscula(string clave);
void mostrarResultado(bool segura);

int main() {
	string clave;
	cout << "Introduce una contraseña para verificar su seguridad: ";
	cin >> clave;

	bool segura = tieneLongitudValida(clave) && contieneNumero(clave) && contieneMayuscula(clave);
	mostrarResultado(segura);
}

bool tieneLongitudValida(string clave) {
	if (clave.length() >= 8)
		return true;
	else
		return false;
}

bool contieneNumero(string clave) {
	for (int i = 0; i < clave.length(); i++)
	{
		if (clave[i] >= '0' && clave[i] <= '9')
		{
			return true;
		}
	}
	return false;
}

bool contieneMayuscula(string clave) {
	for (int i = 0; i < clave.length(); i++)
	{
		if (clave[i] >= 'A' && clave[i] <= 'Z')
		{
			return true;
		}
	}
	return false;
}

void mostrarResultado(bool segura) {
	if (segura)
	{
		cout << "Contraseña segura" << endl;
	}
	else
	{
		cout << "Contraseña insegura" << endl;
	}
}
