#include<iostream>
#include<math.h>
using namespace std;
float num(float a);

int main() {
	float a;
	cout << "Ingresa las millas recorridas" << endl;
	cin >> a;
	cout <<"La cantidad expresada en metros es: "<<num(a) << endl;
	return 0;
}

float num(float a) {
	float metros;
	metros = a*1852;
	return metros;
}
