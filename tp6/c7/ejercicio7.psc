Algoritmo sin_titulo
	cond = falso
	Dimension vNumeros[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si cond Entonces
			n = 0
			cond = !cond
		SiNo
			n = 1
			cond = !cond
		FinSi
		vNumeros[i] = n
	FinPara
	Para x<-0 Hasta 9 Con Paso 1 Hacer
		Escribir vNumeros[x]
	FinPara
FinAlgoritmo
