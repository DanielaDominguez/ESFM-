//Muestra dia de la semana con swith

/*LIberias */

#include <iostream>                           
#include <stdio.h>      
#include <math.h>          
#include <stdlib.h>    
#include <conio.h>
#include <dos.h>                        

using namespace std;       
 
	
     int main()
{
	
	int a[10];// forma un arreglo de tamaño 10
	float b[10];// forma un arreglo de tamaño 10
	char c[10];// forma un arreglo de tamaño 10
    int i,n;
    
	int e;
    float f;
	char g;
    
    cout<<"Proporcione el numero de datos a almacenar en el arreglo maximo 10"<<endl;
    cin>>n;
 
 // un ciclo for para llenar el vector
 
    for (i=0;i<n;i++) {
    	
    	 cout<<"Proporcione el valor entero a["<<i<<"]= ";
        cin>>e;
		a[i]=e;
        
        cout<<"Proporcione el valor flotante b["<<i<<"]= ";
        cin>>f;
		b[i]=f;
        
        
        cout<<"Proporcione el valor caracter c["<<i<<"]= ";
        cin>>g;
		c[i]=g;
        
        
    }// un ciclo for para imprimir el contenido del vector
 
    for (i=0;i<n;i++) {
        cout<<"El valor entero almacenado en es a["<<i<<"]= "<<a[i]<<endl;
    }//aumento de posición del índice del arreglo.
    
    
    
    for (i=0;i<n;i++) {
        cout<<"El valor flotante almacenado en es b["<<i<<"]= "<<b[i]<<endl;
    }//aumento de posición del índice del arreglo.
    
    
    
    for (i=0;i<n;i++) {
        cout<<"El valor caracter almacenado en es c["<<i<<"]= "<<c[i]<<endl;
    }//aumento de posición del índice del arreglo.
    
        
    
 
 system("pause");
 return 0;
}
