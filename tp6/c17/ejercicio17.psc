Algoritmo sin_titulo
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	Escribir 'ingresar un valor menor a 10'
	Leer a
	Escribir 'ingresar un valor menor a 10'
	Leer b
	Si a>b Entonces
		mayor = a
		menor = b
	SiNo
		mayor = b
		menor = a
	FinSi
	seguir = verdadero
	ind = 0
	elMayorEntreAYB = 0
	Mientras seguir==verdadero Hacer
		Si ind>=menor Entonces
			Si ind<=mayor Entonces
				Si vNum[ind]>mayor Entonces
					elMayorEntreAYB = vNum[ind]
				FinSi
			FinSi
		FinSi
		Si ind==9 Entonces
			seguir = falso
		FinSi
		ind = ind+1
	FinMientras
	Escribir 'el n mayor en el vector entre a y b es el ',elMayorEntreAYB
FinAlgoritmo
