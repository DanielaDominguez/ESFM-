Algoritmo Aprobados
	Definir A, R, i Como Entero;
	Definir S, V Como Real;
	
	Escribir "14 Alumnos";
	Escribir "";
	
	Escribir "Ingrese la calificación de 14 alumnos en X asignatura: ";
	Escribir "";
	
	Escribir "Cantidad de alumnos:";
	Leer D;
	
	S<-0;
	A<-0;
	R<-0;
	
	Para i<-1 Hasta D Con Paso 1 Hacer
		
		Escribir "";
		Escribir "Alumno ",i, ":";
		Leer V;
		
		Mientras V<0 O V>10 Hacer
			Escribir "Ingrese una calificación de 0 a 10 para el Alumno ", i, ":"
			Leer V;
			Escribir "";
		FinMientras
		
		Si i=1 Entonces
			E<-V;
			G<-V;
		FinSi
		
		Z=3;
		Mientras i>=2 Y Z=3 Hacer
			Si V<E Entonces
				E<-V;
			FinSi
			
			Si V>G Entonces
				G<-V;
			FinSi
		Z=40;
		FinMientras
		
		
		Si V>=6 Entonces
			A<-A+1;
		SiNo
			R<-R+1;
		FinSi
		
		S<-S+V;
		
	Fin Para
	
	Escribir "";
	Escribir "Promedio del salón: ",S/D;
	Escribir "";
	Escribir "Nota mayor: ", G;
	Escribir "";
	Escribir "Nota menor: ", E;
	Escribir "";
	Escribir "Aprobados: ",A;
	
	Escribir "";	
FinAlgoritmo

