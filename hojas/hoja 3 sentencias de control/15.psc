Algoritmo N_Anteriores
	Definir N, i, S Como Entero;
	
	
	Escribir "";
	Escribir "Suma de los n�meros naturales que anteceden a N";
	
	Escribir "";
	Escribir "Defina el l�mite hasta donde se va a considerar la suma: ";
	Leer N
	
	Mientras N<1 Hacer
		Escribir "";
		Escribir "Error. No hay n�meros anteriores y naturales a �se";
		Escribir "pruebe con mayores que 1";
		Leer N;
	FinMientras
	
	Escribir "";
	Escribir "Suma de d�gitos enteros: ";
	Escribir "";
	S<-0;
	Para i<-1 Hasta N-1 Con Paso 1 Hacer
		Z<-3
		
		Escribir "N:", i;
		
		Mientras i<(N-1) Y Z=3 Hacer
			
			Escribir "  +";
			Z=40;
		FinMientras
		
		S<-S+i;
	Fin Para
	
	Escribir "";
	Escribir "La suma de los d�gitos naturales anteriores a ", N, " es: ", S;
	
Escribir "";	
FinAlgoritmo
