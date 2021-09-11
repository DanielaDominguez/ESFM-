Algoritmo DaniAV_Calificaciones
	ESCRIBIR "Calcularemos el parametro de tus calificaciones"
	ESCRIBIR "Inserta las calificaciones a evaluar"
	LEER N
	Z<-N
	Para N<-1 Hasta N Con Paso 1 Hacer
		ESCRIBIR "ingrese la nota número " N
		LEER A
		Si A<6 Entonces
			REP<-REP+1
			SUMA<-SUMA+A
		SiNo
			AP<-AP+1
		Fin Si
		SUM<-SUM+A
	Fin Para
	PR<-SUMA/Z
	PROM<-SUM/Z
	ESCRIBIR "Promedio general: " PROM 
	ESCRIBIR "Promedio materias reprobadas: " PR 
	ESCRIBIR "Materias reprobadas: " REP
	ESCRIBIR "Materias aprobadas: " AP
FinAlgoritmo
