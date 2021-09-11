//4. Programa que sume, reste, multiplique y divida dos números: x = 10 y = 2.
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int y,x,s,r,m,d;
    x=10;
    y=2;
    cout <<"sume, reste, multiplique y divida dos números dados x=10 y y=2"<<endl;
    s=x+y;
    r=x-y;
    m=x*y;
    d=x/y;
    cout<<"La suma es: "<<s<<" La resta es: "<<r<<" La multiplicacion es: "<<m<<" La division es: "<<d<<endl;
    system("pause");
    return 0;
}
