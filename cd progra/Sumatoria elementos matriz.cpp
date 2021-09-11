#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int i,j,n=1,m=1,min,max,s=0,A[n][m];
	
	srand(time(NULL));
	
	cout<<"\tSUMA DE TODOS LOS ELEMENTOS DE UNA MATRIZ A\n\nIndique numero de filas: ";
	cin>>n;
	cout<<"\nIndique numero de columnas: ";
	cin>>m;
	cout<<"\nLISTO!\n\nAhora ingrese el rango de los valores que pueden tomar los elementos de A.\n\nMinimo: ";
	cin>>min;
	cout<<"\nMaximo: ";
	cin>>max;
	cout<<"\n\tMATRIZ A GENERADA:\n"<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			A[i][j]=min+rand()%(max+1-min);
			s=s+A[i][j];
			cout<<"\t"<<A[i][j];
		}
		
		cout<<endl;
	}
	
	cout<<"\nLa sumatoria de todos los elementos de A da como resultado "<<s<<"\n"<<endl;
	
	system("pause");
	return 0;
}
