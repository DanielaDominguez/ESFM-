//estruct 6
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
    struct datosPersona 
	{
        string color,autor,libro;
		string sexo, nombre,apellido,profesion;
        int   telefono,edad,ano,calificacion;
        float precio,codigo,venta;
        string cedula,nacimiento,direccion;
    };
    
    datosPersona *persona = new datosPersona[50];
        persona[1].nombre= "CARLOS"; 
        persona[1].apellido= "MELENDEZ"; 
        persona[1].edad= 11; 
        persona[1].sexo= "Masculino"; 
		persona[1].direccion= "GAM"; 
        persona[1].telefono= 554548733; 
        
        persona[2].nombre= "Jhonny"; 
        persona[2].apellido= "LOPEZ"; 
        persona[2].edad= 20; 
        persona[2].sexo= "Masculino"; 
		persona[2].direccion= "CU"; 
        persona[2].telefono= 018004552; 
		
		persona[3].nombre= "PAULINA"; 
        persona[3].apellido= "PERREADORA"; 
        persona[3].edad= 18; 
        persona[3].sexo= "FEMENINO"; 
		persona[3].direccion= "RDO MEX"; 
        persona[3].telefono= 3448763; 
		
		persona[4].nombre= "ALEJANDRO"; 
        persona[4].apellido= "GUAPO"; 
        persona[4].edad= 19; 
        persona[4].sexo= "MASCULINO"; 
		persona[4].direccion= "CU"; 
        persona[4].telefono= 456487623; 
		
		persona[5].nombre= "DANI"; 
        persona[5].apellido= "PEÑA"; 
        persona[5].edad= 21; 
        persona[5].sexo= "Femenino"; 
		persona[5].direccion= "ZACATENCO"; 
        persona[5].telefono= 123456789;      

cout<<"\nAmigo 1 es "<<endl;    	
cout<<"Nombre  "<< persona[1].nombre<<endl;
cout<<"Apellido  "<< persona[1].apellido<<endl;    
cout<<"Edad   "<< persona[1].edad<<endl;
cout<<"Sexo  "<< persona[1].sexo<<endl;
cout<<"Direccion  "<< persona[1].direccion<<endl;
cout<<"Telefono  "<< persona[1].telefono<<endl;

cout<<"\nAmigo 2 es "<<endl;    	
cout<<"Nombre  "<< persona[2].nombre<<endl;
cout<<"Apellido  "<< persona[2].apellido<<endl;    
cout<<"Edad   "<< persona[2].edad<<endl;
cout<<"Sexo  "<< persona[2].sexo<<endl;
cout<<"Direccion  "<< persona[2].direccion<<endl;
cout<<"Telefono  "<< persona[2].telefono<<endl;  

cout<<"\nAmigo 3 es "<<endl;    	
cout<<"Nombre  "<< persona[3].nombre<<endl;
cout<<"Apellido  "<< persona[3].apellido<<endl;    
cout<<"Edad   "<< persona[3].edad<<endl;
cout<<"Sexo  "<< persona[3].sexo<<endl;
cout<<"Direccion  "<< persona[3].direccion<<endl;
cout<<"Telefono  "<< persona[3].telefono<<endl;

cout<<"\nAmigo 4 es "<<endl;    	
cout<<"Nombre  "<< persona[4].nombre<<endl;
cout<<"Apellido  "<< persona[4].apellido<<endl;    
cout<<"Edad   "<< persona[4].edad<<endl;
cout<<"Sexo  "<< persona[4].sexo<<endl;
cout<<"Direccion  "<< persona[4].direccion<<endl;
cout<<"Telefono  "<< persona[4].telefono<<endl;

cout<<"\nAmigo 5 es "<<endl;    	
cout<<"Nombre  "<< persona[5].nombre<<endl;
cout<<"Apellido  "<< persona[5].apellido<<endl;    
cout<<"Edad   "<< persona[5].edad<<endl;
cout<<"Sexo  "<< persona[5].sexo<<endl;
cout<<"Direccion  "<< persona[5].direccion<<endl;
cout<<"Telefono  "<< persona[5].telefono<<endl;
   

	system("pause");
	return 0;
}
