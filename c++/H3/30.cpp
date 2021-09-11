#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int tabla,i;
	cout<<"Ingrese la tabla del numero que quiere ver"<<endl;
	cin>>tabla;	
	switch(tabla){
		case 0:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;	
		for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 1:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;	
		for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 2: cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
		for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 3: cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
		for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 4:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 5:	cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
		for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 6:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 7:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 8:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 9:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		case 10:cout<<"\nLa tabla del numero "<<tabla<<" es:\n"<<endl;
			for(i=1;i<=10;i++){
			cout<<tabla<<"x"<<i<<"="<<tabla*i<<endl;
		}
		break;
		default: cout<<"El numero ingresado no esta en el intervalo 0 a 10"<<endl;
		break;
	}
	getch();
	return 0;
}
