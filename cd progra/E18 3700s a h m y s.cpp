//18. programa que calcule el número de horas, minutos y segundos que hay en 3700 segundos.
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
const double t=3700;
int main(int arge,char *argv[])
{
    float h,m,s;
    cout<<"¿Cuantas horas, minutos y segundos hay en 3700 segundos?"<<endl;
    h=t/3600;
    m=t/60;
    s=t;
    cout<<"3700 segundos tiene: "<<h<<" horas, "<<m<<" minutos y "<<s<<" segundos"<<endl;
    system("pause");
    return 0;
}
