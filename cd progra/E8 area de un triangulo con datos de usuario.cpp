//8.Escribir un programa que calcule el área de un triángulo, capturando los valores de base y altura, área del triángulo = (base * altura)/2
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int area,base,altura;
    cout<<"calculemos el area de un triangulo"<<endl;
    cout<<"ingrese la medida de la base"<<endl;
    cin>>base;
    cout<<"ingrese la altura"<<endl;
    cin>>altura;
    area=(base*altura)/2;
    cout<<"el area del triangulo es: "<<area<<endl;
    system("pause");
    return 0;
}
