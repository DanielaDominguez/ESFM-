Algoritmo Factorial
	Definir V Como Real;
	Definir F,i Como Entero;
	
	Escribir "Calcular el factorial de un n�mero";
	Escribir "";
	
	Escribir "Ingrese el n�mero del que se obtendr� el factorial: ";
	Leer V;
	
	Mientras V<0 O V!=trunc(V/1) Hacer
		Escribir "";
		Escribir "Error. Ingrese un n�mero narutal y entero: "
		Leer V;
	Fin Mientras
	
	F<-1
	Para i<-1 Hasta V Con Paso 1 Hacer
		F<-F*i;
	Fin Para
	
	Escribir "";
	Escribir "El factorial del n�mero ", V, " es: ", F;
	
	
Escribir "";
FinAlgoritmo
