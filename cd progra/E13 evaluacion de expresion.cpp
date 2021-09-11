//13. Escribir un programa que evalúe la siguiente expresión:
/*(a+5) * 3 / 2 * b - b*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int resultado,a,b;
    cout<<"evaluemos la siguiente expresion (a+5)*3/2*b-b con datos cualesquiera "<<endl;
    cout<<"ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"ingrese el valor de b: "<<endl;
    cin>>b;
    resultado=(a+5)*3/2*b-b;
    cout<<"el resultado de la expresion es: "<<resultado<<endl;
    system("pause");
    return 0;
}
