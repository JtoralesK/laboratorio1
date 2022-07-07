Algoritmo sin_titulo
	Leer n
	imprime(n)
FinAlgoritmo

Funcion imprime(n)
	seguir = falso
	i = 0
	Mientras seguir==falso Hacer
		Si n>0 Entonces
			i = i+1
			Si (n%i)==0 Entonces
				Escribir 'divisor:',i
			FinSi
		SiNo
			i = i-1
			Si (n%i)==0 Entonces
				Escribir 'divisor:',i
			FinSi
		FinSi
		Si i==n Entonces
			seguir = verdadero
		FinSi
	FinMientras
FinFuncion
