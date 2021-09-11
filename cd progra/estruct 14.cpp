//estruct 14
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

	enum Color{ rojo,verde,azul};
 float a,b,A,B,C,D,E,F,suma; 
int main()
{
	int numeros [50],n,numerosp=0,numerosn=0 ;
	cout<<"Cuantos numeros vas a ingresar? "<<endl;
	cin>>n;

    for (int i=1; i<=n; i++)
	{
		cout<<"Digite un numero: "<< endl;
		cin>>numeros[i];
		
		if (0<=numeros[i])
		{
			numerosp++;
		}
		
		else 
		{
			numerosn++;
		}
	}
	
	cout<<"los numeros positivos son: "<< numerosp<<endl;
	cout<<"Los numeros negativos son: "<<numerosn<<endl;

	system("pause");
	return 0;
}
