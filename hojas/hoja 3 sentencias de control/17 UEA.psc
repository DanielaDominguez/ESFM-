Algoritmo Cuarenta
	Definir W, A, i, Z Como Entero;
	Definir V, E, G Como Real;
	Definir Na, R Como Texto;
	Definir Flag Como Logico;
	
	
	Escribir "";
	Escribir "40 Alumnos y sus calificaciones mayores";
	
	Escribir "";
	Escribir "Número de alumnos a considerar: ";
	Leer A;
	
	Para i<-1 Hasta A Con Paso 1 Hacer
		Escribir "";
		Escribir "---------------------------------------------";
		Escribir "";
		Escribir "Nombre del alumno ", i, ":";
		Leer Na;
		
		W<-1;
		Flag<-Verdadero;
		
		Mientras Flag==Verdadero Hacer
		Escribir "";
		Escribir "Calificación ", W, " de ", Na, ":";
		Leer V;
		
		Mientras V<0 O V>10 Hacer
			Escribir "";
			Escribir "Error. Ingrese una calificación entre 0 y 10:";
			Leer V;
		FinMientras
		
		Si W=1 Entonces
			E<-V;
			G<-V;
		FinSi
		
		Z=3;
		Mientras W>=2 Y Z=3 Hacer
			Si V<E Entonces
				E<-V;
			FinSi
			
			Si V>G Entonces
				G<-V;
			FinSi
			
			Z=40;	
		FinMientras
		
		Escribir "";
		Escribir "¿Seguir? S/N";
		Leer R;
		
		Mientras R<>"S" Y R<>"N" Hacer
			Escribir "";
			Escribir "Pulse S para seguir agregando o N para ver resultados:";
			Leer R;
		FinMientras
		
		Si R="S" Entonces
			Flag=Verdadero;
			W<-W+1;
			
		SiNo
			Flag<-Falso;
			Escribir "";
			Escribir "Calificación mayor del alumno ", Na, " es: ", G;
			Escribir "";
			Escribir "Calificación menor del alumno ", Na, " es: ", E;
			
		FinSi
		
		
		
	FinMientras
	

	Fin Para
	
	
	
	
Escribir "";
FinAlgoritmo

