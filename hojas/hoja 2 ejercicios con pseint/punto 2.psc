Algoritmo DaniAV_HorasExtra
	costoporhora<-88.36
	Escribir "Calcular el salario en base a las horas trabajadas m�s horas extras"
	Escribir "�Cuantas horas trabaj� esta semana?"
	Leer nh	
	
	Si nh<=40 Entonces
		sueldo <- nh*costohora
	Sino
		pago_extra<-costohora+.50*costohora
		hora_extra<-nh-40
		sueldo<-hora_extra*pago_extra+40*costohora
	Fin Si
	
	Escribir "Tu tal�n de pago ser� por: $ ", sueldo
FinAlgoritmo
