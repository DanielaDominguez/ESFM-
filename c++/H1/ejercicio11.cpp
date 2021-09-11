#include<iostream>
#include<math.h>
using namespace std;
float a,b,c,d;
int main()
{
	cout<<"Calculemos el area de un triangulo conociendo dos lados y el angulo formado"<<endl;
	cout<<"Ingrese los dos lados conocidos"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Escriba el angulo"<<endl;
	cin>>c;
	d=(a*b*(sin(c)))/2;
	cout<<"EL area es: "<<d<<endl;
}
