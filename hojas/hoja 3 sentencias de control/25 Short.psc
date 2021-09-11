Proceso Media
	Definir Flag Como Logico;
	Definir A, D Como Real;
	Definir i Como Entero;
	Definir R Como Caracter;
	
	
	Escribir "";
	Escribir "Media de X números";
	Escribir "";
	
	Escribir "Ingrese tantos números como desee: ";
	Escribir "";
	
	Flag<-Verdadero;
	A<-0;
	i<-1;
	
	Mientras Flag==Verdadero Hacer
		Escribir "";
		Escribir "N", i, ":";
		Escribir "";
		Leer D;
		
		Mientras D=0 Y i=1
			Escribir "Error, digite un número diferente a cero: ";
			Leer D;
		FinMientras
		
		A<-A+D;
		
		Si D<>0 Entonces
			Flag=Verdadero;
			i<-i+1;
		Sino
			Flag=Falso
			i<-i-1;
		FinSi
		
		
		
	FinMientras
	
	Escribir "";
	Escribir "";
	Escribir "La media de los ", i, " valores ingresados"
	Escribir "  tiene como resultado: ", A/i;
	
	Escribir "";
FinProceso
