//Programa que hara suma, resta, multiplicacion y division segun la decision del usuario
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

int main ()
{
	int opcion,n1,n2;
	char r;
	
	cout<<"Programa que hara suma, resta, multiplicacion y division segun la decision del usuario"<<endl;
	cout<<"ingrese el numero de la opcion que desee realizar"<<endl;
	cout<<"opcion 1 suma"<<endl;
	cout<<"opcion 2 resta"<<endl;
	cout<<"opcion 3 producto"<<endl;
	cout<<"opcion 4 division"<<endl<<endl;

	do 
	{
		cout<<"ingresa dos numeros"<<endl;
		cout<<"numero 1="<<"\t";
		cin>>n1;
		cout<<"numero 2="<<"\t";
		cin>>n2;
		cout<<endl;
		cout<<"ingresa la opcion que desea realizar con esos dos numeros"<<endl;
		cin>>opcion;
	
		cout<<"la operacion es: "<<endl;
		
		switch(opcion)
		{
		
		case 1:cout<<"\t La suma de "<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
		break;
		case 2:cout<<"\t La resta de "<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
        break;
		case 3:cout<<"\t El producto de "<<n1<<"x"<<n2<<"="<<n1*n2<<endl;
        break;
		case 4:cout<<"\t La division de "<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
        break;
		default:cout<<"LEER bien las intrucciones por favor"<<endl;	
		}
		cout<<"\n Desea realizar mas operaciones (s/n)?: ";
		cin>>r;
	}
	while(r!='n');
	cout<<endl;
	
	system("pause");
	return 0;
}

