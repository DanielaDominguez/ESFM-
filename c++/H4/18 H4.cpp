#include<iostream>
using namespace std;

float suel(float x, float t);

int main() {
	float x,t;
	cout << "Escribe el sueldo por hora" << endl;
	cin >> x;
	cout << "Escribe las horas de trabajo" << endl;
	cin >> t;
	cout <<"El salario total es : "<<suel(x,t)<<endl;
	return 0;
}

float suel(float x,float t) {
	float ad;
	ad=(x*t);
	return ad;
}

