#include<iostream>
#include<math.h>
using namespace std;

float per(float x, float z);
float are(float x, float z);
int main() {
	float x, z;
	cout << "Anote la medida de la base del rectangulo" << endl;
	cin >> x;
	cout << "Anote la altura del ractangulo" << endl;
	cin >> z;
	cout << per(x,z) << endl;
	cout << are(x,z) << endl;
	return 0;
}

float per (float x, float z) {
	float perim;
	perim=2*z+2*x;
	cout<<"El perimetro es de : "<<endl;
	return perim;
}

float are (float x, float z) {
	float area;
	area=x*z;
	cout<<"El area es de : "<<endl;
	return area;
}
