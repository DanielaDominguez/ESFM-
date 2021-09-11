
#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	cout << "Programa para saber si un numero es resultado de multiplicar otros dos numeros cualesquiera" << endl;
	cout << "Escriba el primer numero" << endl;
	cin >> a;
	cout << "Escriba el segundo numero" << endl;
	cin >> b;
	cout << "Escriba el tercer numero" << endl;
	cin >> c;
	if (a*b==c) {
		cout << "El numero " << c << " Es igual al producto de " << a << " y " << b << endl;
	} else {
		cout << "El numero " << c << " No es igual al producto de " << a << " y " << b << endl;
	}
	return 0;
}

