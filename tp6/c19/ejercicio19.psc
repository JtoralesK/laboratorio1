Algoritmo sin_titulo
	Escribir 'ingresar una lista de 5 numeros:'
	Dimension arrayA[5]
	Dimension arrayB[5]
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Leer arrayA[i]
	FinPara
	Escribir 'ingresar otra lista de 5 numeros:'
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Leer arrayB[i]
	FinPara
	Dimension arrayC[10]
	contA = 0
	contB = 0
	varia = verdadero
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si varia Entonces
			arrayC[i] = arrayA[contA]
			contA = contA+1
		SiNo
			arrayC[i] = arrayB[contB]
			contB = contB+1
		FinSi
		varia = !varia
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir arrayC[i]
	FinPara
FinAlgoritmo
