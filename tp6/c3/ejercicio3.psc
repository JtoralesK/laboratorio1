Algoritmo sin_titulo
	Dimension array[10]
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Leer array[a]
	FinPara
	max = 0
	posicion = 0
	Para b<-0 Hasta 9 Con Paso 1 Hacer
		Si array[b]>max Entonces
			max = array[b]
			posicion = b
		FinSi
	FinPara
	Escribir "el numero mas grande de la lista:",max
	Escribir "su posicion:",posicion
FinAlgoritmo
