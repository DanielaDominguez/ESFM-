#include<iostream>
using namespace std;

float ofer(float x, float z);

int main() {
	float x, z;
	cout << "Ingrese el valor original de la compra" << endl;
	cin >> x;
	cout << "¿Cual fue el valor pagado de la compra" << endl;
	cin >> z;
	cout << "Su descuento es: " << ofer(x,z) << "%" << endl;
	return 0;
}

float ofer(float x, float z) {
	float d;
	float des;
	d = (z/x);
	des = (1-d)*100;
	return des;
}

