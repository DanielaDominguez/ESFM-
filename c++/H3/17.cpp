#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i;
	cout<<"Los multiplos del dos son:"<<endl;
	for(i=2;i<=100;i+=2){
		cout<<i<<endl;
	}
	cout<<"\nLos multiplos del 3 son:\n"<<endl;
	
	for(i=3;i<=100;i+=3){
		cout<<i<<endl;
		
	}
	getch();
	return 0;
}
