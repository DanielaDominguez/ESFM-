Algoritmo DaniAV_DescuentoYPrecio
	ESCRIBIR "Haremos el desglose del costo de su articulo"
	ESCRIBIR "Ingrese el subtotal"
	LEER A
	IVA<-A*0.19
	PN<-A+IVA
	Si PN>13000 Entonces
		DESC<-PN*.05
	SiNo
		DESC<-0
	Fin Si
	PF<-PN-DESC
	ESCRIBIR "Tu subtotal: $ " A
	ESCRIBIR "IVA del 19%: $ " IVA
	ESCRIBIR "Precio neto: $ " PN
	ESCRIBIR "Descuento: $ " DESC
	ESCRIBIR "Precio final: $ " PF
FinAlgoritmo
