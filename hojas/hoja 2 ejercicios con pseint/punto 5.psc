Algoritmo DaniAV_DescuentoDeAcuerdoElMonto
	ESCRIBIR "Calculemos el descuento de acuerdo al monto gastado"
	ESCRIBIR "Inserta el monto"
	LEER A
	Si A>=100 Entonces
		DESC<-A*.10
	SiNo
		DESC<-A*.02
	Fin Si
	MF<-A-DESC
	ESCRIBIR "Su descuento corresponde a: $ " DESC
	ESCRIBIR "Su monto con descuento corresponde a: $ " MF
FinAlgoritmo
