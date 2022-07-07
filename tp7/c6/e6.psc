Algoritmo sin_titulo
	Leer a,b
	mayor = retornaMaximo(a,b)
	Escribir mayor
FinAlgoritmo

Funcion mayor = retornaMaximo(a,b)
	mayor = 0
	Si a<0 Entonces
		a = -(a)
	FinSi
	Si b<0 Entonces
		b = -(b)
	FinSi
	Si a>b Entonces
		mayor = a
	SiNo
		mayor = b
	FinSi
FinFuncion
