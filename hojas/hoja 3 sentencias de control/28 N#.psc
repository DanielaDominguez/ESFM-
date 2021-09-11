Algoritmo SumaCuadrado
	Definir Flag Como Logico;
	Definir i Como Entero;
	Definir S, Q Como Real;
	Definir R Como Caracter;
	
	
	Escribir "Suma de los cuadrados de N números naturales";
	Escribir "";
	
	Escribir "Ingrese tantos números desee: ";
	
	
	Flag<-Verdadero;
	i<-1;
	S<-0;
	Mientras Flag==Verdadero Hacer
		Escribir "";
		Escribir "N", i, ":";	
		Leer Q;
		
		Mientras Q<0 O Q<>trunc(Q) Hacer
			Escribir "";	
			Escribir "Error, ingrese un número natural: ";
			Leer Q;
		FinMientras
		
		Escribir "";
		Escribir "Cuadrado: ", Q^2;
		S<-S+Q^2;
		
		Escribir "";
		Escribir "                                 ¿Seguir? S/N";
		Leer R;
		
		Mientras R<>"S" Y R<>"N" Hacer
			Escribir "";
			Escribir "Ingrese S para añadir más o N para mostrar la suma:";
			Leer R;
		FinMientras
		
		Si R="S" Entonces
			Escribir "";
			Escribir "          +";
			Flag<-Verdadero;
			i<-i+1;
		SiNo
			Flag<-Falso;
		FinSi
		
	FinMientras
	
	Escribir "";
	Escribir "La suma de los cuadrados de los ", i, " números ingresados";
	Escribir "       tiene como resultado: ", S;
	
Escribir "";
FinAlgoritmo
