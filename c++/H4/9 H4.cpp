
#include <stdio.h>
 
char primeraLetra(char n[10])
{
    printf("Introduce una palabra");
    gets(n);
    return n[0];
}
 
int main()
{
	string letra;
    char letra[10], palabra[10];
    
    letra = primeraLetra(palabra);
    printf("La primera letra de la palabra es \"%s\"", letra);
    
    getchar();
    printf("Pulse Intro para cerrar el programa");
    getchar();
}
 
