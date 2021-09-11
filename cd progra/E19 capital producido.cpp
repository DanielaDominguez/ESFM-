//19. Escribir un programa que calcule el capital producido por un capital de x de pesos, al cabo de un año depositado a un interés del y% mensual
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char *argv[])
{
	double c,i,v,g;
	cout<<"programa que calcule el capital producido por un capital de x de pesos, al cabo de un año depositado a un interés del y% mensual"<<endl;
	cout<<"digite el monto del capital: "<<endl;
	cin>>c;
	cout<<"digite el % de interes: "<<endl;
	cin>>i;
	v=c/100*i;
	g=v*12;
	cout<<"el total ganado es: "<<g<<" pesos"<<endl;
    system("pause");
    return 0;
}

