Algoritmo sin_titulo
	Escribir 'Numero del jugador:'
	Leer nJugador
	primerLugar = 0
	primerLugarTiempo = 0
	segundoLugar = 0
	segundoLugarTiempo = 0
	tercerLugar = 0
	tercerLugarTiempo = 0
	v = 0
	Mientras nJugador!=-1 Hacer
		v = v+1
		Escribir '#Jugador numero ',nJugador
		nivelMasLargo = 0
		tiempoNivelMasLargo = 0
		tiempoTotalJuego = 0
		Para i<-1 Hasta 10 Con Paso 1 Hacer
			Escribir 'Nivel ',i
			Escribir 'Tiempo en finalizar nivel ',i,':'
			Leer minutos
			Si minutos>tiempoNivelMasLargo Entonces
				nivelMasLargo = i
				tiempoNivelMasLargo = minutos
			FinSi
			tiempoTotalJuego = tiempoTotalJuego+minutos
		FinPara
		Escribir 'nivel mas largo: nivel ',nivelMasLargo,',',tiempoNivelMasLargo,' minutos'
		Si primerLugar==0 Entonces
			primerLugar = nJugador
			primerLugarTiempo = tiempoTotalJuego
		SiNo
			Si tiempoTotalJuego<primerLugarTiempo Entonces
				tercerLugar = segundoLugar
				tercerLugarTiempo = segundoLugarTiempo
				segundoLugar = primerLugar
				segundoLugarTiempo = primerLugarTiempo
				primerLugar = nJugador
				primerLugarTiempo = tiempoTotalJuego
			SiNo
				Si segundoLugar==0 Entonces
					segundoLugar = nJugador
					segundoLugarTiempo = tiempoTotalJuego
				SiNo
					Si tiempoTotalJuego<segundoLugarTiempo Entonces
						tercerLugar = segundoLugar
						tercerLugarTiempo = segundoLugarTiempo
						segundoLugar = nJugador
						segundoLugarTiempo = tiempoTotalJuego
					SiNo
						Si tercerLugar==0 Entonces
							tercerLugar = nJugador
							tercerLugarTiempo = tiempoTotalJuego
						SiNo
							Si tiempoTotalJuego<tercerLugarTiempo Entonces
								tercerLugar = nJugador
								tercerLugarTiempo = tiempoTotalJuego
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'Numero del jugador:'
		Leer nJugador
	FinMientras
	Escribir 'primer lugar : jugador ',primerLugar,',',primerLugarTiempo,' minutos'
	Escribir 'segundo lugar : jugador ',segundoLugar,',',segundoLugarTiempo,' minutos'
	Escribir 'tercer lugar : jugador',tercerLugar,',',tercerLugarTiempo,' minutos'
FinAlgoritmo
