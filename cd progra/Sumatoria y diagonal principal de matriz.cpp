#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int i,j,n=1,min,max,s=0,A[n][n];
	
	srand(time(NULL));
	
	cout<<"\tSUMA DE TODOS LOS ELEMENTOS Y DIAGONAL PRINCIPAL DE UNA MATRIZ A NXN\n\nIndique numero de filas y columnas: ";
	cin>>n;
	cout<<"\nLISTO!\n\nAhora ingrese el rango de los valores que pueden tomar los elementos de A.\n\nMinimo: ";
	cin>>min;
	cout<<"\nMaximo: ";
	cin>>max;
	cout<<"\n\tMATRIZ A GENERADA:\n"<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			A[i][j]=min+rand()%(max+1-min);
			s=s+A[i][j];
			cout<<"\t"<<A[i][j];
		}
		
		cout<<endl;
	}
	
	cout<<"\nLa sumatoria de todos los elementos de A da como resultado "<<s<<endl;
	cout<<"\nY los elementos de la diagonal principal de A son ";
	
	for(i=0;i<n;i++)
	{
		cout<<A[i][i]<<", ";
	}
	
	cout<<"\n"<<endl;
	
	system("pause");
	return 0;
}
