

#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	cout << "Programa para determinar si un tercer numero es el resto de la division de otros dos numeros" << endl;
	cout << "Escriba el primer numero" << endl;
	cin >> a;
	cout << "Escriba el segundo numero" << endl;
	cin >> b;
	cout << "Escriba el tercer numero" << endl;
	cin >> c;
	if (a/b==c) {
		cout << "El numero " << c << " Es el resto de la division de: " << a << " y " << b << endl;
	} else {
		cout << "El numero " << c << " No es el resto de la division de: " << a << " y " << b << endl;
	}
	return 0;
}

