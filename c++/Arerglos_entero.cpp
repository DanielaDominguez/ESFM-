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
    int i,b,n;
    
    cout<<"Proporcione el numero de datos a almacenar en el arreglo maximo 10"<<endl;
    cin>>n;
 
 // un ciclo for para llenar el vector
 
    for (i=0;i<n;i++) {
    	
    	 cout<<"Proporcione el valor a["<<i<<"]= ";
        cin>>b;
		
		a[i]=b;
        
        
        
    }// un ciclo for para imprimir el contenido del vector
 
    for (i=0;i<n;i++) {
        cout<<"El valor almacenado en es a["<<i<<"]= "<<a[i]<<endl;
    }//aumento de posición del índice del arreglo.
    
 
 system("pause");
 return 0;
}
