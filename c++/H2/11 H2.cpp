
#include<iostream>
using namespace std;

int main() {
	int i;
	float n;
	float vector[10];
	cout << "Programa que muestre los primero 10 numeros" << endl;
	cout << "Los primeros 10 numeros son" << endl;
	n = 11;
	for (i=1;i<=n-1;i++) {
		vector[i-1] = i;
		cout << vector[i-1] << endl;
	}
	return 0;
}

