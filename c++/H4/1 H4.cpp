#include<iostream>
#include<math.h>
using namespace std;
float num(float a);

int main() {
	float a;
	cout <<"Funcion para calcular el cubo de un numero"<< endl;
	
	cout << "Ingresa un numero" << endl;
	cin >> a;
	cout << num(a) << endl;
	return 0;
}

float num(float a) {
	float pot;
	pot = (pow(a,3));
	return pot;
}

