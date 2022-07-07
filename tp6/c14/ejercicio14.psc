Algoritmo sin_titulo
	Escribir 'ingresar 10 n para una lista'
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	cant = 0
	Dimension vNumPrimos[10]
	indice = 0
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		n = vNum[i]
		Si n>0 Entonces
			pos = verdadero
		SiNo
			pos = falso
		FinSi
		divisores = 0
		seguir = verdadero
		contdiv = 0
		Mientras seguir==verdadero Hacer
			Si pos Entonces
				contdiv = contdiv+1
				seguir = (divisores<=2)&& contdiv<n
			SiNo
				contdiv = contdiv-1
				seguir = (divisores<=2)&& contdiv>n
			FinSi
			divisor = (n%contdiv)==0
			Si divisor Entonces
				divisores = divisores+1
			FinSi
		FinMientras
		Si divisores<=2 Entonces
			vNumPrimos[indice] = n
			indice = indice+1
		FinSi
	FinPara
	Escribir 'en esta lista hay ',indice,' n primos y son:'
	indice = indice-1
	Para i<-0 Hasta indice Con Paso 1 Hacer
		Escribir vNumPrimos[i]
	FinPara
FinAlgoritmo
