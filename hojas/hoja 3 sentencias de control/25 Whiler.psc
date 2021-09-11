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
		Z<-1;
		
	Escribir "";
	Escribir "¿Seguir añadiendo?  S/0 ";
	Leer R
		
		Mientras R<>"S" Y R<>"0"  Hacer
			Escribir "";
			Escribir "Digite S para seguir y 0 para mostrar la Media";
			Leer R;
			FinMientras
		
		Mientras R="S" Y Z=1 Hacer
			Flag=Verdadero;
			i<-i+1;
			Z=40;
			FinMientras
		
			Mientras R="0" Y Z=1 Hacer
				Flag=Falso;
				Z=3;
			FinMientras
		
		
		
	FinMientras
	
	Escribir "";
	Escribir "";
	Escribir "La media de los ", i, " valores ingresados"
	Escribir "  tiene como resultado: ", A/i;
	
Escribir "";
FinProceso
