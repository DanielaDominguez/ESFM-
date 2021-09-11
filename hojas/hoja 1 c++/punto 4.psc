Algoritmo Daniela
	Definir n, num, aMedA como entero;
	Definir Media Como Real; 
	Escribir ("ingresa la cantidad de digitos a evaluar")
	Leer n; //cantidad de num ingresados
	Escribir ("escriba los numeros")
	aMedA<- 0;
	para i<- 1 hasta n con paso 1 hacer
		Leer num;
		aMedA <- aMedA + num;
	FinPara
	
	Escribir ("suma de los números es: "), aMedA;
	
	Media<- aMedA / n;
	Escribir "la media de los números es: ", Media
FinAlgoritmo
