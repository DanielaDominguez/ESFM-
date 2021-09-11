//estruct 1
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
	suma=0;

    struct datosProducto
    {
        string nombre;
        float precio,codigo,venta;
    };

    new datosProducto[50]=datosProducto*producto;

    for (int i=1; i<=10; i++)
    {
        cout<<"Registra el nombre del producto "<<i<<endl;
        cin>>producto[i].nombre;
        
		cout<<"Registra el precio "<<endl;
        cin>>producto[i].precio;

        cout<<"Registra el codigo "<<endl;
        cin>>producto[i].codigo;

        cout<<"Cuanto se vendieron durante este periodo "<<endl;
        cin>>producto[i].venta;
        
        suma+=producto[i].precio*producto[i].venta;
	}
	cout<<"\nEl total de ganancias es de: "<<suma<<endl;

	system("pause");
	return 0;
}
