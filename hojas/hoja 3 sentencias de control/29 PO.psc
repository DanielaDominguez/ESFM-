Algoritmo Potencia
	Definir Flag Como Logico;
	Definir P, V, C Como Real;
	Definir R Como Caracter;
	
	Escribir "";
	Escribir "Potencia de un n�mero";
	
	Flag<-Verdadero;
	Mientras Flag==Verdadero Hacer
		Escribir "";
		Escribir "--------------------------------------------";
		Escribir "N�mero:";
		Leer V;
		Escribir "";
		Escribir "Potencia:";
		Leer P;
		
		C<-V^P;
		
		Escribir "";
		Escribir "N�mero: ", V, " elevado a la potencia ", P;
		Escribir "";
		Escribir " es igual a:  ", C;
		Escribir "---------------------------------------------";	
		
		Escribir "";
		Escribir "�Calcular otra potencia? S/N";
		Leer R;
		
		Mientras R<>"S" Y R<>"N" Hacer
			Escribir "";
			Escribir "Digite S para seguir calculando o N para salir: ";
			Leer R;
		FinMientras
		
		Si R="S" Entonces
			Flag<-Verdadero;
			Escribir "";
		SiNo
			Flag<-Falso;
		FinSi
		
		
	FinMientras
	
Escribir "";
FinAlgoritmo
