#include<iostream>
using namespace std;

float area(float x);

int main() {
	float x;
	cout << "Escribe la medida del cuadrado" << endl;
	cin >> x;
	cout <<"El Area del cuadrado es de: "<<area(x)<<endl;
	return 0;
}

float area(float x) {
	float ad;
	ad=(x*x);
	return ad;
}

