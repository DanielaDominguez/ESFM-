#include<iostream>
#include<math.h>
using namespace std;
float are(float x, float h);

int main() {
	float x,h;
	are(x,h);
}

float are(float x, float h) {
	cout << "Escribe la medida de los lados del triangulo" << endl;
	cin >> x;
	cout << "Escribe la altura del triangulo" << endl;
	cin >> h;
	float area;
	area=(x*h)/2;
	cout <<"El area es de: "<<area<<endl;
		if (area>1000){
		cout<<"Datos erroneo"<<endl;
}
}
