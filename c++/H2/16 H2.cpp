

#include<iostream>
using namespace std;


int main() {
	float acum;
	float dato;
	int i;
	int n;
	float prom;
	cout << "Ingrese la cantidad de alumnos:" << endl;
	cin >> n;
	acum = 0;
	for (i=1;i<=n;i++) {
		cout << "Ingrese la edad " << i << ":" << endl;
		cin >> dato;
		acum = acum+dato;
	}
	prom = acum/n;
	cout << "El promedio de las edades del grupo de " << n << " alumnos es: " << prom << endl;
	return 0;
}

