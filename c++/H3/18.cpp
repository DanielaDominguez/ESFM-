#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	int i,lim,acum=0;
	cout<<"Ingrese el numero limite"<<endl;
	cin>>lim;
		cout<<""<<endl;
	for(i=0;i<lim;i++){
		cout<<i<<endl;
		acum=acum+i;
	}
	cout<<"\nLa suma de los numeros antes de "<<lim<<" es "<<acum;
	
	getch();
	return 0;
}


