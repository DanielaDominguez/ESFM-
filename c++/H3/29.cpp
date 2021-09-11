#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	
	float valor_hora,a,h,sueldo_bruto,descuento,salario;
	string nombre;
	cout<<"Ingrese su nombre"<<endl;
	cin>>nombre;
	cout<<"Ingrese su antiguedad en años"<<endl;
	cin>>a;
	cout<<"Ingrese la cantidad de horas trabajadas en el mes"<<endl;
	cin>>h;
	cout<<"Ingrese su valor por hora"<<endl;
	cin>>valor_hora;

	
	sueldo_bruto=valor_hora*h+a*(30);
	descuento=(valor_hora*h+a*(30))*(0.13);
	salario=sueldo_bruto-descuento;
	
	cout<<"Nombre: "<<nombre;
	cout<<"\nAntiguedad: "<<a;
	cout<<"\nValor hora: $"<<valor_hora;
	cout<<"\nSueldo bruto: $"<<sueldo_bruto;
	cout<<"\nDescuento: $"<<descuento;
	cout<<"\nSueldo a cobrar: $"<<salario;
	
	getch();
	return 0;	
}
