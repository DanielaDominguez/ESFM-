#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
        int impares,impar=0;

        for(impares=0;impares<100;impares++)
        {
                if(impares%2!=0)
                {
                cout<<impares<<endl;
                impar = impar + 1;
                }
        }
        cout<<"Los numeros impares de 1 al 100 son "<<impar;
        getch();
        return 0;
}
