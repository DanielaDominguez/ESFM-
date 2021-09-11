#include<iostream>
#include<math.h>
using namespace std;
float num(float a);

int main() {
	float a;
	cout << "Ingresa el primer numero" << endl;
	cin >> a;
	cout <<num(a) << endl;
	return 0;
}

float num(float a)
	
 {	
 float numm;
	if (a<0){
	numm=-1;
	}
	else if (a>0){
	numm=1;
	}
	else if (a=0){
	numm=0;
	}
	return numm;	
}
