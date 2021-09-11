Algoritmo Sueldo
	Definir SB,A Como Entero;
	Definir ST Como Real;
	
	Escribir "";
	Escribir "Sueldo como factor en los años activos";
	SB<-40000;
	
	Escribir "";
	Escribir "Ingrese el número de empleados a evaluar: ";
	Leer N;
	Escribir "";
	
	Para i<-1 Hasta N Con Paso 1 Hacer
		
	Escribir "";
	Escribir "-----------------------------------------------------";	
	Escribir "";
	Escribir "Sueldo anual bruto del trabajador ",i, ": 40 000 €";
	Escribir "";
	
	
	Escribir "Ingrese los años que lleva trabajando en la empresa: ";
	Leer A;
	
	Mientras A<0 Hacer
		Escribir "";
		Escribir "Error. Ingrese años naturales: ";
		Leer A;
	FinMientras
	
	Si A<=3 Entonces
		ST<-SB*(1+0.03);
	SiNo
		Si A>3 Y A<=5 Entonces
			ST<-SB*(1+0.05);
	SiNo
		Si A>5 Y A<=10 Entonces
			ST<-SB*(1+0.07);
	SiNo
			ST<-SB*(1+0.1);
			
			FinSi
		FinSi
	FinSi
	
	Escribir "";
	Escribir "Sueldo total del Trabajador ",i, ": ",ST, " €";
	
Fin Para
	
Escribir "";	
FinAlgoritmo
