//estruct 17
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin


	enum Color{ rojo,verde,azul};
 float a,b,A,B,C,D,E,F,suma,nf; 
int main()
{
    struct datosPersona
    {
        string mes,nombre,apellido,sexo,color,autor, libro;
       
        int   ano,examen;
        float precio,codigo,venta,calificacion,suma;
        string cedula,profesion,nacimiento,direccion,materia;
    };
	
    datosPersona *persona = new datosPersona[50];
cout<<"Ingrese el numero de estudiantes: "<<endl;
cin>>a;
    for (int i=1; i<=a; i++)
    {
        cout << "Estudiante " << i << endl;
  cout << "Nombre " <<endl;
  
  cin >> persona[i].nombre;
          
    cout << "Materia"  << endl;
        cin >> persona[i].materia;
    

	for (int i=1; i<=1; i++){
		
	
cout << "Calificacion  de examen" << endl;
        	cin >> persona[i].examen;
	
       
	    for (int i=1; i<=4; i++ ){
    cout << "Calificacion " << i << endl;

        cin >> persona[i].calificacion;    	
        	
		}
        
        
suma=suma + persona[i].calificacion + persona[i].examen;
	
}
   
cout<<"el promedio es: "<< suma/5<<endl;
nf= 0.7*persona[i].calificacion + 0.3*persona[i].examen;
cout<<"La nota final es: "<< nf<<endl;
     cout<<"la nota del parcial es: "<<(suma-persona[i].examen)/4<<endl; 
     	}
 

	system("pause");
	return 0;
}
