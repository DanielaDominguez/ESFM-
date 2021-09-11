Algoritmo DaniAV_Minutos
	DEFINIR DIAS, HORAS, MIN Como Entero
	ESCRIBIR "Convertiremos su tiempo en minutos a dias, horas y minutos"
	ESCRIBIR "Ingrese el tiempo en minutos"
	LEER A
	DIAS<-A/1440
	HORAS<-(A-(DIAS*1440))/60
	MIN<-A-(HORAS*60)-(DIAS*1440)
	ESCRIBIR "su tiempo corresponde a: " DIAS "días " HORAS "horas y " MIN " minutos"
FinAlgoritmo
