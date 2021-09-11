Algoritmo Importe
	Definir IM,IN Como Real;
	
	Escribir "Importe Bruto y Neto";
	Escribir "";
	
	Escribir "Ingrese el importe bruto: ";
	Leer IM;
	
	Mientras IM<=0 Hacer
		Escribir "";
		Escribir "Error. Ingrese un valor positivo: ";
		Leer IM;
	FinMientras
	
	Si IM>15000 Entonces
		IN<-IM*(1+0.16);
	SiNo
		IN<-IM*(1+0.1);
	FinSi
	
	Escribir "";
	Escribir "Importe Neto: $",IN;
	
Escribir "";	
FinAlgoritmo
