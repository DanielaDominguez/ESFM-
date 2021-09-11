Algoritmo DaniAV_HorasExtraTrabajadores
	costohora<-88.36
	Escribir "¿Cuantos trabajadores quieres calcular?"
	Leer n
	//x<-1
	suma<-0
	Para x<-1 Hasta n Hacer
		Escribir "Calcular el salario en base a las horas trabajadas y horas extra"
		Escribir "¿Cuantas horas trabajó esta semana?"
		Leer nh	
		Si nh<=40 Entonces
			sueldo <- nh*costohora
		Sino
			pago_extra<-costohora+.50*costohora
			hora_extra<-nh-40
			sueldo<-hora_extra*pago_extra+40*costohora
		Fin Si
		Escribir "Tu talón de pago será por: $ ", sueldo
		nomina<-nomina+sueldo
	Fin Para
	Escribir "Nomina total: $ ", nomina
FinAlgoritmo
