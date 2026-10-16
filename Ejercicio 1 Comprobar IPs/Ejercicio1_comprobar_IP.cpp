#include <iostream>
#include <string>
#include <cstdio>


int main() {

	std::string ip;

	int intentos;
	int fallidos;

	std::cout << "Direccion IP: ";
	std::cin >> ip;

	std::cout << "Intentos totales: ";
	std::cin >> intentos;

	std::cout << "Intentos fallidos: ";
	std::cin >> fallidos;

	int a = 0, b = 0, c = 0, d = 0;
	char extra = '\0';

	int campos = sscanf_s(
		ip.c_str(),
		"%d.%d.%d.%c",
		&a, &b, &c, &d, &extra, 1u
	);

	if (campos != 4 ||
		a < 0 || a > 255 ||
		b < 0 || b > 255 ||
		c < 0 || c > 255 ||
		d < 0 || d > 255)
	{
		std::cout << "Direccion IP incorrecta.\n";
		return 1;
	}

	// 3. VALIDAR LOS INTENTOS
	// TODO: Comprobar que los datos tienen sentido.

	if (fallidos > intentos)
	{
		std::cout << "Intentos introducidos invalidos.\n";
		std::cout << "Intentos fallidos superan a los totales.\n";
		return 1;
	}

	// 4. CALCULAR EL PORCENTAJE
	// TODO: Calcular el porcentaje de intentos fallidos.
	double porcentaje;

	porcentaje = (fallidos * 100.0) / intentos;
	
	// 5. MOSTRAR LOS RESULTADOS
	// TODO: Mostrar la IP y el porcentaje.

	std::cout << "Direccion IP investigada: " << ip << "\n";

	std::cout << "Porcentaje de intentos fallidos: " << porcentaje << "%" << "\n";

	// 6. CLASIFICAR LA ACTIVIDAD
	// TODO: Crear las condiciones de alerta.

	 

}
