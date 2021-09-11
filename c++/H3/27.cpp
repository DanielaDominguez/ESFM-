#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	float ladom,ladom1,ladoM,aux,aux1,aux2,aux3,aux4,aux5;
	cout<<"Ingrese la dimension del primer lado menor\n";
	cin>>ladom;
	cout<<"\nIngrese la dimension del segundo lado menor\n";
	cin>>ladom1;
	cout<<"\nIngrese la dimension del lado mayor\n";
	cin>>ladoM;
	aux=ladom+ladom1;
	aux1=ladom/ladom1;
	aux2=pow(ladoM,2);
	aux3=pow(ladom,2);
	aux4;pow(ladom1,2);
	aux5=aux3+aux4;
		if(ladoM==aux/2){
			cout<<"EL triangulo seria un triangulo equilatero";
		}
		else if(ladom==ladom1){
			cout<<"Es un triangulo isosceles";
		}
		else if(ladom!=ladom1){
			cout<<"EL triangulo es escaleno";
		}
		getch();
		return 0;
	}


