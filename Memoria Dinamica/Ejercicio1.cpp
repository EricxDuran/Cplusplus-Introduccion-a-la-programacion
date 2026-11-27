#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<string> almacenamiento;
	string palabra;
	
	while (palabra != "-1")
	{
		cout << "Introduce palabra por palabr, cuando quieras ver la frase, escribe -1: ";
		cin >> palabra;
		almacenamiento.push(palabra);

	}

	
