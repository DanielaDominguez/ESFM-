//23. Programa que convierta un numero de segundos en su equivalente en minutos y segundos
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int arge, char *argv[])
{
	float s,S,m;
	cout<<"Calcularesmos la equivalencia de un numero de segundos en minitos y segundos"<<endl;
	cout<<"Ingrese los segundos a convertir: "<<endl;
	cin>>s;
	m=s/60;
	S=m*60;
	cout<<s<<" segundos"<<" equivalen a: "<<S<<" segundos"<<endl;
	cout<<s<<" segundos"<<" equivalen a: "<<m<<" minutos"<<endl;
	system("pause");
    return 0;
}

