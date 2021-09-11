#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){

	int n=3,vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0,i;
	char frase[n];
	cout<<""<<endl;
	for(i=1;i<=n;i++){
		cout<<"Ingrese una frase "<<i<<endl;
		cin>>frase[i];
	}
	
	for(i=1;i<=n;i++){
		switch(frase[i]){
			case 'a':vocal_a++;
			 break;
			 
			case 'e':vocal_e++;
			break;
			
			case 'i': vocal_i++;
			break;
			
			case 'o': vocal_o++;
			break;
			
			case 'u': vocal_u++;
			break; 
		}
	}
	cout<<""<<endl;
	cout<<"El vocal a fue ingresada "<<vocal_a<<" veces"<<endl;
	cout<<"El vocal e fue ingresada "<<vocal_e<<" veces"<<endl;
	cout<<"El vocal i fue ingresada "<<vocal_i<<" veces"<<endl;
	cout<<"El vocal o fue ingresada "<<vocal_o<<" veces"<<endl;
	cout<<"El vocal u fue ingresada "<<vocal_u<<" veces"<<endl;
	getch();
	return 0;
}
