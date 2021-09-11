Algoritmo Supermercado
	Definir Flag, Band como Logico;
	Definir D,  i Como Entero;
	Definir M, MR, MC, ML, PR, PC, PL, SR, SC, SL Como Real;
	Definir R, C Como Caracter;
	
	Escribir "";
	Escribir "Ropa, Comestibles y Perfumería";
	
	Flag<-Verdadero;
	i<-0;
	SR<-0;
	SC<-0;
	SL<-0;
	
	Mientras Flag==Verdadero Hacer
			 Band<-Verdadero;
			 
			Mientras Band==Verdadero Hacer
			Escribir "";
			Escribir "------------------------------------";
			Escribir "Cuenta del Cliente ", i+1, ":";
			Escribir "------------------------------------";
			Escribir "";
			
			Escribir "Departamento en que compró: ";
			Escribir "";
			
			Escribir "1) Ropa";
			Escribir "";
			
			Escribir "2) Comestibles";
			Escribir "";
			
			Escribir "3) Perfumería";
			Escribir "";
			Leer D;
			
			Mientras D<>1 Y D<>2 Y D<>3 Hacer
				Escribir "";
				Escribir "Opción inválida, ingrese una existente: ";
				Leer D;
			FinMientras
			
			Segun D Hacer
				1:
					Escribir "";
					Escribir "Opción Elegida: Ropa";
					Escribir "";
					Escribir "Monto a pagar: ";
					Leer MR;
					Escribir "";
					
					Mientras MR<0 Hacer
						Escribir "";
						Escribir "Ingrese un pago válido: ";
						Leer MR;
					FinMientras
						
					Si MR>100 Entonces
						PR<-MR*(1-0.05);
						Escribir "Monto Real: $", PR;
						Escribir "Descuento hecho: $", (MR*0.05);
					SiNo
						PR<-MR;
					FinSi
					
					SR<-SR+PR;
					
				2:
					Escribir "";
					Escribir "Opción Elegida: Comestibles";
					Escribir "";
					Escribir "Monto a pagar: ";
					Leer MC;
					
					Mientras MC<0 Hacer
						Escribir "";
						Escribir "Ingrese un pago válido: ";
						Leer MC;
					FinMientras
					
					Si MC>100 Entonces
						PC<-MC*(1-0.035);
						Escribir "Monto Real: $", PC;
						Escribir "Descuento hecho: $", (MC*0.035);
					SiNo
						PC<-MC;
					FinSi
					
					SC<-SC+PC;
				3:
					Escribir "";
					Escribir "Opción Elegida: Perfumería";
					Escribir "";
					Escribir "Monto a pagar: ";
					Leer ML;
					
					Mientras ML<0 Hacer
						Escribir "";
						Escribir "Ingrese un pago válido: ";
						Leer ML;
					FinMientras
					
					Si ML>100 Entonces
						PL<-ML*(1-0.08);
						Escribir "Monto Real: $", PL;
						Escribir "Descuento hecho: $", (ML*0.08);
					SiNo
						PL<-ML;
					FinSi
					
					SL<-SL+PL;
					
				De Otro Modo:
					Escribir "";
					
			Fin Segun
			
			Escribir "";
			Escribir "¿Realizó otra compra?";
			Leer C;
			Escribir "";
			
			Mientras C<>"S" Y C<>"N" Hacer
				
				Escribir "";
				Escribir "Digite S en caso afirmativo y N en caso contrario";
				Leer C;
				
			FinMientras
			
			Mientras C="S" Hacer
				Band<-Verdadero;
				C<-"Z3";
			FinMientras
			
			Mientras C="N" Hacer
				Band<-Falso;
				C<-"Z3";
			FinMientras
			
			
			//Fin de Seguir en cliente
			FinMientras
			
			
			
			
			
			Escribir "";
			Escribir "¿Hay más clientes por considerar?";
			Leer R;
			
			Mientras R<>"S" Y R<>"N" Hacer
				Escribir "";
				Escribir "Presione S para seguir y N para conocer el total del día";
				Leer R;
			FinMientras
			
			Mientras R="S" Hacer
				Flag<-Verdadero;
				R<-"Z3";
			FinMientras
			
			Mientras R="N" Hacer
				Flag<-Falso;
				R<-"Z3";
			FinMientras
			
			i<-i+1;
			
		//Fin del Mientras General
		FinMientras
		
		
		
		Escribir "";
		Escribir "Recaudación en toda la tienda al final del día";
		Escribir "";
		
		Escribir "Departamentos ";
		Escribir "Ropa: $ ",SR;
		Escribir "";
		Escribir "Comestibles: $ ",SC;
		Escribir "";
		Escribir "Perfumería: $ ",SL;
		
		
Escribir "";	
FinAlgoritmo
