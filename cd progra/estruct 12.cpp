//estruct 12
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

   enum Color{rojo,verde,azul};
 float a,b,A,B,C,D,E,F,suma; 
int main()
{
	struct datosPersona
    {
        string mes,nombre,apellido,sexo,color,autor, libro;
       
        int   ano;
        float precio,codigo,venta,calificacion,suma;
        string cedula,profesion,nacimiento,direccion,materia;
    };
	
    datosPersona*persona=new datosPersona[50];

    for(int i=1; i<=20; i++)
    {
        cout<<"Estudiante "<<i<<endl;
		cout<<"Nombre "<<endl;
		cin>>persona[i].nombre;
        cout<<"Materia"<<endl;
        cin>>persona[i].materia;
        
		for (int i=1; i<=3; i++)
		{
			out<<"Calificacion "<<i<<endl;
			cin>>persona[i].calificacion;
			suma=suma + persona[i].calificacion;
		}
		cout << "promedio " << suma/3 << endl;  
    }
	
	for (int i=1; i<=20; i++)
	{
		cout << "\n\nNombre " <<persona[i].nombre<<endl;
		cout << "Materia: "<<    persona[i].materia<<endl;
			
		for (int i=1; i<=3; i++)
		{
			cout<<"calificacion  "<< i << " "<< persona[i].calificacion<<endl;
		}
		cout << "promedio " << suma/3 << endl;
		suma=0;
	}
	system("pause");
	return 0;
}
