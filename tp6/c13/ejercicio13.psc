Algoritmo sin_titulo
	Escribir 'ingresar 10 n para una lista'
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	cant = 0
	Dimension vNumPares[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		n = vNum[i]
		resto = (n%2)==0
		indice = 0
		Si resto Entonces
			vNumPares[cant] = n
			cant = cant+1
		FinSi
	FinPara
	Escribir 'en esta lista hay ',cant,' pares y son:'
	cant = cant-1
	Para i<-0 Hasta cant Con Paso 1 Hacer
		Escribir vNumPares[i]
	FinPara
FinAlgoritmo
