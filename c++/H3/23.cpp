#include<iostream>
#include<conio.h>

using namespace std;

void intercambiar(float&, float&);

int main(){
	
	float NUM1=968.36,NUM2=589.2365;
	cout<<"El valor de la variable 1 es: "<<NUM1<<endl;
	cout<<"\nEl valor de la variable 2 es: "<<NUM2<<endl;
	intercambiar(NUM1,NUM2);
	cout<<"\nEl nuevo valor de la variable 1 es:"<<NUM1<<endl;
	cout<<"\nEl nuevo valor de la variable 2 es:"<<NUM2<<endl;
	getch();
	return 0;
}
void intercambiar(float& NUM1,float& NUM2){
	
	float aux;
	aux=NUM1;
	NUM1=NUM2;
	NUM2=aux;
}



