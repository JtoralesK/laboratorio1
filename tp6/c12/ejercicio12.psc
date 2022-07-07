Algoritmo sin_titulo
	Escribir 'ingresar 10 n para una lista'
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	Escribir 'ingresar un numero'
	Leer n
	cant = 0
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si n==vNum[i] Entonces
			cant = cant+1
		FinSi
	FinPara
	Escribir 'el numero ",n," aparece ",cant," veces"
FinAlgoritmo
