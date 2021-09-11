#include<iostream>
#include<math.h>
using namespace std;
float num(float a,float b);

int main() {
	float a,b;
	cout << "Ingresa el primer numero" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero" <<endl;
	cin >>b;
	cout <<"El numero menor es : "<<num(a,b) << endl;
	return 0;
}

float num(float a, float b)
	
 {	
 float nummin;
	if (a<b){
	nummin=a;
	}
	else if (b<a){
	nummin=b;
	}
	return nummin;	
}
