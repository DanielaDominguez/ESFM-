#include<stdio.h>
using namespace std;
int main()
{
   int contador;
   int suma=0;
   for(contador=1;contador<=100;contador++)
    {
	   printf("\n%d",contador);
	   suma=suma+contador;
	}
printf("La suma es %d",suma);
}
