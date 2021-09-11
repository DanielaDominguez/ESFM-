#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int pie;
	float pulg,a;
	cout<<"Convierte cm en inch con presicion de 1 decimal y ft"<<endl;
	cout<<"Ingrese los cm a convertir"<<endl;
	cin>>a;
	pie=a*0.032808399;
	pulg=a*0.3937;
	
	cout<<"La conversion de cm a ft es: "<<pie<<endl;
	cout<<fixed;
	cout<<"La conversion de cm a in es: "<<setprecision(1)<<pulg<<endl;
	getch();
	return 0;
	
}
