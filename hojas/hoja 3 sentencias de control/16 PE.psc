Algoritmo Promedio_Inf
	Definir N Como Real;
	Definir Bool Como Logico;
	Definir R Como Caracter;
	
	Escribir "Promedio de edades para N cantidad de estudiantes";
	Escribir "";
	
	Escribir "Ingrese tantas edades como desee: ";
	
	
	Bool<-Verdadero;
	i<-0;
	S<-0;
	
	Mientras Bool==Verdadero Hacer
		
		Escribir "";
		Escribir "Estudiante ",i+1,":";
		Leer N;
		
		Mientras N<0 Hacer
			Escribir "";
			Escribir "Error. Digite una edad natural: ";
			Leer N;
		FinMientras
		
		S<-S+N;
		
		i<-i+1;
		
		Escribir "";
		Escribir "�Seguir? S/N";
		Leer R;
		
		Mientras R<>"S" Y R<>"N" Hacer
			Escribir "";
			Escribir "Digite S para continuar o N para finalizar: ";
			Leer R;
		FinMientras
		
		Mientras R=="S" Hacer
			Bool=Verdadero;
			R<-"Z3";
		FinMientras
		
		Mientras R=="N" Hacer
			P<-S/i;
			Bool=Falso;
			R<-"Z3";
		FinMientras
		
	Fin Mientras
	
	Escribir "";
	Escribir "El promedio de edad en ",i, " estudiantes es: ",P;
	
Escribir "";	
FinAlgoritmo
