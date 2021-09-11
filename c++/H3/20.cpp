#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int lim,acum=0,i;
	cout<<"Ingrese el numero limite"<<endl;
	cin>>lim;
	cout<<""<<endl;
	for(i=3;i<=lim;i+=3){
		cout<<i<<endl;
		acum=acum+1;
	}
	
	cout<<"La cantidad de multiplos del 3 antes de "<<lim<<" son: "<<acum;
	getch();
	return 0;
}
