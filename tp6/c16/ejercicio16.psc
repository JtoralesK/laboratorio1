Algoritmo sin_titulo
	Dimension vNum[10]
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer vNum[i]
	FinPara
	seguir = verdadero
	ind = 0
	repetidos = falso
	Mientras seguir==verdadero Hacer
		Para z<-0 Hasta 9 Con Paso 1 Hacer
			Si z!=ind Entonces
				igual = (vNum[ind])==(vNum[z])
				Si igual Entonces
					repetidos = verdadero
					seguir = falso
				FinSi
			FinSi
		FinPara
		Si ind==9 Entonces
			seguir = falso
		FinSi
		ind = ind+1
	FinMientras
	Si repetidos Entonces
		Escribir "hay numeros repetidos en la lista"
	SiNo
		Escribir "no hay ningun numero repetido"
	FinSi
FinAlgoritmo
