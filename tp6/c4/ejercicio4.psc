Algoritmo sin_titulo
	Dimension vNumeros[10]
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNumeros[a]
	FinPara
	maximo = 0
	Para b<-0 Hasta 9 Con Paso 1 Hacer
		Si vNumeros[b]<0 Entonces
			num = -(vNumeros[b])
		SiNo
			num = vNumeros[b]
		FinSi
		Si num>maximo Entonces
			maximo = num
		FinSi
	FinPara
	Escribir "valor maximo absoluto del vector:",maximo
FinAlgoritmo
