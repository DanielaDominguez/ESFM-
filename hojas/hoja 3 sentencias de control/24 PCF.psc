Proceso pd
	
	Definir Q, A, C, PRI, G, P,  Z Como Real;
	
	Escribir "";
	Escribir "Producto de los números enteros desde N hasta M";
	Escribir "";
	
	Escribir "Ingrese el primer valor: ";
	Leer Q;
	Escribir "";
	
	Escribir "Ingrese el segundo valor: ";
	Leer A;
	
	
	Mientras A=Q Hacer
		Escribir "";
		Escribir "Error. Ingrese un número diferente al ", Q, ": ";
		Leer A;
	FinMientras
	
	
	Si Q<A Entonces
		
		Mientras A-Q<>trunc(A)-trunc(Q) Hacer
		Escribir "";
		Escribir "Error. Escriba un número que esté en el rango de ", Q, "+1";
		Leer A;
		Z=3;
		FinMientras
		
		C<-Q;
		PRI<-Q;
		G<-A;
	Sino

		
		Mientras Q-A<>trunc(Q)-trunc(A) Hacer
		Escribir "";
		Escribir "Error. Escriba un número que esté en el rango de ", A, "+1";
		Leer Q;
		FinMientras
		
		C<-A;
		PRI<-A;
		G<-Q;
	FinSi
	
	
	Escribir "";
	Escribir "Producto: ";
	Escribir "";
	
	
	P<-1;
	Para i<-C Hasta G Con Paso 1 Hacer
		
	Z=40;	
	Escribir "";
	Escribir i;
		
		Mientras i<G Y Z=40 Hacer
		Escribir "";
		Escribir "*";
		Z=3;
		FinMientras
	
	P<-P*i;
	
	Fin Para
	
	Si P=-0 Entonces
		P<-0;
	FinSi
	
	Escribir "";
	Escribir "El producto desde el número ", PRI;
	Escribir " yendo de entero en entero hasta ", G;
	Escribir "   tiene como resultado: ", P;
	
FinProceso
