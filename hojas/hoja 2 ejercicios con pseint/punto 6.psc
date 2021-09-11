Algoritmo DaniAV_MinutosFaltantes
	DEFINIR MIN, SEGS Como Entero
	ESCRIBIR "Calculemos su tiempo de segundos a minutos"
	ESCRIBIR "Inserta el tiempo, en segundos"
	LEER A
	MIN<-A/60
	SEGS<-A-(MIN*60)
	ESCRIBIR "El tiempo será: " MIN " minutos y " SEGS "segundos"
FinAlgoritmo
