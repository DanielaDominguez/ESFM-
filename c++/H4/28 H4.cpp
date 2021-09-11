#include<iostream>
using namespace std;
int poi(int x);

int main() {
	int x;
	poi(x);
	return 0;
}

int poi(int x) {
	cout << "Escribe un numero" << endl;
	cin >> x;
	if (x%2==0) {
		cout << "Es par";
	}
	else {
		cout << "Es impar";
	}
	}
