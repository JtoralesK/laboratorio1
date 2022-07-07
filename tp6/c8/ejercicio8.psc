Algoritmo sin_titulo
	Dimension vNumeros[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "#grupo ",i+1
		Leer n
		mayor = 0
		Mientras n!=0 Hacer
			Si mayor==0 Entonces
				mayor = n
			SiNo
				Si n>mayor Entonces
					mayor = n
				FinSi
			FinSi
			Leer n
		FinMientras
		vNumeros[i] = mayor
	FinPara
	Escribir "lista formada por los mayores de cada grupo:"
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Escribir vNumeros[a]
	FinPara
FinAlgoritmo
