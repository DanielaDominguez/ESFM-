#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	float trab,mayor_ochenta=0,menor_ochenta=0,ochenta=0;
	int vector[10000],i;
	cout<<"\nIngrese el numero de empleados que desea registrar"<<endl;
	cin>>trab;
	for(i=1;i<=trab;i++){
		cout<<"Ingrese el peso del trabajor "<<i<<endl;
		cin>>vector[i];
	}
	
	for(i=1;i<=trab;i++){
		if(vector[i]<80){
			menor_ochenta++;
		}
		else if(vector[i]>80){
			mayor_ochenta++;
		}
		else if(vector[i]=80){
			ochenta++;
		}
	}
	cout<<"\nEl numero de trabajdores con menos de 80kg son: "<<menor_ochenta;
	cout<<"\nEl numero de trabajadores con mas de 80kg son: "<<mayor_ochenta;
	cout<<"\nEl numero de trabajadores con 80kg son: "<<ochenta;
	getch();
	return 0;
}
