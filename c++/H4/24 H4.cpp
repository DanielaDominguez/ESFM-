#include<iostream>
#include<math.h>
using namespace std;
float pi=3.1416;
float are(float x);

int main() {
	float x;
	cout << "Escribe el radio del circulo" << endl;
	cin >> x;
	cout <<are(x)<<endl;
}

float are(float x) {
	float area;
	area=(x*x)*pi;
		if (area>5000){
		cout<<"Dato erroneo"<<endl;
	}
		if (area<=5000) {
	cout<<"El area es de: "<<area;
	}
}
