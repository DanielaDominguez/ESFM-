//estruct 9
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

	float a,b,suma,suma1,suma2,suma3,suma4,suma5; 
int main()
{
    struct datosPersona 
	{
		string nombre;
		int edad,coeficiente;
		float calificacion;
    };
    
    datosPersona *persona = new datosPersona[50];
    for (int i=1; i<=10; i++)
	{
       cout<<"Dime El nombre   "<<endl;
       cin >> persona[i].nombre;
	   cout<<"Dime la edad  "<<endl;
       cin >> persona[i].edad;
       cout<<"Dame la calificacion  "<<endl;
       cin >> persona[i].calificacion;       
       cout<<"Dime su coeficiente intelectual"<<endl;
       cin >> persona[i].coeficiente;
    }
     for (int i=1; i<=10; i++) {
        cout<<"\nNombre  "<<persona[i].nombre<<endl;
        cout<<"Edad   "<<persona[i].edad<<endl;
		cout<<"Calificacion  "<<persona[i].calificacion<<endl;
		cout<<"IQ  "<<persona[i].coeficiente<<endl;       
    }

	system("pause");
	return 0;
}
