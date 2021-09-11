Algoritmo DaniAV_NúmerosNaturales
	Definir N,NP,NN Como Real;
	Definir SNP,SNN,P_SDP,P_SDI,N_SDP,N_SDI Como Entero;
	
	Escribir "Clasificaremos 50 números naturales";
	Escribir "";
	
	Escribir "A continuación, digite 50 números naturales: ";
	Escribir "";
	
	Para I<-1 Hasta 50 Con Paso 1 Hacer
		
		Escribir "N",I,":";
		Leer N;
		Escribir "";
		
		Mientras N<=0 Hacer
			Escribir "Error. Digite un número natural: ";
			Leer N;
			Escribir "";
		Fin Mientras
		
		Si N>0  Entonces
			NP<-N;
			SNP<-SNP+1;
			
			Si (NP/2)=trunc(NP/2) Entonces
				P_SDP<-P_SDP+1;	
			SiNo
				P_SDI<-P_SDI+1;
			FinSi
			
		SiNo
			NN<-N;	
			SNN<-SNN+1;
			
			Si (NN/2)=trunc(NN/2) Entonces
				N_SDP<-N_SDP+1;	
			SiNo
				N_SDI<-N_SDI+1;
			FinSi
		FinSi
		
	Fin Para
	
	Escribir "Todos los números positivos: ", SNP, " números";
	Escribir "";
	
	Escribir "Números que son pares: ", P_SDP, " números";
	Escribir "";
	
	Escribir "Números que son impares: ", P_SDI, " números";
	Escribir "";
	
	Escribir "Todos los números negativos: ", SNN, " números";
	Escribir "";
	
	Escribir "Números que son pares: ", N_SDP, " números";
	Escribir "";
	
	Escribir "Números que son impares: ", N_SDI, " números";
	Escribir "";
	
Escribir "";
FinAlgoritmo
