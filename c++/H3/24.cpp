#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int lim,vector[1000],i,cuad,cub,acum=0;

	
	cout<<"\nIngrese el numero limite"<<endl;
	
	cin>>lim;
	
	cout<<"\nNumero"; cout<<"    Cuadrado"; cout<<"     Cubo";
	
	for(i=1;i<=lim;i++){
		
		cuad=pow(i,2);
		cub=pow(i,3);
		cout<<"\n"<<i; cout<<"             "<<cuad; cout<<"          "<<cub;
	}

getch();
return 0;	
	
}
