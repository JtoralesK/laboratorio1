Algoritmo sin_titulo
	Dimension vNum[5]
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	Dimension vSumas[4]
	segunI = 1
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		primerI = i
		suma = vNum[primerI]+vNum[segunI]
		vSumas[i] = suma
		segunI = segunI+1
	FinPara
	Dimension vPromedio[4]
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		vPromedio[i] = vSumas[i]/2
	FinPara
	seguir = verdadero
	num = 0
	numP = 0
	Dimension vNuevo[9]
	Para i<-0 Hasta 8 Con Paso 1 Hacer
		Si seguir Entonces
			vNuevo[i] = vNum[num]
			num = num+1
		SiNo
			vNuevo[i] = vPromedio[numP]
			numP = numP+1
		FinSi
		seguir = !seguir
	FinPara
	Para i<-0 Hasta 8 Con Paso 1 Hacer
		Escribir vNuevo[i]
	FinPara
FinAlgoritmo
