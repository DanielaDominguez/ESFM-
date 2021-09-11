Algoritmo Cuadrado
	Escribir "";
	Escribir "Suma de los cuadrados de los primeros cien números";
	Escribir "";
	
	ST<-0;
	
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		
		Escribir "";
		Escribir "N ", i;
		Escribir "Cuadrado:       ", i^2;
		Escribir "";
		
		Si i<100 Entonces
			Escribir "                +";
		FinSi
		
		NC<-i^2;
		ST<-ST+NC;
	Fin Para
	
	Escribir "";
	Escribir "Resultado: ", ST;
	
Escribir "";	
FinAlgoritmo
