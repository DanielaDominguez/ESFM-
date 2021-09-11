//estruct 10
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
        int   telefono,edad,ano,calificacion;
        float precio,codigo,venta;
        string cedula,profesion,nacimiento,direccion;
    };
    datosPersona *persona = new datosPersona[50];
    for (int i=1; i<=10; i++) 
	{
        cout << "Dime el nombre  " << i << endl;
        cin >> persona[i].nombre;
        
		cout<<"Dime su cedula  "<< i <<endl;
        cin >> persona[i].cedula;

        cout<<"Dime su edad "<< i <<endl;
        cin >> persona[i].edad;
       
	    cout<<"Dime su profesion "<< i<<endl;
        cin >> persona[i].profesion;

        cout<<"Dime su Lugar de nacimiento "<< i<<endl;
        cin >> persona[i].nacimiento;
        
        cout<<"Dime su direccion "<< i<<endl;
        cin >> persona[i].direccion;
        
        cout<<"Dime su numero de telefono "<< i<<endl;
        cin >> persona[i].telefono;
    }
	for (int i=1; i<=10; i++) 
	{    
        cout << "\nAlumno  " <<persona[i].nombre<<endl;
		cout<<"Cedula  "<< persona[i].cedula<<endl;
        cout<<"Edad "<< persona[i].edad<<endl;
	    cout<<"Profesion "<< persona[i].profesion<<endl;
        cout<<"Lugar de nacimiento "<<persona[i].nacimiento<<endl;
        cout<<"Direccion "<< persona[i].direccion<<endl;
        cout<<"Numero de telefono "<<persona[i].telefono<<endl;
	}

	system("pause");
	return 0;
}
