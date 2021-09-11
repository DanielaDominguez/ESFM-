

#include<iostream>
using namespace std;


int main() {
	string alumnom;
	string alumnome;
	int i;
	int mayor;
	float mayora;
	int menor;
	int menora;
	string nombres[41];
	int notas[41];
	mayora = 1;
	menora = 999;
	for (i=1;i<=40;i++) {
		cout << "Ingrese Nombre del Alumno" << endl;
		cin >> nombres[i-1];
		cout << "Ingrese Nota Del Alumno" << endl;
		cin >> notas[i-1];
	}
	for (i=1;i<=40;i++) {
		if (notas[i-1]>mayora) {
			mayora = notas[i-1];
			alumnom = nombres[i-1];
		}
		if (notas[i-1]<menora) {
			menora = notas[i-1];
			alumnome = nombres[i-1];
		}
	}
	cout << "La Mayor Nota fue = " << mayora << " Obtenida por :" << alumnom << endl;
	cout << "La Menor Nota fue = " << menora << " Obtenida por :" << alumnome << endl;
	return 0;
}

