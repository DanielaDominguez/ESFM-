//estruct 2
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
	int m,n;
	cout<<"digite la dimension de la matriz: "<<endl;
	cin>>m>>n;
	
	int  A[m][n],B[n][m],C[m][m];
	cout<<"matriz A: "<<endl;
	
	for( int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]:\n";
			cin>>A[i][j];
		}
	}
	cout<<"\nmatriz B: "<<endl;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			C[i][j] =0;
			
			for(int k = 0; k<n; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
            }
		}
	}
	cout<<"La multiplicaion de matrices es: \n";
	
	for( int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<C[i][j]<<"\t";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}
