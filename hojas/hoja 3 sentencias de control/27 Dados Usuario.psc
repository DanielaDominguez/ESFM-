Algoritmo Cuadrado
	Escribir "";
	Escribir "Suma de los cuadrados de los primeros cien números";
	Escribir "";
	
	Escribir "Ingrese cuántos números va a considerar (Arriba de cien): ";
	Leer N;
	Escribir "";
	
	Mientras N<100 Hacer
		Escribir "";
		Escribir "Error. Ingrese un número mayor que cien: ";
		Leer N;
		Escribir "";
	FinMientras
	
	ST<-0;
	Para i<-1 Hasta N Con Paso 1 Hacer
		
		Escribir "N", i;
		Leer V;
		Escribir "";
		Escribir "Cuadrado: ", V^2;
		Escribir "";
		
		Si i<100 Entonces
			Escribir "          +";
		FinSi
		
		Si i<=100 Entonces
		
		NC<-V^2;
		ST<-ST+NC;
		
		FinSi
		
		
	Fin Para
	
	Escribir "";
	Escribir "Resultado de la suma de los cuadrados";
	Escribir "  de los primeros 100 dígitos, sin considerar las demás lecturas:  ", ST;
	
	Escribir "";	
FinAlgoritmo

