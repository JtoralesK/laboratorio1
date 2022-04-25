Algoritmo sin_titulo
	Escribir "Ingresa la cantidad de numeros que queres de la sucecion de Fibonacci:" 
	Leer n
	primero = 0
	segundo = 1
	suma = 0
	aux = 0
	v = 0
	Para i<-1 Hasta n Con Paso 1 Hacer
		Si v==0 Entonces
			suma = primero+segundo
			v = v+1
		SiNo
			Si v==1 Entonces
				suma = suma+segundo
				v = v+1
			SiNo
				aux = suma
				suma = segundo+suma
				segundo = aux
			FinSi
		FinSi
		Escribir suma
	FinPara
FinAlgoritmo
