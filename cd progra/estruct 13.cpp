//estruct 13
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
    cout<<"Cuantas libros va a registrar?  " <<endl;
	cin>>a;
	string resp;
	resp == "libro";
    for (int i=1; i<=a; i++)
    {
    	cout << "Registro numero "<< i  << endl;
        cout << "Dame el numero de referencia  "  << endl;
        cin >> persona[i].referencia;
        
		cout<<"Dime su titutlo: "<< i <<endl;
        cin >> persona[i].titulo;

        cout<<"Dime el nombre del autor: "    <<endl;
        cin >> persona[i].autor;
       
	    cout<<"Dime su editorial: "    <<endl;
        cin >> persona[i].editorial;

        cout<<"Clase de publicacion (libro o revista): "    <<endl;
        cin >> resp;
		
		    if(resp== "libro")
		    {	cout<<"Dime su numero de edicion: "    <<endl;
        cin >> persona[i].edicion;
		    	
			}
				else {   cout<<"Dime su nombre: "    <<endl;
        cin >> persona[i].revista;
		 
		}
		 
        
        
     	}
 
    
	for (int i=1; i<=a; i++)
    {    
 	cout << "Registro numero: "<< i  << endl;
  cout << "\nReferencia:  " <<persona[i].referencia<<endl;
        
		cout<<"Titulo:  "<< persona[i].titulo<<endl;

        cout<<"Autor: "<< persona[i].autor<<endl;
       
	    cout<<"Editorial:  "<< persona[i].editorial<<endl;

        cout<<"Publicacion: "<< persona[i].publicacion<<endl;


 cout<<"Numero de edicion: "<< persona[i].edicion<<endl;

 cout<<"Nombre:  "<< persona[i].revista<<endl;

}
	system("pause");
	return 0;
}
