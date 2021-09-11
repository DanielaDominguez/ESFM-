Proceso DaniAV_SumaDeDigitos
	DEFINIR SUMA, FINAL COMO ENTERO
	ESCRIBIR "Calculemos la suma de los dos digitos de una cifra"
	ESCRIBIR "¿Cuál es tu cifra?"
	LEER A
	Si A>=10 Entonces
		SUMA<-SUMA+(A/10)
		FINAL<-A-(SUMA*10)
		RES<-SUMA+FINAL
	Sino
		SUMA<-A
	Fin Si
	ESCRIBIR "la suma de ambos digitos de la cifra es: " RES
FinProceso
