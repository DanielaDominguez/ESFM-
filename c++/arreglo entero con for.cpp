//lectura de arreglo de tipo int con FOR
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;

int main ()
{
	int vector[10];  //aqui se expresa que el vector sera con numeros y puede tener como MAXIMO 10 elementos
	int i=0,n;
	cout<<"programa que leera un arreglo de tipo entero"<<endl<<endl;
	cout<<"¿De que dimension sera tu vector?"<<endl;
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
		cout<<"introduce el numero del vector ["<<i+1<<"]:"<<endl;
		cin>>vector[i];
	}
	cout<<"el vector es:"<<"\t";
	for(i=0;i<=n;i++)
	cout<<vector[i]<<"\t";
	
	getch();
	return 0;
}
