#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int par;
	cout<<"Programa que imprima los numeros pares del 1 al 100"<<endl;
	
	for(par=1;par<=100;par++){
		if(par%2==0){
			cout<<par<<endl;
		}
	}
	getch();
	return 0;
}
