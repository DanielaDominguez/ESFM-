#include<iostream>
#include<math.h>
using namespace std;
int main() {
	float cuad;
	float num;
	float x;
	cout << "Calcula la potencia de un numero" << endl;
	cout << "Ingrese el numero" << endl;
	cin >> num;
	cout << "Escriba la potencia" << endl;
	cin >> x;
	cuad = pow(num,x);
	cout << "El numero a la potencia " << num << " es: " << cuad << endl;
	return 0;
}

