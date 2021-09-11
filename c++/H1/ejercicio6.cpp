#include<iostream>
#include<math.h>

using namespace std;
double MG,a,b,c;
int main()
{
	cout<<"Calculemos la media geometrica"<<endl;
	cout<<"Ingrese 3 numeros"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	MG=cbrt(a*b*c);
	cout<<"La media geometrica es: "<<MG;
}
