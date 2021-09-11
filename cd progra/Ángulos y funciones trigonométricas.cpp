#include <iostream>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

using namespace std;

int main ()
{
	int n;
	double a,r;
	char f;
	
	cout<<"(1)Ingresar angulo.\n(2)Ingresar funcion trigonometrica.\n\nOpcion deseada: ";
	cin>>n;
	
	while(n<1 || n>2)
	{
		cout<<"\nIngrese un numero entre 1 y 2: ";
		cin>>n;
	}
	
	switch(n)
	{
		case 1:
			cout<<"\nIngrese un angulo en grados: ";
			cin>>a;
			r=a*PI/180;
			cout<<"\nFunciones trigonemetricas de "<<a<<" grados."<<endl;
			cout<<"\nCoseno: "<<cos(r)<<"\nSeno: "<<sin(r)<<"\nTangente: "<<tan(r)<<endl;
			break;
			
		case 2:
			cout<<"\n(a)Coseno.\n(b)Seno.\n(c)Tangente.\n\nSeleccione la funcion a ingresar: ";
			cin>>f;
			
			while(f<97 || f>99)
			{
				cout<<"\nIngresar a, b, c: ";
				cin>>f;
			}
			
			switch(f)
			{
				case 'a':
					cout<<"\nIngrese un coseno: ";
					cin>>a;
					
					while(a>1 || a<-1)
					{
						cout<<"\nDominio de funcion arcocoseno definido en [-1,1]: ";
						cin>>a;
					}
					
					cout<<"\nEl arcocoseno de "<<a<<" en grados es "<<acos(a)*180/PI<<endl;
					break;
					
				case 'b':
					cout<<"\nIngrese un seno: ";
					cin>>a;
					
					while(a>1 || a<-1)
					{
						cout<<"\nDominio de funcion arcoseno definido en [-1,1]: ";
						cin>>a;
					}
					
					cout<<"\nEl arcoseno de "<<a<<" en grados es "<<asin(a)*180/PI<<endl;
					break;
										
				case 'c':
					cout<<"\nIngrese una tangente: ";
					cin>>a;
					cout<<"\nEl arcotangente de "<<a<<" en grados es "<<atan(a)*180/PI<<endl;
					break;
			}
			
			break;
	}
	
	system("pause");
	return 0;
}
