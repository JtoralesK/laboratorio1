Algoritmo sin_titulo
	Dimension arrayNumeros[10]
	total = 0
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Leer arrayNumeros[a]
		total = total+arrayNumeros[a]
	FinPara
	promedio = total/10
	Escribir "el promedio es de:",promedio
	Para b<-0 Hasta 9 Con Paso 1 Hacer
		Si arrayNumeros[b]>promedio Entonces
			Escribir arrayNumeros[b]," es mayor al promedio"
		FinSi
	FinPara
FinAlgoritmo
