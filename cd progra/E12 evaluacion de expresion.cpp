//12. Escribir un programa que evalúe la siguiente expresión:
/*(a+7*c)/(b+2-a)+2*b*/
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int resultado,a,b,c;
    cout<<"evaluemos la siguiente expresion (a+7*c)/(b+2-a)+2*b con datos cualesquiera "<<endl;
    cout<<"ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"ingrese el valor de c: "<<endl;
    cin>>c;
    resultado=(a+7*c)/(b+2-a)+2*b;
    cout<<"el resultado de la expresion es: "<<resultado<<endl;
    system("pause");
    return 0;
}
