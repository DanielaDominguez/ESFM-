

#include<iostream>
using namespace std;

int main() {
	float a;
	float acum;
	float d;
	bool flag;
	float media;
	float op;
	cout << "Programa para calcular el promedio de un conjunto de datos x" << endl;
	cout << "Ingrese el numero de datos" << endl;
	cin >> d;
	acum = 0;
	flag = true;
	while ((flag==true)) {
		cout << "Ingrese el numero" << endl;
		cin >> a;
		acum = acum+a;
		cout << "Desea (1) Ingresar otro numero o Digite (0) para terminar" << endl;
		cin >> op;
		if (op==1) {
			flag = true;
		} else {
			flag = false;
		}
	}
	media = acum/d;
	cout << "El promedio total es: " << media << endl;
	return 0;
}

