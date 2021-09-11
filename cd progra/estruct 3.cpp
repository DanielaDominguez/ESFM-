//estruct 3
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

	enum Color{rojo,verde,azul};
 float a,b,suma; 
int main()
{
	suma=0;
	
	struct datosPersona
    {
        string nombre,apellido,sexo,color,autor, libro;
        int   telefono,hombres,mujeres,edad,ano,calificacion,infante,curso;
        float precio,codigo,venta;
    };

    new datosPersona[50]=datosPersona*persona;
    
        cout<<"Cuantos infantes hay?"<<endl;
        cin>>persona[1].infante;
        
        cout<<"Cuantos cursos existen?"<<endl;
        cin>>persona[1].curso;  
		cout<<"Cuantos hombres son? "<<endl;
		cin>>persona[1].hombres;
		cout<<"Cuantas mujeres hay?"<<endl;
        cin>>persona[1].mujeres;
        cout<<"\nPor curso tienen que existir  "<<persona[1].infante / persona[1].curso<<"  infantes"<<endl;       
		cout <<"\nEn cada especialidad deben haber  "<<persona[1].mujeres/ persona[1].curso<<"  mujeres"<<endl;
		cout <<"\nEn cada especialidad deben haber  "<<persona[1].hombres/ persona[1].curso<<"  hombres"<<endl;
	
	system("pause");
	return 0;
}
