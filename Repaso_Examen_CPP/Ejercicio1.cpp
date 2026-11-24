#include <iostream>
#include <array>
using namespace std;


bool detectarAtaque(int fallidos)
{
	if (fallidos >= 4)
		return true;
	else
		return false;
}
int main() {

	array<int, 6> intentos;
	cout << "Ingrese 0 o 1 para los intentos de acceso, hasta 6 veces: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> intentos[i];
	}
	int fallidos = 0;
	for (int i = 0; i < 6; i++)
	{
		if (intentos[i] == 1)
			fallidos++;


	}

	float PorcentajeFallidos = (fallidos * 100.00) / 6;
	cout << "El porcentaje de fallos es de: " << PorcentajeFallidos << "%" << endl;
	
	if (detectarAtaque(fallidos))
	{
		cout << "Hay riesgo de ataque" << endl;
	}
	else
	{
		cout << "No hay riesgo de ataque" << endl;
	}
}
	