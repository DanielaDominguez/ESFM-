#include<iostream>
#include<math.h>
using namespace std;

float s(float x, float z);
float r(float x, float z);
float m(float x, float z);
float d(float x, float z);
int mod(int x, int z);
int main() {
	float x, z;
	cout << "Anote un numero" << endl;
	cin >> x;
	cout << "Anote el segundo numero" << endl;
	cin >> z;
	cout << s(x,z) << endl;
	cout << r(x,z) << endl;
	cout << m(x,z) << endl;
	cout << d(x,z) << endl;
	cout << mod(x,z) << endl;
	return 0;
}

float s (float x, float z) {
	float suma;
	suma=x+z;
	cout<<"La suma es: "<<endl;
	return suma;
}
float r (float x, float z) {
	float resta;
	resta=x-z;
	cout<<"La resta es: "<<endl;
	return resta;
}
float m (float x, float z) {
	float mul;
	mul=x*z;
	cout<<"La multiplicacion es: "<<endl;
	return mul;
}
float d (float x, float z) {
	float div;
	div=x/z;
	cout<<"La division es: "<<endl;
	return div;
}
int mod (int x, int z) {
	int mo;
    mo = x%z;
	cout<<"El resto de la division es: "<<endl;
	return mo;
}


