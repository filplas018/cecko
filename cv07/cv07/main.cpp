#include "functions.h"
#include "struktury.h"

void main() {
	Uctenka uctenky[3];
	uctenky[0] = vytvor_ucet(1698757161);
	uctenky[1] = vytvor_ucet(1698757161);
	uctenky[2] = vytvor_ucet(1698757161);

	Polozka polozka1 = vytvor_polozku("Chléb", 2.0);
	Polozka polozka2 = vytvor_polozku("Mléko", 1.0);
	Polozka polozka3 = vytvor_polozku("Sýr", 3.5);

	pridat_polozku(&uctenky[0], &polozka1);
	pridat_polozku(&uctenky[0], &polozka2);

	pridat_polozku(&uctenky[1], &polozka2);
	pridat_polozku(&uctenky[1], &polozka3);

	pridat_polozku(&uctenky[2], &polozka1);
	pridat_polozku(&uctenky[2], &polozka3);

	// Výpoèet celkové ceny úètenek
	for (int i = 0; i < 3; i++) {
		printf("Uctenka %d - Celková cena: %.2f\n", i + 1, celkova_cena(&uctenky[i]));
	}


	najdi_ucet(uctenky, 3, "Chléb");
	najdi_ucet(uctenky, 3, "Mléko");
	najdi_ucet(uctenky, 3, "Rajèata");




}