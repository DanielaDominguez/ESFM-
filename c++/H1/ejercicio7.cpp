#include<iostream>
#include<math.h>
using namespace std;
double C,F;
int main()
{
	cout<<"Convertir de °F a °C"<<endl;
	cout<<"Ingrese los grados °F"<<endl;
	cin>>F;
	C=((F-32)/1.8);
	cout<<"La conversion es: "<<C<<"°C";
}
