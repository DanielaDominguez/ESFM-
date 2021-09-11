//estruct 5
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

    new datosPersona[50]=datosPersona*persona;
    
        persona[1].nombre="JUAN";
        
        persona[1].cedula= "JAGP0803";

        persona[1].edad=52;
       
        persona[1].profesion="INGENiERO";

        persona[1].nacimiento="08-03-1967";
        
        persona[1].direccion=="EN SU CASA";
        
        persona[1].telefono=5546213636;
        
		persona[2].nombre="ALITA";
        
        persona[2].cedula= "ASDF5687";

        persona[2].edad=19;
       
        persona[2].profesion="ESTUDIANTE";

        persona[2].nacimiento="2-12-2000";
        
        persona[2].direccion=="UA";
        
        persona[2].telefono=53454857;
		
		persona[3].nombre="MARI";
        
        persona[3].cedula= "TKJUID334";

        persona[3].edad=49;
       
        persona[3].profesion="MAMÁ";

        persona[3].nacimiento="20-11-1999";
        
        persona[3].direccion=="A LADO DE SU VECINO";
        
        persona[3].telefono=49875226;

  cout << "\nAlumno  " <<persona[1].nombre<<endl;
        
		cout<<"Cedula  "<< persona[1].cedula<<endl;

        cout<<"Edad "<< persona[1].edad<<endl;
       
	    cout<<"Profesion "<< persona[1].profesion<<endl;

        cout<<"Lugar de nacimiento "<<persona[1].nacimiento<<endl;
        
        cout<<"Direccion "<< persona[1].direccion<<endl;
        
        cout<<"Numero de telefono "<<persona[1].telefono<<endl;
         
        cout << "\nAlumno  " <<persona[2].nombre<<endl;
        
		cout<<"Cedula  "<< persona[2].cedula<<endl;

        cout<<"Edad "<< persona[2].edad<<endl;
       
	    cout<<"Profesion "<< persona[2].profesion<<endl;

        cout<<"Lugar de nacimiento "<<persona[2].nacimiento<<endl;
        
        cout<<"Direccion "<< persona[2].direccion<<endl;
        
        cout<<"Numero de telefono "<<persona[2].telefono<<endl;
         
        cout << "\nAlumno  " <<persona[3].nombre<<endl;
        
		cout<<"Cedula  "<< persona[3].cedula<<endl;

        cout<<"Edad "<< persona[3].edad<<endl;
       
	    cout<<"Profesion "<< persona[3].profesion<<endl;

        cout<<"Lugar de nacimiento "<<persona[3].nacimiento<<endl;
        
        cout<<"Direccion "<< persona[3].direccion<<endl;
        
        cout<<"Numero de telefono "<<persona[3].telefono<<endl;


	system("pause");
	return 0;
}
