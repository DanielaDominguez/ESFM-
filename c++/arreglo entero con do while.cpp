//
/*Librerias*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

using namespace std;  //este renglon nos permite poder usar el cout y el cin

int main ()
{

	system("pause");
	return 0;
}

#include <stdio.h>
#define DIM 4
    
    int main() 
    {   
        //Declaración de variables
        int numero; 
        int vector[DIM];
        int unidades=0, decenas=0, centenas=0, millar=0;
        int temporal=0; 
        int i=0; 
     
        //Petición del numero
        do
        {
          printf("Introduce un numero:");
          scanf("%d", &numero);
          if(numero > 9999) 
           printf("El numero no es valido\n");
        }while(numero>9999);
     
        /*Dividimos el número en unidades, decenas centenas y unidades de millar
        en el caso de este programa como mucho trabajamos con números de 4 cifras*/
        unidades = numero %10;
        temporal = numero /10; 
     
        decenas= temporal %10;
        temporal = temporal /10;
     
        centenas= temporal%10;
        millar = temporal /10;
     
        //Asignamos a cada posición del vector una cifra del numero 
        vector[0]= millar; 
        vector[1]= centenas; 
        vector[2]= decenas; 
        vector[3]= unidades;
     
        //Imprimimos el vector
        printf("Vector");
        for(i=0; i<4; i++)
          printf(" %d", vector[i]);
getch(); 
return 0; 
}
 
