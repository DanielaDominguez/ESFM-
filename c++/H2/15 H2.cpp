
#include<iostream>
using namespace std;


int main() {
	float acum;
	float i;
	int n;
	cout << "Escriba el numero tope" << endl;
	cin >> n;
	acum = 0;
	for (i=0;i<=n;i++) {
		cout << i << endl;
		acum = acum+i;
	}
	cout << "La suma de los numeros es: " << acum << endl;
	return 0;
}

