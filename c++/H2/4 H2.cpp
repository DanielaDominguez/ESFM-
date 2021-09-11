#include<iostream>
using namespace std;
int main() {
	float n;
	cout << "Programa para saber si un numero es mayor a 100" << endl;
	cout << "Escriba el numero a cualquiera" << endl;
	cin >> n;
	if (n>100) {
		cout << "El numero " << n << " es: mayor a 100" << endl;
	} else {
		cout << "El numero " << n << " es: menor a 100" << endl;
	}
	return 0;
}

