#include<iostream>
using namespace std;

float tab(float x);

int main() {
	float x;
	cout << "Escribe un numero" << endl;
	cin >> x;
	cout <<tab(x)<<endl;
	return 0;
}

float tab(float x) {
	float i;
	for (i=0;i<=10;i++) {
		cout << x << "x" << i << "=" << x*i << endl;
	}
}


