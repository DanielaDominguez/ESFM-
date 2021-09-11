
#include<iostream>
using namespace std;


int main() {
	float a;
	float acum;
	float d;
	bool flag;
	float op;
	float prom;
	cout << "Programa para calcular el promedio de un conjunto de datos x" << endl;
	cout << "Ingrese el numero de datos" << endl;
	cin >> d;
	acum = 0;
	flag = true;
	while ((flag==true)) {
		cout << "Ingrese el numero" << endl;
		cin >> a;
		acum = acum+a;
		cout << "Desea (1) Ingresar otro numero o (2) Desea ver el promedio" << endl;
		cin >> op;
		if (op==1) {
			flag = true;
		} else {
			flag = false;
		}
	}
	prom = acum/d;
	cout << "El promedio total es: " << prom << endl;
	return 0;
}

