#include<iostream>
#include<math.h>
#define m 0.621371
double mi,k;
using namespace std;
int main()
{
	cout<<"Calculemos la distancia del marathon en kilometros"<<endl;
	cout<<"Ingresa cuanto corriste en el marathon en millas"<<endl;
	cin>>mi;
	k=mi/m;
	cout<<"Tu corriste: "<<k<<"kilometros";
}
