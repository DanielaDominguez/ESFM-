//estruct 15
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
        float precio,codigo,venta;
        string mes,mes1,ano,ano1,dia1,dia,titulo;
    };

    datosPersona *persona = new datosPersona[50];
    string resp;
    resp == "libro";
    
    for (int i=1; i<=1; i++)
    {
    	cout << "Registro De fechas"  << endl; 
		cout<<"Dime La fecha de hoy: " <<endl;
        cout<<"Ingresa el dia: "    <<endl;
        cin >> persona[i].dia;
	    cout<<"Ingresa el mes: "    <<endl;
        cin >> persona[i].mes;
        cout<<"\Ingresa el ano: "    <<endl;
        cin >> persona[i].ano;
		cout<<"Dime el dia de tu cumpleaños: " <<endl;
        cin >> persona[i].dia1;
        cout<<"Dime el mes de tu cumpleaños"<<endl;
        cin >> persona[i].mes1;
        cout<<"Dime el ano en que naciste"<<endl;
        cin >> persona[i].ano1;
	}
 
	for (int i=1; i<=1; i++)
    {
    	cout << "Registro de fecha: " << endl;
		cout<<"Nombre:  "<< persona[i].titulo<<endl;
        cout<<"Dia: "<< persona[i].dia<<endl;
	    cout<<"Mes:  "<< persona[i].mes<<endl;
	    cout<<"ano:  "<< persona[i].ano<<endl;
		cout << "\nRegistro de cumpleaños: " << endl;
		cout<<"Dia:  "<< persona[i].dia1<<endl;
	    cout<<"Mes:  "<< persona[i].mes1<<endl;
	    cout<<"ano:  "<< persona[i].ano1<<endl;
	    
		if (persona[i].dia1==persona[i].dia &&  persona[i].mes1==  persona[i].mes)
		{
			cout<<"!Felicidades es tu cumpleanos !!!"<<endl;
		}
		else
		{
			cout<<"No es tu cumpleanos. "<<endl;
		}
	}

	system("pause");
	return 0;
}
