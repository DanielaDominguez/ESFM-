//estruct 11
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
        string mes,nombre,apellido,sexo,color,autor, libro;
       
        int   ano;
        float precio,codigo,venta;
        string cedula,profesion,nacimiento,direccion;
    };

    datosPersona *persona = new datosPersona[50];
    cout<<"Cuantas personas va a registrar?  "<<endl;
    cin>>a;
    
    for (int i=1; i<=a; i++)
    {
        cout<<"Dime el nombre  "<<i<<endl;
        cin>>persona[i].nombre;
        
		cout<<"Dime su cedula  "<<i<<endl;
        cin>>persona[i].cedula;

        cout<<"Dime su mes de inscripcion"<<i<<endl;
        cin>>persona[i].mes;
       
	    cout<<"Dime su ano de inscripcion"<<i<<endl;
        cin>>persona[i].ano;   
    }
 
	for (int i=1; i<=a; i++)
    {
    	cout<<"\nNombre  "<<persona[i].nombre<<endl;
        
		cout<<"Cedula  "<<persona[i].cedula<<endl;

        cout<<"Mes de inscripcion "<<persona[i].mes<<endl;
       
	    cout<<"Ano de inscripcion "<<persona[i].ano<<endl;
	}

	system("pause");
	return 0;
}
