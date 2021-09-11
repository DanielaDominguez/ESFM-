#include<iostream>
#include<math.h>
using namespace std;
float cal(float x, float a, float b);

int main() {
	float x,a,b;
	cal(x,a,b);
	return 0;
}

float cal(float x, float a, float b) {
	float prom;
	cout << "Escribe la primera calificacion" << endl;
	cin >> x;
	cout << "Escribe la segunda calificacion" << endl;
	cin >> a;
	cout << "Escribe la tercera calificacion" << endl;
	cin >> b;
	prom=(a+x+b)/3;
		if (prom>7){
	cout <<"Su calificacion es: "<<prom<<" aprobatorio";
	}
		else {
	cout <<"Su calificacion es: "<<prom<<" Hay que mejorar la nota";
	}
	
}
