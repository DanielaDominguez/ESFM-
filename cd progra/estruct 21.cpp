//estruct 21
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
	struct Libro{
		
		char titulo[40], autor[40], color[40] ;
		int A;
		
	}libros[3];
	
	for (int i =0; i<3; i++){
		
		cout<<"Digite el titulo del libro\n";
		cin.getline(libros[i].titulo, 40,'\n'); 
		
		cout<<"Digite el nombre del autor\n";
		cin.getline(libros[i].autor, 40,'\n');
		
		cout<<"Digite el año de publicacion\n";
		cin>>libros[i].A;
		
		cout<<"Digite el color del libro\n";
		cin.getline(libros[i].color, 40,'\n');
		
		
	}
	
	for (int i =0; i<3;i++){
		
		cout<<libros[i].titulo<<endl;
		cout<<libros[i].autor<<endl;
		cout<<libros[i].A<<endl;
		cout<<libros[i].color<<endl;
		
		
	}
	

	system("pause");
	return 0;
}
