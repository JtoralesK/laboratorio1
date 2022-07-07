Algoritmo sin_titulo
	Dimension vNumeros[20]
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		Leer vNumeros[i]
	FinPara
	lista = 0
	ordenado = verdadero
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		n = vNumeros[i]
		Si i==0 Entonces
			lista = n
		SiNo
			Si n>lista && ordenado==verdadero Entonces
				lista = n
				ordenado = verdadero
			SiNo
				ordenado = falso
			FinSi
		FinSi
	FinPara
	Si ordenado Entonces
		Escribir "la lista esta ordenada"
	SiNo
		Escribir "la lista NO ESTA ordenada"
	FinSi
FinAlgoritmo
