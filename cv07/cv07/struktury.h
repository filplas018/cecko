typedef struct {
	char *nazev;
	float cena;
} Polozka;

typedef struct {
	long datum;
	Polozka *polozky;
	int pocet_polozek;
	float suma;
} Uctenka;