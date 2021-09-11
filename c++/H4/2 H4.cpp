#include<iostream>
#include<math.h>
using namespace std;
float num(float a);

int main() {
	float a;
	cout << "Ingresa los km recorridos" << endl;
	cin >> a;
	cout <<"La cantidad expresada en metros es: "<<num(a) << endl;
	return 0;
}

float num(float a) {
	float metros;
	metros = a*1000;
	return metros;
}
