#include<iostream>
#include<math.h>
using namespace std;

float s(float x, float z, float a);
float m(float x, float z, float a);
int main() {
	float x, z,a;
	cout << "Anote un numero" << endl;
	cin >> x;
	cout << "Anote el segundo numero" << endl;
	cin >> z;
	cout << "Anote el tercer numero" << endl;
	cin >> a;
	
	cout << s(x,z,a) << endl;
	cout << m(x,z,a) << endl;
	return 0;
}

float s (float x, float z, float a) {
	float suma;
	suma=x+z+a;
	cout<<"La suma es: "<<endl;
	return suma;
}

float m (float x, float z, float a) {
	float mul;
	mul=x*z*a;
	cout<<"La multiplicacion es: "<<endl;
	return mul;
}
