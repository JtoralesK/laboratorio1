Algoritmo sin_titulo
	Dimension vNum[10]
	Dimension vNum2[10]
	Escribir 'ingresar lista a'
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	Escribir 'ingresar lista b'
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum2[i]
	FinPara
	seguir = verdadero
	ind = 0
	repetidos = falso
	cantRepetidos = 0
	Dimension vRepetidos[10]
	Mientras seguir==verdadero Hacer
		Para z<-0 Hasta 9 Con Paso 1 Hacer
			igual = (vNum[ind])==(vNum2[z])
			Si igual Entonces
				repetidos = verdadero
				vRepetidos[cantRepetidos] = vNum[ind]
				cantRepetidos = cantRepetidos+1
			FinSi
		FinPara
		Si ind==9 Entonces
			seguir = falso
		FinSi
		ind = ind+1
	FinMientras
	Si repetidos Entonces
		Escribir 'hay ',cantRepetidos," numeros repetidos y son:"
		Para i<-0 Hasta cantRepetidos-1 Con Paso 1 Hacer
			Escribir vRepetidos[i]
		FinPara
	SiNo
		Escribir 'no hay ningun numero repetido'
	FinSi
FinAlgoritmo
