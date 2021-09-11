 #include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int dia_numero,i;
	cout<<"Dias de la semana"<<endl;
	
	while(i==1){
		cout<<"Ingrese el numero"<<endl;
		cin>>dia_numero;
		switch(dia_numero){
			case 1: cout<<"El dia es: Lunes"<<endl;;
			break;
			case 2:cout<<"El dia es: Martes"<<endl;;
			break;
			case 3: cout<<"El dia es: Miercoles"<<endl;
			break;
			case 4: cout<<"El dia es: Jueves"<<endl;
			break;
			case 5: cout<<"El dia es: Viernes"<<endl;
			break;
			case 6: cout<<"El dia es: Sabado"<<endl;
			break;
			case 7: cout<<"El dia es: Domingo"<<endl;
			break; 
			default: cout<<"El numero no corresponde a ningun dia de la semana"<<endl;
		}
		cout<<"Desea continuar ingresando numeros 1)Si  2)No"<<endl;
		cin>>i;
		
	}
	getch();
	return 0;
}
