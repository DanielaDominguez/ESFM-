Algoritmo TS
	Definir C, i Como Entero;
	Definir V1, V2, V3 Como Real;
	
	Escribir "Uso de tres números";
	Escribir "";
	
	Escribir "Ingrese las evaluaciones con tres números a realizar: ";
	Leer C;
	
		Para i<-1 Hasta C Con Paso 1 Hacer
			
			Escribir "";
			Escribir "-----------------------";
			Escribir "Comparación "
			
		Escribir "";
		Escribir "N1:";
		Leer V1;
		
		Escribir "";
		Escribir "N2:";
		Leer V2;
		
		Escribir "";
		Escribir "N3:";
		Leer V3;
		
		Si V3=V1+V2 Entonces
			Escribir "";
			Escribir V3, " es igual a la suma de ", V1, " y ", V2, ".";
			
		SiNo
			Escribir "";
			Escribir V3, " no es igual a la suma de ", V1, " y ", V2, ".";
		FinSi
		
	Fin Para
	
Escribir "";	
FinAlgoritmo
