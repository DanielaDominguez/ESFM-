//11. Programa que calcule el volumen de una esfera de radio = r 
/*volumen de la esfera= 4/3 * PI * radio3*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float pi=3.1416,v,r;
    cout<<"Calcularemos el volumen de una espera de radio cualquiera"<<endl;
    cout<<"introduce los datos"<<endl;
    cout<<"introduce el radio: "<<endl;
    cin>>r;
    v=(pow(r,3)*pi*4)/3;
    cout<<"el volumen de la espera es: "<<v<<endl;
    system("pause");
    return 0;
}
