#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	int semilla = 0;

	cout << "Introduce una semilla: \n";
	cin >> semilla;

	cout << "Semilla introducida: " << semilla <<"\n";
	cout << "Generando numeros...\n";

	srand(semilla);
	cout << "Los numeros generados son: " << rand() % 10 << "," << rand() % 10 << "," << rand() % 10 << "," << rand() % 10 << "," << rand() % 10;

}