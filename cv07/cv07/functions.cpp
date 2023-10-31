#include "struktury.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <chrono>
#include <ctime>  
#include "functions.h"


Polozka vytvor_polozku(char *nazev, float cena) {
	Polozka polozka;
	polozka.cena = cena;
	polozka.nazev = strdup(nazev);
	return polozka;
}

Uctenka vytvor_ucet(long datum) {
	Uctenka nova_uctenka;
	nova_uctenka.datum = datum;
	nova_uctenka.polozky = NULL;
	nova_uctenka.pocet_polozek = 0;
	nova_uctenka.suma = 0.0;
	return nova_uctenka;
}

void pridat_polozku(Uctenka *ucet,  Polozka *polozka) {
	ucet->pocet_polozek++;
	ucet->polozky = (Polozka *)realloc(ucet->polozky, ucet->pocet_polozek * sizeof(Polozka));
	ucet->polozky[ucet->pocet_polozek - 1] = *polozka;
	ucet->suma += polozka->cena;
}

float celkova_cena( Uctenka *ucet) {
	return ucet->suma;
}

void najdi_ucet( Uctenka *uctenky, int pocet_uctenek,  char *nazev_polozky) {
	int nalezeno = 0;
	for (int i = 0; i < pocet_uctenek; i++) {
		for (int j = 0; j < uctenky[i].pocet_polozek; j++) {
			if (strcmp(uctenky[i].polozky[j].nazev, nazev_polozky) == 0) {
				printf("Nalezena úètenka èíslo %d s položkou '%s'. Cena: %.2f\n", i + 1, nazev_polozky, uctenky[i].suma);
				nalezeno = 1;
				break;
			}
		}
	}
	if (!nalezeno) {
		printf("Nenalezena žádná úètenka s položkou '%s'.\n", nazev_polozky);
	}
}