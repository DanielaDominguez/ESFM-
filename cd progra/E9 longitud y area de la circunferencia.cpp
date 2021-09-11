//9.un programa que calcule la longitud y el área de una circunferencia, capturando el valor del radio.
/*longitud de la circunferencia = 2 * PI * radio*/
/*área de la circunferencia = PI * radio2*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float pi=3.1416,AC,LC,r;
    cout<<"calcularemos el area y longitud de una circunferencia"<<endl;
    cout<<"ingrese el radio: "<<endl;
    cin>>r;
    LC=r*2*pi;
    AC=pow(r,2)*pi;
    cout<<"la longitud de la circunferencia es: "<<LC<<" y el area de la circunferencia es: "<<AC<<endl;
    system("pause");
    return 0;
}
