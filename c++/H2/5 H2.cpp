
#include<iostream>
using namespace std;


int main() {
	float n;
	cout << "Programa para saber si un numero n es mayor a 100" << endl;
	cout << "__________________" << endl;
	cout << "                 " << endl;
	cout << "Escriba el numero a comparar" << endl;
	cin >> n;
	if (n>100) {
		cout << "El numero " << n << " es: mayor a 100" << endl;
	} else {
		cout << "El numero " << n << " es: menor a 100" << endl;
	}
	return 0;
}

