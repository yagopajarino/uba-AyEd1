#include "esPrimo.h"

bool esPrimo(int n) {
	if (n < 2) {
		return false;
	} else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
