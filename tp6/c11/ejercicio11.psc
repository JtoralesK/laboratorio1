Algoritmo sin_titulo
	Escribir "ingresar 10 n para una lista"
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	Escribir "ingresar un numero"
	Leer n
	esta = falso
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si n==vNum[i]  Entonces
			indice = i
			esta = verdadero
		SiNo
			Si esta==Falso Entonces
				indice = -1
			FinSi
		FinSi
	FinPara
	Escribir "indice:",indice
FinAlgoritmo
