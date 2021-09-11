
#include<iostream>
using namespace std;



int main() {
	float a;
	float acum;
	float conta;
	float i;
	float n;
	float prom;
	float tmp;
	cout << "Programa que calcula las compras totales de 20 amas de casa asi como el promedio de las compras" << endl;
	n = 3;
	tmp = 0;
	conta = 0;
	for (i=1;i<=n;i++) {
		cout << "Ingrese la compra " << i << endl;
		cin >> a;
		tmp = tmp+a;
		conta = conta+1;
		acum = acum+a;
	}
	prom = acum/n;
	cout << "La suma de todas las compras es: " << tmp << endl;
	cout << "El promedio de las compras es: " << prom << endl;
	return 0;
}

