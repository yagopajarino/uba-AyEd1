// No considera que los que viajan solos se pueden sumar a otros taxis
int llenarTaxis1(int g1, int g2, int g3) {
	int res = g3 + (g2 + 1) / 2 + (g1 + 3) / 4;
	return res;
}

// No considera que los g1 restantes pueden ir en uno de g2
int llenarTaxis2(int g1, int g2, int g3) {
	int res = g3;

	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	return res + (g2 + 1) / 2 + (g1 + 3) / 4;
}

int llenarTaxis3(int g1, int g2, int g3) {
	int res = g3;

	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	res = res + g2 / 2; // si g2 es impar esto no vale
	if (g2 % 2 == 0) { // Acá debería preguntar si g2 es impar
		if (g1 >= 2) {
			g1 = g1 - 2;
		} else {
			g1 = 0; // si | g3 - g1 | > 2 esto no vale
		}
	}

	return res + (g1 + 3) / 4;
}
