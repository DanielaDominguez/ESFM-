//estruct 16
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin


	enum Color{ rojo,verde,azul};
 float a,b,suma,mayor,menor; 
int main()
{
			suma=0;

    struct datosPersona
    {
        string mes,nombre,apellido,sexo,color,autor, libro;
       
        int   ano;
        float precio,codigo,venta;
        string cedula,profesion,nacimiento,direccion;
    };

    datosPersona *persona = new datosPersona[50];

int menor=0,mayor=0,numero=0;
cout<<"Cuantas Alumnos presentaron el examen?  " <<endl;
cin>>a;
    for (int i=1; i<=a; i++)
    {
    		
        cout << "Ingresa la calificacion  " << i << endl;
        cin >> persona[i].ano;
		
		if (persona[i].ano > mayor);
			mayor = persona[i].ano;
		if (persona[i].ano < menor);
			menor = persona[i].ano;
	
        suma=suma+ persona[i].ano;
     	}
 cout << "El promedio es: "<< suma/a << endl;
	cout << "El mayor numero ingresado fue: "<< mayor << endl;
	cout << "El menor numero ingresado fue : "<< menor << endl;    

   

	system("pause");
	return 0;
}
