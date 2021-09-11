//calculadora
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
	int sum, rest, mult, div, n1,n2, res;
	cout <<"Ingrese la opcion que desea realizar: \n";
	cout<<"1. Suma.\n";
	cout<<"2. Resta.\n";
	cout<<"3. Multiplicacion.\n";
	cout<<"4. Division.\n";
	cin>>res;
	cout<<"Ingrese el numero uno: "<<endl;
	cin>>n1;
	cout<<"Ingrese el numero dos: "<<endl;
	cin>>n2;
	switch (res){
	case 1: 
	res=n1+n2;
	break;
	case 2: 
	res=n1-n2;
	break;
	case 3: 
	res=n1*n2;
	case 4: 
	res=n1/n2;
	default: cout<<"No ha seleccionado ninguna opcion "<<endl;
	}
	cout<<" El resultado de la operacion es: "<<res<<endl;
}
