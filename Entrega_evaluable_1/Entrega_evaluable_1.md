Eric Duran Clavijo - ENTI - Introducción a la programación



#### **3.11**

Si es impar (1, 3, 5, 7, 9), imprime "\*\*\*\*".

Si es par (2, 4, 6, 8, 10), imprime "++++++++"



#### **3.12**

Para las filas donde row es par (10, 8, 6, 4, 2), la condición es falsa, así que imprime 10 veces seguidas.



Para las filas donde row es impar (9, 7, 5, 3, 1), la condición es verdadera, así que imprime < 10 veces seguidas.



#### **3.25**



##### a)

\#include <iostream>

using namespace std;



int main() {

&#x20;   int n;

&#x20;   cout << "Introduce un entero no negativo para calcular su factorial: ";

&#x20;   cin >> n;



&#x20;   unsigned long long factorial{1};

&#x20;   int i{1};



&#x20;   while (i <= n) {

&#x20;       factorial \*= i;

&#x20;       ++i;

&#x20;   }



&#x20;   cout << n << "! = " << factorial << "\\n";

&#x20;   return 0;

}





##### b)



\#include <iostream>

using namespace std;



int main() {

&#x20;   int terminos;

&#x20;   cout << "Introduce el numero de terminos para la precision de 'e': ";

&#x20;   cin >> terminos;



&#x20;   double e{1.0};

&#x20;   double factorial{1.0};

&#x20;   int i{1};



&#x20;   while (i < terminos) {

&#x20;       factorial \*= i; 

&#x20;       e += 1.0 / factorial;

&#x20;       ++i;

&#x20;   }



&#x20;   cout << "El valor estimado de e con " << terminos << " terminos es: " << e << "\\n";

&#x20;   return 0;

}





##### c)





\#include <iostream>

using namespace std;



int main() {

&#x20;   double x;

&#x20;   int terminos;

&#x20;   

&#x20;   cout << "Introduce el valor del exponente x: ";

&#x20;   cin >> x;

&#x20;   cout << "Introduce el numero de terminos para la precision: ";

&#x20;   cin >> terminos;



&#x20;   double e\_x{1.0};

&#x20;   double numerador{1.0};

&#x20;   double factorial{1.0};

&#x20;   int i{1};



&#x20;   while (i < terminos) {

&#x20;       numerador \*= x;     // Calcula la potencia x^i

&#x20;       factorial \*= i;     // Calcula el factorial i!

&#x20;       e\_x += numerador / factorial;

&#x20;       ++i;

&#x20;   }



&#x20;   cout << "El valor estimado de e^" << x << " es: " << e\_x << "\\n";

&#x20;   return 0;

}







#### **3.26**



##### 1\) CIFRADO



\#include <iostream>

using namespace std;



int main() {

&#x20;   int numero;

&#x20;   cout << "Introduce un entero de cuatro cifras a cifrar: ";

&#x20;   cin >> numero;



&#x20;   int d1 = numero / 1000;

&#x20;   int d2 = (numero / 100) % 10;

&#x20;   int d3 = (numero / 10) % 10;

&#x20;   int d4 = numero % 10;



&#x20;   d1 = (d1 + 7) % 10;

&#x20;   d2 = (d2 + 7) % 10;

&#x20;   d3 = (d3 + 7) % 10;

&#x20;   d4 = (d4 + 7) % 10;



&#x20;   int temp = d1;

&#x20;   d1 = d3;

&#x20;   d3 = temp;



&#x20;   temp = d2;

&#x20;   d2 = d4;

&#x20;   d4 = temp;



&#x20;   cout << "El numero cifrado es: " << d1 << d2 << d3 << d4 << "\\n";



&#x20;   return 0;

}





##### 2\) DESCIFRADO



\#include <iostream>

using namespace std;



int main() {

&#x20;   int numero\_cifrado;

&#x20;   cout << "Introduce un entero cifrado de cuatro cifras a descifrar: ";

&#x20;   cin >> numero\_cifrado;



&#x20;   int d1 = numero\_cifrado / 1000;

&#x20;   int d2 = (numero\_cifrado / 100) % 10;

&#x20;   int d3 = (numero\_cifrado / 10) % 10;

&#x20;   int d4 = numero\_cifrado % 10;



&#x20;   int temp = d1;

&#x20;   d1 = d3;

&#x20;   d3 = temp;



&#x20;   temp = d2;

&#x20;   d2 = d4;

&#x20;   d4 = temp;



&#x20;   d1 = (d1 + 3) % 10;

&#x20;   d2 = (d2 + 3) % 10;

&#x20;   d3 = (d3 + 3) % 10;

&#x20;   d4 = (d4 + 3) % 10;



&#x20;   cout << "El numero original descifrado es: " << d1 << d2 << d3 << d4 << "\\n";



&#x20;   return 0;

}







## **4.15**



\#include <iostream>

\#include <iomanip>



using namespace std;



int main() {

&#x20;   double pi = 0.0;

&#x20;   double divisor = 1.0;

&#x20;   int signo = 1;

&#x20;   bool encontrado = false;



&#x20;   cout << "Accuracy set at: 200000\\n\\n";

&#x20;   cout << "term\\tpi\\n";



&#x20;   for (int i = 1; i <= 200000; i++) {

&#x20;       pi += signo \* (4.0 / divisor);

&#x20;       

&#x20;       if (i <= 5) {

&#x20;           cout << i << "\\t" << fixed << setprecision(8) << pi << "\\n";

&#x20;       } else if (i == 6) {

&#x20;           cout << "...\\n";

&#x20;       }



&#x20;       if (!encontrado \&\& pi >= 3.14159 \&\& pi < 3.14160) {

&#x20;           cout << "\\nEl valor comienza por 3.14159 por primera vez en el termino: " << i << "\\n";

&#x20;           encontrado = true;

&#x20;       }



&#x20;       divisor += 2.0;

&#x20;       signo \*= -1;

&#x20;   }



&#x20;   return 0;

}

