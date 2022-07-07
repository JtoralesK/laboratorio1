Algoritmo sin_titulo
	Dimension array[10]
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Leer array[a]
	FinPara
	ultimo = 0
	ultimoPo = 0
	anteUltimo = 0
	antePo = 0
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		n = array[a]
		resto = n%2
		Si resto==0 Entonces
			Si ultimo==0 Entonces
				ultimo = n
				ultimoPo = a
			SiNo
				anteUltimo = ultimo
				antePo = ultimoPo
				ultimo = n
				ultimoPo = a
			FinSi
		FinSi
	FinPara
	Escribir 'anteultimo n par:',anteUltimo," y su posicion ",antePo
	Escribir 'Ultimo n par:',ultimo," y su posicion ",ultimoPo
FinAlgoritmo
