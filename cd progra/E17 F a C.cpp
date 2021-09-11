//17. Programa que calcula el equivalente en grados fahrenheit o Celsius de una temperatura t. sabiendo que C/5=(F-32)/9
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double F,C,t;
    cout<<"Hayaremos la equivalencia entre °F y °C de una temperatura t"<<endl;
    cout<<"ingrese la temperatura: "<<endl;
    cin>>t;
    C=(t-32)*5/9;
    F=(t+32)*9/5;
    cout<<"La temperatura ingresada: "<<t<<" equivale a: "<<C<<" °C"<<endl;
    cout<<"La temperatura ingresada: "<<t<<" equivale a: "<<F<<" °F"<<endl;
    system("pause");
    return 0;
}
