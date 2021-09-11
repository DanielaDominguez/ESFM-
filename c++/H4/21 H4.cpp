#include<iostream>
using namespace std;

float des(float x);

int main() {
	float x;
	cout << "Escribe el monto" << endl;
	cin >> x;
	cout <<"El descuento es de: "<<des(x)<<endl;
	return 0;
}

float des(float x) {
		int ad,ex;
		ad=(x*.2);
	if (x>10000){
		return ad;
	}
ex=(x*.1);
	if (x>10000) {
		return ex;
	}
}
