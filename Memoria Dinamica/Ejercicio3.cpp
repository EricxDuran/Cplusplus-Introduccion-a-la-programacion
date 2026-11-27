#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;

int main() {

	stack<int> numeros;
	int num = 0;

	while (num != -1)
	{
		cout << "Introduce numeros, cuando quieras parar pon -1: " << endl;
		cin >> num;
		numeros.push(num);

	}

	while (!numeros.empty())
	{
		cout << "Numeros introducidos: " << numeros.top() << endl;
		numeros.pop();
	}	

}
