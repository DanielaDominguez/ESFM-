
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Escriba el numero cualquiera" << endl;
	cin >> n;
	if (n<0) {
		cout << "El numero " << n << " es: negativo" << endl;
	} else {
		cout << "El numero " << n << " es: positivo" << endl;
	}
	return 0;
}

