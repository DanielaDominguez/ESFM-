#include<iostream>
using namespace std;

float im(float b, int a);

int main() {
	float b;
	int a;
	cout << "Escribe un numero real" << endl;
	cin >>b;
	cout << "Escribe un numero entero" << endl;
	cin >> a;
	cout <<im(b,a)<<endl;
}

float im (float b,int a) {
	cout <<b<<" y "<<a<<endl;	}

