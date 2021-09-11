//21. Programa que calcule el area de un rectangulo a partir de sus coordenadas x1, y1, x2 y2
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int arge, char *argv[])
{
	int x1,x2,y1,y2,area;
	cout<<"Este programa nos ayudara a calcular el area de un rectangulo a partir de sus coordenadas x1,x2,y1,y2"<<endl;
	cout<<"ingrese x1"<<endl;
	cin>>x1;
	cout<<"ingrese x2"<<endl;
	cin>>x2;
	cout<<"ingrese y1"<<endl;
	cin>>y1;
	cout<<"ingrese y2"<<endl;
	cin>>y2;
	area=(x2-x1)*(y2-y1);
	cout<<"El area del rectangulo es: "<<area<<" unidades"<<endl;
	system("pause");
    return 0;
}
