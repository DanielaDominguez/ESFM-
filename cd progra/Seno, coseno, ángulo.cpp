//Seno y coseno. 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int a, b = 0;
	float aa=0, x, ang, pi = 3.14159;
	char d;
	
	do{
		do{
		
		cout<<"Seleccione la opcion de la operacion que quiere realizar\n\t";
		cout<<"(1)\tIngresar angulo y calcular seno y coseno\n\t(2)\tIngresar seno y calcular el angulo\n\t(3)\tIngresar coseno y calcular el angulo\n\t(4)\tIngresar la tangente y calcular el angulo\n\t"<<endl;
		cout<<"\t "; cin>>a;
		system("cls");
		
		switch(a){
			case 1:
				cout<<"Introduzca el valor del angulo:\n\t";
				cin>>x;
				ang = (x*M_PI)/180;
				cout<<"\nEl seno de "<<x<<" grados es "<<sin(ang)<<".";
				cout<<"\nEl coseno de "<<x<<" grados es "<<cos(ang)<<".";
				cout<<"\nLa tangente de "<<x<<" grados es "<<tan(ang)<<".";
				aa=1;
				getch();				
				break;
			case 2:
				cout<<"Introduzca el valor del seno:\n\t";
				cin>>x;
				x = asin(x);
				ang = (x*180)/M_PI;
				cout<<"\nEl valor del angulo es "<<ang<<".";
				aa=1;
				getch();
				break;
			case 3:
				cout<<"Introduzca el valor del coseno:\n\t";
				cin>>x;
				x = acos(x);
				ang = (x*180)/pi;
				cout<<"\nEl valor del angulo es "<<ang<<".";
				aa=1;
				getch();
				break;
			case 4:
				cout<<"Introduzca el valor de la tangente:\n\t";
				cin>>x;
				x = atan(x);
				ang = (x*180)/pi;
				cout<<"\nEl valor del angulo es "<<ang<<".";
				aa=1;
				getch();
				break;
			default: cout<<"Valor no reconocido"<<endl;
				getch();
				system("cls");
			}
		}while(aa==0);
		do{
			cout<<"\n\nDesea realizar otra operacion? (S/N)"; cout<<"\n\t"; cin>>d;
			if(d=='N'||d=='n'){
				aa = 1;
				b = 1;
			}
			else{
				if(d=='S'||d=='s'){
				aa = 0;
				b = 1;
				system("cls");
			}
			else{
				cout<<"Valor no reconocido"<<endl;	
				b = 0;
			}
			}
				
		}while(b==0);
	}while(aa==0);
	
	system("cls");
	cout<<"\nPrograma terminado!"<<endl;
		
	getch();
	return 0;
}
