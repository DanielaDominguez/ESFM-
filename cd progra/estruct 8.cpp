//estruct 8
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

	float a,b,suma,suma1,suma2,suma3,suma4,suma5; 
int main()
{
    struct datosPersona
	{
        string titulo,longitud,precio,fecha,clasificacion;
    };
    datosPersona *persona = new datosPersona[50];
        cout<<"Cuantas cintas se han grabado? "<<endl;
        cin>>a;
    for (int i=1; i<=a; i++){
        cout<<"Dime su titulo  "<<endl;
        cin>>persona[i].titulo;
        cout<<"Dime su Longitud   "<<endl;
        cin>>persona[i].longitud;
		cout<<"Dime el precio del alquiler  "<<endl;
        cin>>persona[i].precio;
		cout<<"Dame la fecha en que se vendio  "<<endl;
        cin>>persona[i].fecha;       
        cout<<"Dime su clasificacion  "<<endl;
        cin>>persona[i].clasificacion;
    }
     for (int i=1; i<=a; i++){
        cout<<"\nTitulo  "<<persona[i].titulo<<endl;
        cout<<"\nLongitud   "<<persona[i].longitud<<endl;
		cout<<"\nPrecio de Alquiler  "<<persona[i].precio<<endl;
		cout<<"\nFecha en que se vendio  "<<persona[i].fecha<<endl;       
        cout<<"\nClasificacion  "<<persona[i].clasificacion<<endl;
    }

	system("pause");
	return 0;
}
