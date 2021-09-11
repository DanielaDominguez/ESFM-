#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float r, pi=3.14159265358979323846,l,a;
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	l=2*r*pi;
	a=pi*pow(r,2);
	cout<<"La longitud del circulo con radio "<<r<<" es "<<l<<endl;
	cout<<"El area del circulo con radio "<<r<<" es "<<a<<endl;	
}
