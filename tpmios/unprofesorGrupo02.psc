Algoritmo sin_titulo
	Escribir 'INGRESA CANTIDAD DE ALUMNOS:'
	Leer a
	Escribir 'INGRESA CANTIDAD DE GRUPOS'
	Leer g
	factorialA = 1
	factorialG = 1
	aG = a-g
	factorialAG = 1
	Para i<-a Hasta 1 Con Paso -1 Hacer
		factorialA = factorialA*i
	FinPara
	Para i<-g Hasta 1 Con Paso -1 Hacer
		factorialG = factorialG*i
	FinPara
	Para i<-aG Hasta 1 Con Paso -1 Hacer
		factorialAG = factorialAG*i
	FinPara
	result = factorialA/factorialG/factorialAG
	Escribir 'las posibilidades de grupos son:',result
FinAlgoritmo
