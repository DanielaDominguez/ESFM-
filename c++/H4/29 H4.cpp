#include<iostream>
#include<math.h>
using namespace std;
float vol(float a, float b, float c, float d, float e);

int main() {
	float a,b,c,d,e;
	vol(a,b,c,d,e);
	return 0;
}

float vol(float a, float b, float c, float d, float e)
{
	float prom;
	cout << "Escribe el 1 voltaje" << endl;
	cin >> a;
	cout << "Escribe el 2 voltaje" << endl;
	cin >> b;
	cout << "Escribe el 3 voltaje" << endl;
	cin >> c;
	cout << "Escribe el 4 voltaje" << endl;
	cin >> d;
	cout << "Escribe el 5 voltaje" << endl;
	cin >> e;

	prom=(a+b+c+d+e)/5;
		if (prom>220){
	cout <<"alto voltaje";
	}
		else {
	cout <<"el voltaje es el correcto";
	}
	
}
