//5. Programa que sume, reste, multiplique y divida dos números leídos desde el teclado
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,s,r,m,d;
    cout<<"Introduzca dos numeros"<<endl;
    cin>>a;
    cin>>b;
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    cout<<"la suma es: "<<s<<"la resta es: "<<r<<"la multiplicacion es: "<<m<<"la division es: "<<d<<endl;
    system("pause");
    return 0;
}
