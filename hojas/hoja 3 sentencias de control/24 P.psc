Proceso Primero_A_Segundo
	Definir Q, A, N, M, P, Z Como Real;
	
	Escribir "";
	Escribir "Producto de los números enteros desde N hasta M";
	Escribir "";
	
	Escribir "Ingrese el primer valor: ";
	Leer Q;
	Escribir "";
	
	Escribir "Ingrese el segundo valor: ";
	Leer A;
	
	Mientras Q=A Hacer
		Escribir "";
		Escribir "Error, ingrese un número diferente del anterior: ";
		Leer A;
	FinMientras
	
	
	
	Si Q<A Entonces
		
		Mientras A-Q<>trunc(A)-trunc(Q) Hacer
			Escribir "";
			Escribir "Error, ingrese un número que esté en el rango de ", Q, " + 1";
			Leer A;
			
		FinMientras
		
		N<-Q;
		M<-A;
		P<-1;
		
		Escribir "Producto: ";
		
		
		Mientras Q<=A Hacer
			Z=3;	
			Escribir "";
			Escribir Q;	
			
			Mientras Q<A Y Z=3 Hacer
				Escribir "";	
				Escribir "*";
				Z=40;
			FinMientras
			
			P<-P*Q;
			Q<-Q+1;
		FinMientras
		
		
		
	SiNo
		
		Mientras Q-A<>trunc(Q)-trunc(A) Hacer
			Escribir "";
			Escribir "Error, ingrese un número que esté en el rango de ", A, " + 1";
			Leer Q;
			
		FinMientras
		
		N<-A;
		M<-Q;
		P<-1
		
		Escribir "Producto: ";
		
		
		Mientras A<=Q Hacer
			Z=3;	
			Escribir "";
			Escribir A;	
			
			Mientras A<Q Y Z=3 Hacer
				Escribir "";	
				Escribir "*";
				Z=40;
			FinMientras
			
			P<-P*A;
			A<-A+1;
		FinMientras
		
		
		
	FinSi
	
	
	Si P=-0 Entonces
		P<-0;
	FinSi
	
	
	Escribir "";
	Escribir "El producto desde el número ", N;
	Escribir " yendo de entero en entero hasta ", M;
	Escribir "   tiene como resultado: ", P;
	
FinProceso

