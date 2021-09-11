#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int vector[10],i,acumpos=0,acumneg=1;

	
	for(i=1;i<=10;i++){
		
		cout<<"Ingrese el numero "<<i<<endl;
		cin>>vector[i];
	}
	for(i=1;i<=10;i++){
		
		if(vector[i]>0){
			
			acumpos=acumpos+vector[i];
			
		}
		else if(vector[i]<0){
			
			acumneg=acumneg*vector[i];
		}
		
	}
		
	cout<<"La suma de los numeros positivos es: "<<acumpos<<endl;
	cout<<"El producto de los numeros negativos es: "<<acumneg<<endl;	
	
	getch();
	return 0;
}
