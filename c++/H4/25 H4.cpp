#include<iostream>
#include<math.h>
using namespace std;
float pn(float x);

int main() {
	float x;
	pn(x);
	return 0;
}

float pn(float x) {
	cout << "Escribe un numero" << endl;
	cin >> x;
		if (x>0){
	cout <<"El numero : "<<x<<" es positivo";
	}
		if (x<0) {
	cout <<"El numero: "<<x<<" es negativo";
	}
	
}
