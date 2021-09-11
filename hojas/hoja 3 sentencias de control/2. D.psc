Algoritmo Menor_a_Mayor
	
	Definir i Como Entero;
	
	
	Escribir "Mostrar el orden de menor a mayor de tres";
	Escribir "";
	
	
	Escribir "Ingrese el primer número: ";
	Leer V1;
	Escribir "";
	
	Escribir "Ingrese el segundo número: ";
	Leer V2;
	Escribir "";
	
	Escribir "Ingrese el tercer número: ";
	Leer V3;
	Escribir "";
	
	Si V1<V2 Y V1<V3 Entonces
		VM<-V1;
	SiNo
		Si V2<V1 Y V2<V3 Entonces
			VM<-V2;
		SiNo
			VM<-V3;
		FinSi
	FinSi
	
	
	Si V1>V2 Y V1>V3 Entonces
		VMA<-V1;
	SiNo
		Si V2>V1 Y V2>V3 Entonces
			VMA<-V2;
		SiNo
			VMA<-V3;
		FinSi
	FinSi
	
	
	Si (VMA=V1 Y VM=V3) Entonces 
		VME<-V2;
	SiNo
		Si (VMA=V3 Y VM=V1) Entonces
		VME<-V2;
			
	SiNo
			Si (VMA=V1 Y VM=V2)  Entonces 
			VME<-V3; 
	SiNo
			Si (VMA=V2 Y VMA=V1) Entonces
			VME<-V3; 
	SiNo
					
	VME<-V1;
					
			FinSi
			FinSi
	FinSi
	FinSi
	
	Escribir "Número Mayor: ", VMA;
	Escribir "";
	
	Escribir "Número Medio: ", VME;
	Escribir "";
	
	Escribir "Número Menor: ", VM;
	Escribir "";
	
	
	
	
	Escribir "";	
FinAlgoritmo
