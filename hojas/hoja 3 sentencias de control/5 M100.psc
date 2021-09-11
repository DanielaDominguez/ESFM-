Algoritmo Mayor100
	Definir N Como Entero;
	Definir V Como Real;
	
	Escribir "Número mayor que cien";
	Escribir "";
	
	Escribir "Ingese N números a evaluar con respecto a 100: ";
	Leer N;
	
	Para i<-1 Hasta N Con Paso 1 Hacer
		Escribir "";
		Escribir "N", i, ":";
		Leer V;
		
		Si V=100 Entonces
			Escribir "";
			Escribir "El valor es 100.";
			
		SiNo
			
		Si V>100 Entonces
			Escribir "";
			Escribir V, " es mayor que 100.";
		SiNo
			Escribir "";
			Escribir V, " es menor que 100.";
			
		FinSi
		
		FinSi
	
	Fin Para
	
	
	
Escribir "";	
FinAlgoritmo
