Algoritmo sin_titulo
	Dimension vEdades[20]
	Escribir "ingresa las edades de los 20"
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		Leer vEdades[i]
	FinPara
	decada0 = 0
	decada1 = 0
	decada2 = 0
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		n = vEdades[i]
		Si n>=1 && n<=9 Entonces
			decada0 = decada0+1
		FinSi
	FinPara
	Escribir decada0
FinAlgoritmo
