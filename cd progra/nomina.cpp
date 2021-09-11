//nomina
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin
struct Empleado {
	char nombre [20];
	float salario;
} emp[100];
int main (){
	int n_empleados, posM=0, posm=0;
	float mayor=0, menor=999999;
	cout<<"Digite el numero de empleados: "<<endl;
	cin>>n_empleados;
	for (int i=0; i<n_empleados; i++){
		cout<<"Digite su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<". Digite su salario: ";
		cin>>emp[i].salario;
		
		if (emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		if (emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
		cout<<"\n";
	}
	cout<<"\nLos datos del empleado con mayor salario: "<<endl;
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"\nLos datos del empleado con menor salario: "<<endl;
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	getch ();
	return 0;
}

	system("pause");
	return 0;
}
