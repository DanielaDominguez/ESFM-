Algoritmo Media
	Definir i Como Entero
	Definir S,N Como Real;
	
	Escribir "La media de cien números";
	Escribir "";
	
	Escribir "Ingrese cien números para calcular su media: ";
	Escribir "";
	
	S<-0;
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		
		Escribir "";
		Escribir "N",i,":";
		Leer N;
		
		Mientras N<0 Hacer
			Escribir "Error. Ingrese un número natural: ";
			Leer N;
		FinMientras
		
		S<-S+N;
	Fin Para
	
	M<-S/100;
	
	Escribir "";
	Escribir "----------------------------------------";
	Escribir "La suma de los cien dígitos es: ", S;
	Escribir "";
	Escribir "La media de los cien dígitos es: ",M;
	Escribir "----------------------------------------";
	
Escribir "";	
FinAlgoritmo
