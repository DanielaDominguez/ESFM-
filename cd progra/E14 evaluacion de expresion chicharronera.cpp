//14. programa que evalúe la siguiente expresión:
/*(-b + raíz cuadrada(b2-4*a*c)/(2*a)*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int resultado,a,b,c;
    cout<<"evaluemos la siguiente expresion (-b+raíz cuadrada(b2-4*a*c)/(2*a) con datos cualesquiera "<<endl;
    cout<<"ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"ingrese el valor de c: "<<endl;
    cin>>c;
    resultado=(-b+sqrt(b*b)-4*a*c)/(2*a);
    cout<<"el resultado de la expresion es: "<<resultado<<endl;
    system("pause");
    return 0;
}
