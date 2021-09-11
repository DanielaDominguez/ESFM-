Algoritmo Daniela 
	Escribir "Calculemos la media Geométrica"
	Escribir "Cuantos números desea introducir?"
	Definir medG como real
	Leer n; // cantidad de num ingresados
	Escribir "Introduzca los números..."
	MedG <-1;
	Para i <-1 Hasta n Con Paso 1 Hacer
		Leer num;
		MedG<- MedG * num;
	FinPara
	
	Escribir "MedG: ", MedG;
	medG <- MedG ^ (1/n);
	Escribir "La media geométrica es: ", medG;
	
FinAlgoritmo
