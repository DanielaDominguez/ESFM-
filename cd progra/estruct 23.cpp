//estruct 23
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
	setlocale(LC_CTYPE,"Spanish");
	
	int D, M, A, a;
	
	cout <<"Ingrese el dia y unicamente el dia de hoy\n";
	cin >> D;
	cout <<"Ingrese el mes y unicamente el numero\n";
	cin >> M;
	cout <<"Ingrese el año \n";
	cin >> A;
	
	if (D == 12){
		if (M == 10){
			
			a = A-2000;
			
			cout << "Felices "<<a<< " años\n";	
			
		}
		
	}

	system("pause");
	return 0;
}
