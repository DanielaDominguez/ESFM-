//calculadora de funciones
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin
double Sumar(double,double);
double Restar(double,double);
double Multiplicar(double,double);
double Dividir(double,double);
int Factorial(int);

int main(){
    cout << " Calculadora " << endl;
    double n1;
    cout << "Introduzca el primer valor: ";
    cin >> n1;
    double n2;
    cout << "Introduzca el segundo valor: ";
    cin >> n2;
    int operador;
    cout << "Sumar (1) \nRestar (2) \nMultiplicar (3) \nDividir (4)  \nFactorial (5):  ";
    cin >> operador;
    
    switch(operador)
    {
        case 1:
            cout << "\n";
            cout << " "<< Sumar(n1,n2) << " "<< endl;
            cout << "\n";
        break;
        case 2:
            cout << "\n";
            cout << " " << Restar(n1,n2) << " " << endl;
            cout << "\n";
        break;
        case 3:
            cout << "\n";
            cout << " " << Multiplicar(n1,n2) << " " << endl;
            cout << "\n";
        break;
        case 4:
            cout << "\n";
            cout << " " << Dividir(n1,n2) << " " << endl;
            cout << "\n";
        break;
        case 5:
            cout << "\n";
            cout << " " << Factorial (n1) << " " << endl;
            cout << "\n";
        break;
    }
    system("pause");
    return 0;
}

double Sumar(double x,double y){
    return x + y;
}

double Restar(double x,double y){
    return x - y;
}

double Multiplicar(double x,double y){
    return x * y;
}

double Dividir(double x,double y){
    return x / y;
}

int Factorial (int n){
int f=1;
	for (int i=n; i>=1; i--){
		f = f*i;
	}
	return f;
}
	system("pause");
	return 0;
}
