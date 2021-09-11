#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int vector[10];
	int i,pos=0,neg=0,cero=0,n=10;
	cout<<"Ingrese los diez elementos"<<endl;
	
	for(i=0;i<n;i++){
		
		cin>>vector[i];
	}
	for(i=0;i<n;i++){
			if(vector[i]>0){
		pos++;
	}
	else if(vector[i]<0){
		neg++;
	}
	else if(vector[i]==0){
		cero++;
	}
	}

	cout<<"la cantidad de numeros positivos es: "<<pos<<endl;
	cout<<"La cantidad de numeros negativos es: "<<neg<<endl;
	cout<<"La cantidad de ceros es: "<<cero<<endl;
}
