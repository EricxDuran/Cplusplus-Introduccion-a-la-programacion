# Introducción a la programación - Eric Duran Clavijo - ENTI  

---

## Ejercicio 3.11
* Si es impar (1, 3, 5, 7, 9), imprime `"****"`.
* Si es par (2, 4, 6, 8, 10), imprime `"++++++++"`.

## Ejercicio 3.12
* Para las filas donde `row` es par (10, 8, 6, 4, 2), la condición es falsa, así que imprime `>` 10 veces seguidas.
* Para las filas donde `row` es impar (9, 7, 5, 3, 1), la condición es verdadera, así que imprime `<` 10 veces seguidas.

---

## Ejercicio 3.25

### a) Cálculo de factorial
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un entero no negativo para calcular su factorial: ";
    cin >> n;
    
    unsigned long long factorial{1};
    int i{1};

    while (i <= n) {
        factorial *= i;
        ++i;
    }

    cout << n << "! = " << factorial << "\n";
    return 0;
}
```

### b) Estimación de la constante 'e'
```cpp
#include <iostream>
using namespace std;

int main() {
    int terminos;
    cout << "Introduce el numero de terminos para la precision de 'e': ";
    cin >> terminos;

    double e{1.0};
    double factorial{1.0};
    int i{1};

    while (i < terminos) {
        factorial *= i;
        e += 1.0 / factorial;
        ++i;
    }

    cout << "El valor estimado de e con " << terminos << " terminos es: " << e << "\n";
    return 0;
}
```

### c) Cálculo de e^x
```cpp
#include <iostream>
using namespace std;

int main() {
    double x;
    int terminos;
 
    cout << "Introduce el valor del exponente x: ";
    cin >> x;
    cout << "Introduce el numero de terminos para la precision: ";
    cin >> terminos;

    double e_x{1.0};
    double numerador{1.0};
    double factorial{1.0};
    int i{1};

    while (i < terminos) {
        numerador *= x;     
        factorial *= i;     
        e_x += numerador / factorial;
        ++i;
    }

    cout << "El valor estimado de e^" << x << " es: " << e_x << "\n";
    return 0;
}
```

---

## Ejercicio 3.26

### 1) CIFRADO
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un entero de cuatro cifras a cifrar: ";
    cin >> numero;

    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    cout << "El numero cifrado es: " << d1 << d2 << d3 << d4 << "\n";

    return 0;
}
```

### 2) DESCIFRADO
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero_cifrado;
    cout << "Introduce un entero cifrado de cuatro cifras a descifrar: ";
    cin >> numero_cifrado;

    int d1 = numero_cifrado / 1000;
    int d2 = (numero_cifrado / 100) % 10;
    int d3 = (numero_cifrado / 10) % 10;
    int d4 = numero_cifrado % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "El numero original descifrado es: " << d1 << d2 << d3 << d4 << "\n";

    return 0;
}
```

---

## Ejercicio 4.15
```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0.0;
    double divisor = 1.0;
    int signo = 1;
    bool encontrado = false;

    cout << "Accuracy set at: 200000\n\n";
    cout << "term\tpi\n";

    for (int i = 1; i <= 200000; i++) {
        pi += signo * (4.0 / divisor);
 
        if (i <= 5) {
            cout << i << "\t" << fixed << setprecision(8) << pi << "\n";
        } else if (i == 6) {
            cout << "...\n";
        }

        if (!encontrado && pi >= 3.14159 && pi < 3.14160) {
            cout << "\nEl valor comienza por 3.14159 por primera vez en el termino: " << i << "\n";
            encontrado = true;
        }

        divisor += 2.0;
        signo *= -1;
    }

    return 0;
}
```

---

## Ejercicio 4.6
El programa imprime en la consola un rectángulo de 10 filas y 5 columnas formado por el carácter `@`. Lo logra utilizando dos bucles `for` anidados: el bucle exterior se ejecuta 10 veces (controlando las 10 filas) y el bucle interior se ejecuta 5 veces en cada iteración (imprimiendo cinco `@` seguidas). Al finalizar el bucle interior, se imprime un salto de línea (`\n`) para que la siguiente serie de caracteres comience en una nueva fila.

---

## Ejercicio 4.8
```cpp
#include <iostream>
using namespace std;

