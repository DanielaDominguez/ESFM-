#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i,suma_serie=0;
	cout<<"Muestra la serie dada y la suma"<<endl;
	for(i=3;i<=100;i+=3){
		
		cout<<i<<endl;
		suma_serie=suma_serie+i;
	}
	cout<<"\nLa suma de los elementos de la serie es: "<<suma_serie;
}
