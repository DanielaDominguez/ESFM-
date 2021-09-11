// matriz transpuesta
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
float A[20][20], aux, B[20][20];
cout << "Digite el numero de filas de la matriz no mayor a 20 \n";
cin >> n;
cout << "Digite el numero de columnas de la matriz no mayor a 20 \n";
cin >> m;

for (int i =0; i<n; i++){
	for (int j = 0; j<m; j++){
		cout << "Digite el valor para A["<<i<<"]["<<j<<"]\n";
		cin >> A[i][j];	
	}	
}
for (int j =0; j<m; j++){
	for (int i = 0; i<n; i++){
		B[j][i] = A[i][j];
	}	
}
cout << "\nLa matriz original es igual a: \n";
for (int i =0; i<n; i++){
	for (int j = 0; j<m; j++){
		cout <<A[i][j]<<" ";	
	}
	
}
cout << "\n\nLa matriz Transpuesta es igual a: \n";
for (int i =0; i<m; i++){
	for (int j = 0; j<n; j++){
		cout <<B[i][j]<<" ";	
	}
	cout << "\n";
}

system("pause");
	return 0;
}
