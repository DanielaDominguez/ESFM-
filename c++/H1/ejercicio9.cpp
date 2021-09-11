#include<iostream>
#include<math.h>
using namespace std;
double A,L,P;
int main()
{
	cout<<"Calculemos el perimetro de un rectangulo"<<endl;
	cout<<"ingrese el la altura"<<endl;
	cin>>A;
	cout<<"ingrese lo largo"<<endl;
	cin>>L;
	P=A+A+L+L;
	cout<<"El perimetro del rectangulo es: "<<P;
}
