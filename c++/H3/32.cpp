#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num,i,s,g,a[100],b[100],y=0,z=0;
	cout<<"Ingrese el numero de trabajadores"<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++){
		cout<<"Ingrese el sexo del trabajador 1)Femenimo   2)Masculino "<<i<<endl;
		cin>>a[s];
		cout<<"Ingrese su sueldo"<<endl;
		cin>>b[g];
		if(a[s]==1 and b[g]>=500){
			y++;
		}
		else if(a[s]==2 and b[g]<=400){
			z++;
		}
	}
	cout<<"El numero de mujeres que ganan mas de $500 son: "<<y<<" mujer(es)"<<endl;
	cout<<"El numero de hombres que ganan menos de $400 son: "<<z<<" hombre(s)"<<endl;
	getch();
	return 0;
}

