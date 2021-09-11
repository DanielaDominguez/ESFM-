
#include<iostream>
using namespace std;

int main() {
	float a;
	float c;
	float s;
	cout << "Programa para calcular el sueldo de un empleado segun las variables" << endl;
	cout << "Escriba el numero de años que lleva trabajando aqui" << endl;
	cin >> a;
	s = 40000;
	if (a>10) {
		c = (s+(s*.10));
	} else {
		if (a>5) {
			c = (s+(s*.07));
		} else {
			if (a>3) {
				c = (s+(s*.05));
			} else {
				c = (s+(s*.03));
			}
		}
	}
	cout << "Su sueldo total es: " << c << " €" << endl;
	return 0;
}

