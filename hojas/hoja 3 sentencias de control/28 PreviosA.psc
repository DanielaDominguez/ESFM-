Algoritmo SumaCuadrado
	Definir i, S, V Como Entero;
	
	Escribir " ";
	Escribir "Suma de los cuadrados de los n�meros naturales";
	
	Escribir " ";
	Escribir "Ingrese un n�mero natural m�ximo a evaluar: ";
	Leer V;
	Escribir " ";
	
	S<-0;
	Para i<-1 Hasta V-1 Con Paso 1 Hacer
		Escribir "N�mero ", i,;
		Escribir "";
		Escribir "Cuadrado:   ", i^2;
		
		Si i<V-1 Entonces
			Escribir " ";
			Escribir "            +";
		FinSi
		
		S<-S+i^2;
	Fin Para
	
	Escribir " ";
	Escribir "La suma de los cuadrados de los naturales menores a ", V;
	Escribir "    tiene como resultado: ", S;
	
Escribir " ";	
FinAlgoritmo
