#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int semilla = 0;
	int tiradas = 0;
	int dado = 0;
	int resultado = 0;

	cout << "Introduce una semilla para el dado: \n";
	cin >> semilla;
	cout << "Los numeros generados son: ";
	srand(semilla);

	while (tiradas != 10)
	{
		dado = rand() % 6 + 1;
		cout << dado;
		tiradas++;
		if (dado == 6)
		{
			resultado++;
		}

	}
	cout << "\nEl numero 6 ha salido " << resultado << " veces";

}
