Algoritmo DaniAV_N�merosNaturales
	Definir N,NP,NN Como Real;
	Definir SNP,SNN,P_SDP,P_SDI,N_SDP,N_SDI Como Entero;
	
	Escribir "Clasificaremos 50 n�meros naturales";
	Escribir "";
	
	Escribir "A continuaci�n, digite 50 n�meros naturales: ";
	Escribir "";
	
	Para I<-1 Hasta 50 Con Paso 1 Hacer
		
		Escribir "N",I,":";
		Leer N;
		Escribir "";
		
		Mientras N<=0 Hacer
			Escribir "Error. Digite un n�mero natural: ";
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
	
	Escribir "Todos los n�meros positivos: ", SNP, " n�meros";
	Escribir "";
	
	Escribir "N�meros que son pares: ", P_SDP, " n�meros";
	Escribir "";
	
	Escribir "N�meros que son impares: ", P_SDI, " n�meros";
	Escribir "";
	
	Escribir "Todos los n�meros negativos: ", SNN, " n�meros";
	Escribir "";
	
	Escribir "N�meros que son pares: ", N_SDP, " n�meros";
	Escribir "";
	
	Escribir "N�meros que son impares: ", N_SDI, " n�meros";
	Escribir "";
	
Escribir "";
FinAlgoritmo
