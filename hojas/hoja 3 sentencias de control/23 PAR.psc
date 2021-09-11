Algoritmo Impares
	Definir i, S, Z, C Como Entero;
	
	Escribir "Suma de los pares que van del 1 al 100";
	Escribir "";
	
	S<-0;
	C<-0;
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		
		Z=3;
		Si i/2=trunc(i/2) Entonces
			
			C<-C+1;
			Escribir i;
			
			Mientras i<99 Y Z=3 Hacer
				Escribir "";
				Escribir "+";
				Escribir "";
				Z=40;
			FinMientras
			
			
			S<-S+i;
			
		FinSi
		
	Fin Para
	
	Escribir "";
	Escribir "";
	Escribir "La suma de los pares entre 1 hasta 100 es: ", S;
	Escribir "";
	Escribir "Los números pares que hay son: ", C;
	
	
	Escribir "";
FinAlgoritmo
