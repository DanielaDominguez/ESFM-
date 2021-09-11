//22. Programa que lea dos numeros enteros A,B y obtenga los valores de la division entera de A dividido entre B y el residuo de esta
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b;
	float division,modulo;
	cout<<"Calularemos la division de A/B y su residuo"<<endl;
	cout<<"ingrese el valor A"<<endl;
	cin>>a;
	cout<<"ingrese el valor B"<<endl;
	cin>>b;
	if (b==0)
	{
		
		cout<<"no se puede dividir entre 0"<<endl;
	}
	
	else
	{
		
	division=a/b;
	modulo=a%b;
	cout<<"el resultado de la division es: "<<division<<"y su residuo es: "<<modulo<<endl;	
	}
	
	system("pause");
    return 0;
}
