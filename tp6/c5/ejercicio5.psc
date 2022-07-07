Algoritmo sin_titulo
	Dimension vNumeros[10]
	Para a<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNumeros[a]
	FinPara
	menorImpar = 0
	mayorPar = 0
	Para b<-0 Hasta 9 Con Paso 1 Hacer
		n = vNumeros[b]
		resto = (n%2)==0
		Si resto Entonces
			Si mayorPar==0 Entonces
				mayorPar = n
			SiNo
				Si n>mayorPar Entonces
					mayorPar = n
				FinSi
			FinSi
		SiNo
			Si menorImpar==0 Entonces
				menorImpar = n
			SiNo
				Si n<menorImpar Entonces
					menorImpar = n
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir "mayor par ",mayorPar
	Escribir "menor impar  ",menorImpar
FinAlgoritmo
