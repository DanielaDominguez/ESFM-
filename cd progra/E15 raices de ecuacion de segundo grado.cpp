//15. Escribir un programa que calcule las raíces de una ecuación de 2° grado.
/*(-b + raíz cuadrada(b2-4*a*c)/(2*a).*/
/*(-b - raíz cuadrada(b2-4*a*c)/(2*a)*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float a,b,c,raiz1,raiz2;
	cout<<"Encontraremos las raices de una ecuacion de segundo grado"<<endl;
	cout<<"digite el valor de a: "<<endl;
	cin>>a;
	cout<<"digite el valor de b: "<<endl;
	cin>>b;
	cout<<"digite el valor de c: "<<endl;
	cin>>c;
	raiz1=-b+(sqrt(b*b)-4*a*c)/(2*a);
	raiz2=-b-(sqrt(b*b)-4*a*c)/(2*a);
	
	cout<<"primera raiz: "<<raiz1<<endl;
	cout<<"segunda raiz: "<<raiz2<<endl;
    system("pause");
    return 0;
}

