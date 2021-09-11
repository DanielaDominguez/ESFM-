#include<iostream>
using namespace std;
float volt(float x);
int main()
{ float x;  
cout<<"Vamos a calcular el voltaje de tres bombillos en kilovoltio, considerando que el bombillo trabaja con 120V"<<endl;
cout<<"\n El voltaje de los tres bombillos es: "<<volt(x)<<endl; 
return 0; }

float volt(float x){ 
float kv = 1000,bombillo = 120; 
x = (3 * bombillo) / kv; 
return x; } 

