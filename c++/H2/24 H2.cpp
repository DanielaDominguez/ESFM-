
#include<iostream>
using namespace std;

int main() {
	float acum;
	float i;
	float n;
	float z;
	cout << "Escriba el primer limite" << endl;
	cin >> n;
	cout << "Escriba el segundo limite" << endl;
	cin >> z;
	acum = 1;
	for (i=n;i<=z;i++) {
		cout << i << endl;
		acum = acum*i;
	}
	cout << "La suma de los numeros es: " << acum << endl;
	return 0;
}

