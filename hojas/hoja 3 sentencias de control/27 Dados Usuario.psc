Algoritmo Cuadrado
	Escribir "";
	Escribir "Suma de los cuadrados de los primeros cien n�meros";
	Escribir "";
	
	Escribir "Ingrese cu�ntos n�meros va a considerar (Arriba de cien): ";
	Leer N;
	Escribir "";
	
	Mientras N<100 Hacer
		Escribir "";
		Escribir "Error. Ingrese un n�mero mayor que cien: ";
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
	Escribir "  de los primeros 100 d�gitos, sin considerar las dem�s lecturas:  ", ST;
	
	Escribir "";	
FinAlgoritmo

