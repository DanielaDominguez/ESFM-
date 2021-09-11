//10. Escribir un programa que calcule la velocidad de un proyectil que recorre x Km en t minutos. Expresar el resultado en metros/segundo.
/*Velocidad = espacio/tiempo*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float km,min,v,m,s;
    cout<<"Calcularemos la velocidad de un proyectil que recorre una velocidad=km/min, expresando el resultado en m/s"<<endl;
    cout<<"ingrese los datos siguientes: "<<endl;
    cout<<"¿cuantos kilometros recorre el proyectil?: "<<endl;
    cin>>km;
    cout<<"¿en cuantos minutos?: "<<endl;
    cin>>min;
    m=km*1000;
    s=min*60;
    v=m/s;
    cout<<"la velocidad del proyectil es de: "<<v<<" m/s"<<endl;
    system("pause");
    return 0;
}
