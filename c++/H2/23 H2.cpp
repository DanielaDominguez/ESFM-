#include<iostream>
using namespace std;
int main() 
{
	cout << "Calculemos la suma de todos los numeros pares del 1 al 100"<< endl;
	float a;
	float b;
	float c;
	float n;
	float pares;
	float sumaa;
	b = 100;
	n = 0;
	c = 0;
	a = 0;
	while (n<b) {
		a = a+n;
		c = c+1;
		n = 2*c;
		if (n<b) {
			sumaa = sumaa+a;
			pares = pares+1;
		}
	}
	cout << "La suma de los numeros pares de 1 a 100 es: " << a << endl;
	cout << "La cantidad de numeros pares es: " << pares << endl;
	return 0;
}

