//16. programa que calcule la hipotenusa de un triángulo rectángulo.
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float ca,co,h;
    cout<<"calcularemos la hipotenusa de un triangulo rectangulo sabiendo sus catetos"<<endl;
    cout<<"medida del cateto adyacente: "<<endl;
    cin>>ca;
    cout<<"medida del cateto opuesto: "<<endl;
    cin>>co;
    h=sqrt(pow(ca,2)+pow(co,2));
    cout<<"el valor de la hipotenusa es: "<<h<<endl;
    system("pause");
    return 0;
}
