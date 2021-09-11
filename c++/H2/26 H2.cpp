#include<math.h>
#include<iostream>
using namespace std;
int main() {
	float acum;
	float i;
	float n;
	cout << "Programa que calcula la suma de los numeros del 1 al 100 al cuadrado" << endl;
	n = 100;
	for (i=1;i<=n;i++) {
		cout << i << endl;
		acum = acum+pow(i,2);
	}
	cout << "La suma de los numeros de 1 a 100 al cuadrado es: " << acum << endl;
	return 0;
}

