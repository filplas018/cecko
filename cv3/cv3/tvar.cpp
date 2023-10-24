#include "kruh.h"
#include "ctverec.h"
#include "trojuhelnik.h"
#include <stdio.h>

float tvar(char volba) {
	float vysledek = 0;
	switch (volba) {
	case 'k': {
		double polomer;
		printf("Zadej polomer kruhu\n");
		polomer = scanf_s("%f", &polomer);
		vysledek = obsah_kruhu(polomer);
		break;
	}
	case 'c': {
		double strana;
		printf("Zadej stranu ctverce\n");
		strana = scanf_s("%f", &strana);
		vysledek = obsah_ctverce(strana);
		break;
	}
	case 't': {
		double a, b, c;
		printf("Zadej stranu a\n");
		a = scanf_s("%f", &a);
		printf("Zadej stranu b\n");
		b = scanf_s("%f", &b);
		printf("Zadej stranu c\n");
		c = scanf_s("%f", &c);
		vysledek = obsah_trojuhelniku(a, b, c);
		break;
	}
	default:

		return -666;
	}
	return vysledek;
}