#include<iostream>
#include<iostream>
using namespace std;
double A,B,b,h;
int main()
{
    cout<<"Calculemos el area de un trapecio"<<endl;
    cout<<"ingresa la base mayor"<<endl;
    cin>>B;
    cout<<"Ingresa la base menor"<<endl;
    cin>>b;
    cout<<"Ingresa la altura del trapecio"<<endl;
    cin>>h;
    A=(B+b)*h/2;
    cout<<"El area del trapecio es: "<<A;
}
