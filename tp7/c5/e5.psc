Algoritmo sin_titulo
	Leer a,b,c
	Escribir retornaMaximo(a,b,c)
FinAlgoritmo

Funcion mayor = retornaMaximo(a,b,c)
	Si a>b Entonces
		Si a>c Entonces
			mayor = a
		FinSi
	SiNo
		Si b>c Entonces
			mayor = b
		SiNo
			mayor = C
		FinSi
	FinSi
FinFuncion
