#include<iostream>
using namespace std;
int main() {
	float n1;
	float n2;
	float n3;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	cout << "Ingrese 3 números" << endl;
	cin >> n1 >> n2 >> n3;
	cout << "El orden de menor a mayor es: " << endl;
	if (n1<n2 && n1<n3 && n2<n3) {
		cout << n1 << endl;
		cout << n2 << endl;
		cout << n3 << endl;
	}
	if (n1<n2 && n1<n3 && n3<n2) {
		cout << n1 << endl;
		cout << n3 << endl;
		cout << n2 << endl;
	}
	if (n2<n1 && n2<n3 && n1<n3) {
		cout << n2 << endl;
		cout << n1 << endl;
		cout << n3 << endl;
	}
	if (n2<n1 && n2<n3 && n3<n1) {
		cout << n2 << endl;
		cout << n3 << endl;
		cout << n1 << endl;
	}
	if (n3<n1 && n3<n2 && n1<n2) {
		cout << n3 << endl;
		cout << n1 << endl;
		cout << n2 << endl;
	}
	if (n3<n1 && n3<n2 && n2<n1) {
		cout << n3 << endl;
		cout << n2 << endl;
		cout << n1 << endl;
	}
	return 0;
}

