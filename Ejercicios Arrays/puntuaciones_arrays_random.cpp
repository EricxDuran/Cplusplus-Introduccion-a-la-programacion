//Problema 1 Registro de puntuaciones
//un videojuego almacena las puntuaciones obtenidas en cinco partidas
//escribe un programa que:
//declare un std::array de cinco enteros, inicializado en cero
//solicite las cinco puntuaciones y las almacene en el arreglo
//muestre el numero de cada partida y su puntuacion
//calcule la puntuacion total y el promedio

//Ejemplo de entrada: 100 250 150 300 200

//Resultado esperado: 
//Partida 1: 100
//Partida 2: 250
//Partida 3: 150
//Partida 4: 300
//Partida 5: 200
//Total: 1000
//Promedio: 200

#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;

int main() {
	array <int, 5> puntuacion{};
	int total = 0;
	double promedio = 0;

	

	for (int i = 0; i < 5; i++)
	{
		puntuacion[i] = rand() % 10000;
		total = total + puntuacion[i];
		promedio = total / 5;
	}


	for (int i = 0; i < 5; i++)
	{
		cout << "Tu puntuacion es: " << puntuacion[i] << endl;
	}

	cout << "Tu promedio es: " << promedio << endl;

}