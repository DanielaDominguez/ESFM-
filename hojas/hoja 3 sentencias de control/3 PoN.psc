Algoritmo PON
	Escribir "Positivo o Negativo";
	Escribir "";
	
	Escribir "Ingrese el número de valores para definir";
	Escribir "si son positivos o negativos: ";
	Escribir "";
	Leer L;
	
	Para i<-1 Hasta L Con Paso 1 Hacer
		Escribir "";
		Escribir "";
		Escribir "Valor ", i, ":";
		Leer N;
		
		Si N=0 Entonces
			Escribir "El cero es neutro.";
	SiNo
		Si N<0 Entonces
			Escribir "";
			Escribir N, " es negativo.";
	SiNo
			Escribir "";
			Escribir N, " es positivo.";
		FinSi
		FinSi
	
	Fin Para
	
	
FinAlgoritmo
