//estruct 22
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
	float x1, y, x2;
	
	cout << "Escriba la altura de las cordenadas\n";
	cin >> y;
	
	x1 =  sqrt(y);
	x2 = - sqrt(y);
	
	cout << "Las cordenadas son iguales a "<< "\n("<<x1<<" , "<<y<<")\n("<<x2<<" , "<<y<<")\n";

	system("pause");
	return 0;
}
