//20. Programa que calcula el equivalente en pies de una longitud de x metros sabiendo que 1 metro equivale a 39.27 pulgadas y 12 pulgadas equivalen a 1 pie
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float pulgada,pie,metros;
	cout<<"Este programa nos apoyara a dar la equivalencia de una longitud de x metros a x pie "<<endl;
	cout<<"Ingrese la cantidad de metros que desea convertir a pies"<<endl;
	cin>>metros;
	pulgada=metros*39.27;
	pie=pulgada/12;
	cout<<"la equivalencia de: "<<metros<<"es: "<<pie<<"pies"<<endl;
	system("pause");
    return 0;
}

