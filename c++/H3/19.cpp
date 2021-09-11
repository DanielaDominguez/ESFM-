#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int lim,i;
	cout<<"Ingrese el numero limite"<<endl;
	cin>>lim;
	cout<<"\nLos numeros naturales de la unidad hasta "<<lim<<" son:\n"<<endl;

	for(i=1;i<=lim;i++){
		cout<<i<<endl;
	}
	getch();
	return 0;
}
