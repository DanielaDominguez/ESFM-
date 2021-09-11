#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int tabla,i;
	cout<<"Ingrese la tabla del numero que quiere ver"<<endl;
	cin>>tabla;	
	if(tabla>=0 and tabla<=10){
		cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;	
		for(i=1;i<=10;i++){
		cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
	}
	}
	else{
		cout<<"El numero "<<tabla<<" no se encuentra en el intervalo de 0 a 10"<<endl;
	}
	
	getch();
	return 0;
}
