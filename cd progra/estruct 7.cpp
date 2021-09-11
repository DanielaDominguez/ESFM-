//estruct 7
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

	enum Color{rojo,verde,azul};
 float a,b,suma,suma1,suma2,suma3,suma4,suma5; 
int main()
{
	suma=0;
	suma1=0;
	suma2=0;
	suma3=0;
	suma4=0;
	suma5=0;
	
    struct datosPersona
	{
        float calificacion;
    };
    
    datosPersona *persona = new datosPersona[50];
        cout<<"Cuantos alumnos son? "<<endl;
        cin>>a;
        
        for (int i=1; i<=a; i++)
		{
			cout<<"Dime su Calificacion (0-10)"<<endl;
			cin >> persona[i].calificacion;
			
			if (persona[i].calificacion<6 && 0<=persona[i].calificacion)
			{
				suma1= suma1+ 1;
			}
			
			if (persona[i].calificacion<=10 && 6<=persona[i].calificacion)
			{
				suma2= suma2 + 1;
			}
			
			suma3= (persona[i].calificacion + suma3);
		}
		
		cout<<"\nEl promedio general fue de: " << suma3/a <<" %"<<endl;
		cout<<"\nEl total de reprobados fue de: " << suma1 <<endl;       
		cout<<"\nEl total de aprobados fue de: " << suma2 <<endl;
	
		system("pause");
		return 0;
}
