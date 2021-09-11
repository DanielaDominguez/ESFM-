Algoritmo TD
	
	Definir C, i, OP Como Entero;
	Definir V1, V2, V3 Como Real;
	
	Escribir "Uso de tres números";
	Escribir "";
	
	Escribir "Ingrese las evaluaciones con tres números a realizar: ";
	Leer C;
	
	Para i<-1 Hasta C Con Paso 1 Hacer
		
		Escribir "";
		Escribir "-----------------------";
		Escribir "Comparación "
		
		Escribir "";
		Escribir "N1:";
		Leer V1;
		
		Escribir "";
		Escribir "N2:";
		Leer V2;
		
		Escribir "";
		Escribir "N3:";
		Leer V3;
		
		Escribir "";
		Escribir "Elija la opción:";
		Escribir "(1) Dividir N1 entre N2";
		Escribir "";
		Escribir "(2) Dividir N2 entre N1";
		Escribir "";
		Leer OP;
		
		
		Mientras  OP=1 Y V2=0 Hacer
			Escribir "";
			Escribir "Esta división no existe, dado que es sobre cero.";
			Escribir "";
			
		OP<-9;
		FinMientras
		
		
		Mientras  OP=1 Y V2<>0 Hacer
		
		Si V3=V1 MOD V2 Entonces
			Escribir "";
			Escribir V3, " es igual al resto de la división de ", V1, " sobre ", V2, ".";
			Escribir "";
			
		SiNo
			Escribir "";
			Escribir V3, " no es igual al resto de la división de ", V1, " sobre ", V2, ".";
			Escribir "";
			
		FinSi
		
		OP=3;
		FinMientras
		
		
		Mientras  OP=2 Y V1=0 Hacer
			Escribir "";
			Escribir "Esta división no existe, dado que es sobre cero.";
			Escribir "";
			OP<-9;
		FinMientras
		
		
		Mientras OP=2 Y V1<>0 Hacer
			
		Si V3=V2 MOD V1 Entonces
			
			Escribir "";
			Escribir V3, " es igual al resto de la división de ", V2, " sobre ", V1, ".";
			Escribir "";
				
		SiNo
			Escribir "";
			Escribir V3, " no es igual al resto de la división de ", V2, " sobre ", V1, ".";
			Escribir "";
				
		FinSi
			
			OP=3;
			FinMientras
			
		
	Fin Para
	
Escribir "";	
FinAlgoritmo

