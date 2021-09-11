#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
	int vector[3],i,j,por_venta=0.05;
	int indicacion=1;
	float salario;
int main(){
	

	
		
	

		while(indicacion==1){
		for(i=1;i<=indicacion;i++){
		cout<<"Ingrese el numero del trabajor"<<endl;
		cin>>vector[j];
		
		cout<<"Ingrese las ventas del trabajdor"<<endl;
		cin>>vector[i];
		
		salario=salario+(vector[i]*0.05);
		
		cout<<"El salario del vendedor "<<vector[j]<<" es: $"<<salario;
		
		cout<<"\nDesea Ingresar otra boleta 3)Si  0)No"<<endl;
		cin>>indicacion;
		
		}
		}
	
		
	getch();
	return 0;	
	}

