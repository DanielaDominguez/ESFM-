#include<iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	float n;
	cout << "Programa que calcula la suma de los numeros impares del 1 al 100" << endl;
	b = 100;
	n = 0;
	a = 0;
	c = 0;
	while (n<b) {
		a = a+n;
		c = c+1;
		n = 2*c+1;
	}
	cout << "La suma de los numeros impares del 1 al 100 es: " << a+1 << endl;
	return 0;
}

