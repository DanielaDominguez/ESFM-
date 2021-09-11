//estruct 24
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

int main ()
{
	struct Alumno{
		
		char cedula[40], nombre[40], apellido[40], profesion[40], lugar[40], direccion[40] ;
		int edad, telefono ;
		
	}Alumnos[3];
	for(int i =0;i<3;i++){
	cout << "Escriba la cedula del alumno\n";
	cin.getline(Alumnos[i].cedula, 40,'\n');	
	
	cout << "Escriba el nombre del alumno\n";
	cin.getline(Alumnos[i].nombre, 40,'\n');
	
	cout << "Escriba los apellidos del alumno\n";
	cin.getline(Alumnos[i].apellido, 40,'\n');
	
	cout << "Escriba la profesion del alumno\n";
	cin.getline(Alumnos[i].profesion, 40,'\n');
	
	cout << "Escriba el lugar de nacimiento del alumno\n";
	cin.getline(Alumnos[i].lugar, 40,'\n');
	
	cout << "Escriba la direccion del alumno\n";
	cin.getline(Alumnos[i].direccion, 40,'\n');
	
	cout << "Escriba la edad del alumno\n";
	cin>>Alumnos[i].edad;
	
	cout << "Escriba el telefono del alumno\n";
	cin>>Alumnos[i].telefono;	
	
	}
	
		for (int i =0; i<3;i++){
		
		cout<<Alumnos[i].cedula<<endl;
		cout<<Alumnos[i].nombre<<endl;
		cout<<Alumnos[i].apellido<<endl;
		cout<<Alumnos[i].profesion<<endl;
		cout<<Alumnos[i].lugar<<endl;
		cout<<Alumnos[i].direccion<<endl;
		cout<<Alumnos[i].edad<<endl;
		cout<<Alumnos[i].telefono<<endl;
		
	}


	system("pause");
	return 0;
}
