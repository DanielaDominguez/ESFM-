#include<math.h>
#include<iostream>
using namespace std;
int main() {
	float acum;
	float i;
	float n;
	cout << "Programa que calcula la suma de los numeros naturales al cuadrado" << endl;
	n = 10;
	for (i=1;i<=n;i++) {
		cout << i << endl;
		acum = acum+pow(i,2);
	}
	cout << "La suma de los numeros naturales al cuadrado es: " << acum << endl;
	return 0;
}

