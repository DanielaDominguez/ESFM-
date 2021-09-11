
#include<iostream>
using namespace std;

int main() {
	float a;
	float acum;
	float aprobadas;
	float conteo;
	float dato;
	float i;
	float maximo;
	float minimo;
	float prom;
	float reprobadas;
	float sumaa;
	float sumab;
	cout << "Programa para calcular el promedio de todas las notas de un grupo" << endl;
	a = 14;
	acum = 0;
	conteo = 0;
	maximo = 0;
	minimo = 99999;
	sumaa = 0;
	sumab = 0;
	aprobadas = 0;
	reprobadas = 0;
	for (i=1;i<=a;i++) {
		cout << "Ingrese la calificacion " << i << ":" << endl;
		cin >> dato;
		acum = acum+dato;
		if (dato>maximo) {
			maximo = dato;
		}
		if (dato<minimo) {
			minimo = dato;
		}
		if (dato>=6) {
			sumaa = sumaa+dato;
			aprobadas = aprobadas+1;
		} else {
			sumab = sumab+dato;
			reprobadas = reprobadas+1;
		}
	}
	prom = acum/a;
	cout << "El promedio es: " << prom << endl;
	cout << "La nota mas alta es: " << maximo << endl;
	cout << "La nota mas baja es: " << minimo << endl;
	cout << "El numero de aprobados es: " << aprobadas << endl;
	cout << "El numero de reprobados es: " << reprobadas << endl;
	return 0;
}

