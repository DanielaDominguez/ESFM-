Algoritmo N_Anteriores
	Definir N, i, S Como Entero;
	
	
	Escribir "";
	Escribir "Suma de los números naturales que anteceden a N";
	
	Escribir "";
	Escribir "Defina el límite hasta donde se va a considerar la suma: ";
	Leer N
	
	Mientras N<1 Hacer
		Escribir "";
		Escribir "Error. No hay números anteriores y naturales a ése";
		Escribir "pruebe con mayores que 1";
		Leer N;
	FinMientras
	
	Escribir "";
	Escribir "Suma de dígitos enteros: ";
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
	Escribir "La suma de los dígitos naturales anteriores a ", N, " es: ", S;
	
Escribir "";	
FinAlgoritmo
