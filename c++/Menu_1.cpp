//Muestra dia de la semana con swith

/*LIberias */

#include <iostream>                           
#include <stdio.h>      
#include <math.h>          
#include <stdlib.h>    
#include <conio.h>
#include <dos.h>                        

using namespace std;       
  //   	int dia;
//	char salir;
	
     int main()
{
	
	int dia;
	char salir;
	
	do 
	{
		

 cout<<"Ingrese el numero de dia de la semana:\n ";
 cin>>dia;

 cout<<"\n Es el dia  : \n";

 switch(dia)
 {
  case 1:cout<<"\t Lunes";
         break;
  case 2:cout<<"\t Martes";
         break;
  case 3:cout<<"\t Miercoles";
         break;
  case 4:cout<<"\t Jueves";
         break;
    case 5:cout<<"\t Viernes";
         break;
  case 6:cout<<"\t Sabado";
         break;
  case 7:cout<<"\t Domingo";
         break;	
		
		
	}
	
	cout<<"\n Desea salir del programa (s/n)?: ";
	cin>>salir;
 
 }while((salir != 's') && (salir != 'S'));
 
 
 //while((salir != 'n') && (salir != 'N'));
 //while((salir != 's') || (salir != 'S'));  //&&
 
 
 
 system("pause");
 return 0;
}
