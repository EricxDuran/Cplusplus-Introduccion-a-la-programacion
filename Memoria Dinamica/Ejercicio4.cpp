#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <vector>
#include <cstdlib>
using namespace std;

int paquete = 0;
queue<int> paquetes;
vector<int> sospechosos;
int alertas = 0;

int generarPaquete();


int generarPaquete() {
	paquete = rand() % 100;
	return paquete;
}

int main() {

	for (int i = 0; i < 20; i++)
	{
		int generarPaquete();
		int paquete = generarPaquete();
		if (paquete > 80)
		{
			sospechosos.push_back(paquete);
			alertas++;
		}
		else
		{
			paquetes.push(paquete);

		}
	}	
	cout << "Hay un total de " << alertas << " alertas.." << endl;
	cout << "Los paquetes son: " << paquetes.size() + sospechosos.size() << endl;
	cout << "Los sospechosos son: " << endl;
	for (int i = 0; i < sospechosos.size(); i++)
	{
		cout << sospechosos[i] << "\t";
	}
	float porcentaje = (sospechosos.size() * 100.0) / paquetes.size();
	cout << "\n" << "Hay un porcentaje de: " << porcentaje << "%" << endl;

}
