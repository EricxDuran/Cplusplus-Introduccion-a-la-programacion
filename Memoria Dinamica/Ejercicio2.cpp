#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {

	queue<int> numeros({ 1, 2, 3, 4, 5 });
	string num;
	queue<int> numeros_copia;


	cout << "Numeros originales: " << endl;
	for (int i = 0; i < 5; i++)
	{
		numeros_copia.push(numeros.front());
		cout << numeros.front() << endl;
		numeros.pop();
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Numeros copiados: " << endl;
		cout << numeros_copia.front() << endl;
		numeros_copia.pop();

	}
	




}
