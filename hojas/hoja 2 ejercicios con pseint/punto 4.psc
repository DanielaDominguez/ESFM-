Algoritmo DaniAV_DescuentoYSueldoNeto
	ESCRIBIR "Calculemos su sueldo neto y su descuento"
	ESCRIBIR "Ingrese su salario"
	LEER A
	Si A<=1000 Entonces
		DESC<-A*.10
		SALARIO<-A-DESC
	SiNo
		Si A<=2000 Entonces
			DESC<-A*.05
			SALARIO<-A-DESC
		SiNo
			DESC<-A*.03
			SALARIO<-A-DESC
		Fin Si
	Fin Si
	ESCRIBIR "Su descuento es: $ " DESC
	ESCRIBIR "Tu salario neto es: $ " SALARIO
FinAlgoritmo
