#include<iostream>
using namespace std;
#define SIN_TIPO string


int main() {
	SIN_TIPO a;
	SIN_TIPO b;
	SIN_TIPO c;
	cout << "Programa para saber si un numero es resultado de multiplicar otros dos numeros cualesquiera" << endl;
	cout << "Escriba el primer numero" << endl;
	cin >> a;
	cout << "Escriba el segundo numero" << endl;
	cin >> b;
	cout << "Escriba el tercer numero" << endl;
	cin >> c;
	if (a+b==c) {
		cout << "El numero " << c << " Es igual a la suma de " << a << " y " << b << endl;
	} else {
		cout << "El numero " << c << " No es la suma de " << a << " y " << b << endl;
	}
	return 0;
}

