//multiplicacion de dos matrices mostrando la matriz resultante
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
	
int n, m;
cout << "Digite el numero de filas de la matriz: \n";
cin >> n;
cout << "Digite el numero de columnas de la matriz: \n";
cin >> m;
float A[n][m], z, B[n][m];
for (int i =0; i<n; i++){
	for (int j = 0; j<m; j++){
		cout << "Digite el valor para A["<<i<<"]["<<j<<"]\n";
		cin >> A[i][j];		
	}
}
cout << "Digite una constante: k \n";
cin >>z;
for (int i =0; i<n; i++){
	for (int j = 0; j<m; j++){
		
		B[i][j]= A[i][j]*z;
		
	}	
}
cout << "La matriz resultante es igual a: \n";
for (int i =0; i<n; i++){
	for (int j = 0; j<m; j++){
		cout <<B[i][j]<<" ";		
	}
	cout << "\n";
}

	system("pause");
	return 0;
}