int main() {
    int producto = 1;
    for (int i = 1; i <= 15; i += 2) {
        producto *= i;
    }

    cout << "El producto de los enteros impares del 1 al 15 es: " << producto << "\n";
 
    return 0;
}
```

---

## Ejercicio 5.1
* **a)** 7.5
* **b)** 7.0
* **c)** 0.0
* **d)** 0.0
* **e)** 6.4
* **f)** -6.0
* **g)** -14.0

---

## Ejercicio 5.6 (5.2 Tarifas de aparcamiento)
```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateCharges(double hours) {
    double charge = 20.00;
    if (hours > 3.0) {
        charge += ceil(hours - 3.0) * 5.00;
    }
 
    if (charge > 50.00) {
        charge = 50.00;     
    }
 
    return charge;
}

int main() {
    double hours1, hours2, hours3;
 
    cout << "Horas coche 1: ";
    cin >> hours1;
    cout << "Horas coche 2: ";
    cin >> hours2;
    cout << "Horas coche 3: ";
    cin >> hours3;
 
    double charge1 = calculateCharges(hours1);
    double charge2 = calculateCharges(hours2);
    double charge3 = calculateCharges(hours3);
 
    double totalHours = hours1 + hours2 + hours3;
    double totalCharge = charge1 + charge2 + charge3;
 
    cout << "\n";
    cout << left << setw(10) << "Car" << setw(10) << "Hours" << "Charge\n";
 
    cout << left << setw(10) << "1";
    cout << fixed << setprecision(1) << setw(10) << hours1;
    cout << fixed << setprecision(2) << charge1 << "\n";
 
    cout << left << setw(10) << "2";
    cout << fixed << setprecision(1) << setw(10) << hours2;
    cout << fixed << setprecision(2) << charge2 << "\n";
 
    cout << left << setw(10) << "3";
    cout << fixed << setprecision(1) << setw(10) << hours3;
    cout << fixed << setprecision(2) << charge3 << "\n";
 
    cout << left << setw(10) << "TOTAL";
    cout << fixed << setprecision(1) << setw(10) << totalHours;
    cout << fixed << setprecision(2) << totalCharge << "\n";
 
    return 0;
}
```

---

## Ejercicio 5.18
```cpp
#include <iostream>
using namespace std;

int invertirCifras(int numero) {
    int invertido = 0;
 
    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
 
    return invertido;
}

int main() {
    int numero_prueba = 7631;
 
    cout << "Numero original: " << numero_prueba << "\n";
    cout << "Numero invertido: " << invertirCifras(numero_prueba) << "\n";
 
    return 0;
}
```

---

## Ejercicio 5.21
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(time(0));
 
    int caras = 0;
    int cruces = 0;

    for (int i = 1; i <= 100; i++) {
        if (flip() == 1) {
            cout << "Heads\n";
            caras++;
        } else {
            cout << "Tails\n";
            cruces++;
        }
    }

    cout << "\nTotal de caras (Heads): " << caras << "\n";
    cout << "Total de cruces (Tails): " << cruces << "\n";

    return 0;
}
```

---

## Ejercicio 5.26
```cpp
#include <iostream>
using namespace std;

void moverDiscos(int cantidad_discos, int varilla_origen, int varilla_destino, int varilla_ayuda) {

    if (cantidad_discos == 1) {
        cout << "Muevo un disco de la varilla " << varilla_origen << " a la varilla " << varilla_destino << "\n";
        return;
    }

    moverDiscos(cantidad_discos - 1, varilla_origen, varilla_ayuda, varilla_destino);

    cout << "Muevo un disco de la varilla " << varilla_origen << " a la varilla " << varilla_destino << "\n";

    moverDiscos(cantidad_discos - 1, varilla_ayuda, varilla_destino, varilla_origen);
}

int main() {
    moverDiscos(3, 1, 3, 2);

    return 0;
}
```
