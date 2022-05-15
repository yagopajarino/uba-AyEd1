int puntaje(int b) {
	int res;
	if (b < 10) {
		res = 2 * b;
	} else {
		res = b;
	}
	if (b % 3 == 0) {
		res = res + 10;
	} else {
		res = res - 10;
	}
	return res;
}

/*
Especificación

Un juego de azar consiste en sacar bolitas y sumar puntos según la siguiente regla:
Si la cantidad de bolitas es menor que 10, gana dos puntos por cada bolita que sacó. Si no, un punto por cada una.
Además, si la cantidad de bolitas que sacó es múltiplo de 3, gana 10 puntos. Si no, pierde 10 puntos.*/
