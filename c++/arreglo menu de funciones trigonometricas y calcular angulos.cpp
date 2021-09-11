//Programa que pedira al usuario ingresar una funcion trigonometrica o un angulo, de acuerdo a lo ingresado calculara el angulo o la funcion
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#define PI 3.14159265358979323846

using namespace std;  //este renglon nos permite poder usar el cout y el cin

int main ()
{
	int opcion,angulo,numero;
	char r;
	
	cout<<"Programa que pedira al usuario ingresar una funcion trigonometrica o un angulo, de acuerdo a lo ingresado calculara el angulo o la funcion"<<endl;
	cout<<"ingrese el numero de la opcion que desee realizar"<<endl;
	cout<<"opcion 1 calcular los grados"<<endl;
	cout<<"opcion 2 calcular el seno de un angulo"<<endl;
	cout<<"opcion 3 calcular el coseno de un angulo"<<endl;
	cout<<"opcion 4 calcular la tangente de un angulo"<<endl<<endl;

	do 
	{
		cout<<"ingresa el numero ya sea de la medida del angulo o para calcular el valor del angulo"<<endl;
		cin>>numero;
		cout<<"ingrese la opcion que desee llevar a cabo"<<endl;
		cin>>opcion;
		
		switch(opcion)
		{
		
		case 1:cout<<"\t La medida del angulo es "<<((numero*180)/PI)<<endl;
		break;
		case 2:cout<<"\t El seno de "<<numero<<"="<<sin(numero*PI/180)<<endl;
        break;
		case 3:cout<<"\t El coseno de "<<numero<<"="<<cos(numero*PI/180)<<endl;
        break;
		case 4:cout<<"\t La tangente de "<<numero<<"="<<tan(numero*PI/180)<<endl;
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

