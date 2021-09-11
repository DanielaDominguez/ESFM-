//estruct 18
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
	
float a,b,c,d,num,mg, i;
string resp;

srand(time(NULL));
int n,m,suma,media;



resp="s";	

	cout<<"Programa para calcular la media de matrices.\n";
do{
suma=0;

m=2;
n=3;
int mat1[m][n];

cout<<"\nIntroduce los numeros  \n";
for(int i=0; i<m;i++){
	for(int j=0;j<n;j++){	
	cout<<"ingrese numero: ";
	cin>>mat1[i][j];
	suma= suma+mat1[i][j]; 
	}
}
cout<<"\n";
cout<<"**********************\n";



cout<<"\n";
cout<<"tus numeros introducidos son :\n";

for(int i=0; i<m;i++){
	for(int j=0;j<n;j++){	
	 
cout<<mat1[i] [j]<<"\t";	
	}cout<<"\n";
}

cout<<"\nLa suma de los numeros es: "<<suma;





cout<<"\n\nPara realizar otra suma  escriba s ";
cin>>resp;
}while (resp=="s");

	cout<<"\nHasta luego\n";

	system("pause");
	return 0;
}
