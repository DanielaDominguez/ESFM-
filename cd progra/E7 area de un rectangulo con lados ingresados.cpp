//7. programa que calcule el �rea de un rect�ngulo de lado1 y lado2 ingresados por el usuario. �rea del rect�ngulo=lado1 * lado2
/*Librerias*/
#include <iostream>                        
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int A,lado1,lado2;
    cout<<"ingresa la medida de cada lado"<<endl;
    cin>>lado1;
    cin>>lado2;
    A=lado1*lado2;
    cout<<"El area del rectangulo es. "<<A<<endl;
    system("pause");
    return 0;
}
