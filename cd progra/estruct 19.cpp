//estruct 19
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
        
       
        int   ano,edad;
        float precio,codigo,venta;
        string referencia,titulo,autor,editorial,publicacion,edicion,revista;
    };

    datosPersona *persona = new datosPersona[50];

string resp;
resp == "libro";
    for (int i=1; i<=5; i++)
    {
    	cout << "Registro numero "<< i  << endl;
        cout << "Dame el nombre  "  << endl;
        cin >> persona[i].referencia;
        
		cout<<"Dime su apellido: "<< i <<endl;
        cin >> persona[i].titulo;

        cout<<"Dime su edad: "    <<endl;
        cin >> persona[i].edad;
       
	    cout<<"Dime su sexo: "    <<endl;
        cin >> persona[i].editorial;

        cout<<"Dime su telefono: "    <<endl;
        cin >> persona[i].ano; 
		 
        
        
     	}
 
    
	for (int i=1; i<=a; i++)
    {    
 	cout << "Registro numero: "<< i  << endl;
  cout << "\nNombre:  " <<persona[i].referencia<<endl;
        
		cout<<"Apellido:  "<< persona[i].titulo<<endl;

        cout<<"Edad: "<< persona[i].edad<<endl;
       
	    cout<<"Sexo:  "<< persona[i].editorial<<endl;

        cout<<"Sexo: "<< persona[i].ano<<endl;

}

	system("pause");
	return 0;
}
