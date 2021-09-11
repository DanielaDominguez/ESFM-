//estruct 20
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin


	enum Color{ rojo,verde,azul};
 float a,b,suma; 
int main()
{
			suma=0;

    struct datosPersona
    {
        
       
        int   ano;
        float precio,codigo,venta;
        string referencia,titulo,autor,editorial,publicacion,edicion,revista;
    };

    datosPersona *persona = new datosPersona[50];

string resp;
resp == "libro";
    for (int i=1; i<=3; i++)
    {
    	cout << "Registro numero "<< i  << endl;
       
        
		cout<<"Dime su titutlo: "<< i <<endl;
        cin >> persona[i].titulo;

        cout<<"Dime el nombre del autor: "    <<endl;
        cin >> persona[i].autor;
       
	    cout<<"Año en que se publica: "    <<endl;
        cin >> persona[i].editorial;

        cout<<"Color: "    <<endl;
        cin >> persona[i].editorial;
        
     	}
 
	for (int i=1; i<=3; i++)
    {    
 	cout << "Registro numero: "<< i  << endl;
  
        
		cout<<"Titulo:  "<< persona[i].titulo<<endl;

        cout<<"Autor: "<< persona[i].autor<<endl;
       
	    cout<<"Año:  "<< persona[i].editorial<<endl;

        cout<<"Color: "<< persona[i].publicacion<<endl;

}
  
	system("pause");
	return 0;
}
