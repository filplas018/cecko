#pragma once


Polozka vytvor_polozku(char *nazev, float cena);
Uctenka vytvor_ucet( long datum);
float celkova_cena( Uctenka *ucet);
void najdi_ucet( Uctenka *uctenky, int pocet_uctenek, char *nazev_polozky);
void pridat_polozku(Uctenka *ucet,  Polozka *polozka);