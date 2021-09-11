Algoritmo Cuarenta
	Definir A, i, Z Como Entero;
	Definir Na, MS, MB Como Texto;
	Definir V, E, G Como Real;
	Escribir "";
	Escribir "40 Alumnos y sus calificaciones mayores";
	
	Escribir "";
	Escribir "Número de alumnos a considerar: ";
	Leer A;
	
	Para i<-1 Hasta A Con Paso 1 Hacer
		Escribir "";
		Escribir "Nombre del alumno ", i, ":";
		Leer Na;
		Escribir "Calificación ", i, ":";
		Leer V;
		
		Mientras V<0 O V>10 Hacer
			Escribir "";
			Escribir "Error. Ingrese una calificación entre 0 y 10:";
			Leer V;
		FinMientras
		
		Si i=1 Entonces
			E<-V;
			G<-V;
			MB<-Na;
			MS<-Na;
		FinSi
		
		Z=3;
		Mientras i>=2 Y Z=3 Hacer
			Si V<E Entonces
				E<-V;
				MS<-Na;
			FinSi
			
			Si V>G Entonces
				G<-V;
				MB<-Na;
			FinSi
			
		Z=40;	
		FinMientras
			
		
	Fin Para
	
	
	Escribir "";
	Escribir "Calificación mayor entre todos los ", A, " alumnos considerados es: ", G;
	Escribir "";
	Escribir "Pertenece a:  ", MB;
	Escribir "";
	Escribir "Calificación menor entre todos los ", A, " alumnos considerados es: ", E;
	Escribir "";
	Escribir "Pertenece a:  ", MS;
	
Escribir "";
FinAlgoritmo
