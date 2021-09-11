#include<iostream>
#include<math.h>
using namespace std;
float edad(float x);

int main() {
	float x;
	edad(x);
	return 0;
}

float edad(float x) {
	cout << "Escribe tu edad" << endl;
	cin >> x;
	cout <<"Tienes: "<<x<<" anos de edad";
	}
	
