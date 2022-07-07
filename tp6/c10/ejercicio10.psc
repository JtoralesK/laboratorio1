Algoritmo sin_titulo
	Dimension vNumeros[20]
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		Leer vNumeros[i]
	FinPara
	lista = 0
	ruptura = 0
	Para i<-0 Hasta 19 Con Paso 1 Hacer
		n = vNumeros[i]
		Si i==0 Entonces
			lista = n
		SiNo
			Si n>lista Entonces
				lista = n
			SiNo
				ruptura = ruptura+1
				lista = n
			FinSi
		FinSi
	FinPara
	Escribir "la lista tuvo ",ruptura," rupturas"
FinAlgoritmo
