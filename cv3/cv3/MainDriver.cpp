#include "tvar.h"
#include <stdio.h>

int main() {
	printf("Zadej volbu: kRUH / cTVEREC / tROJUHELNIK: \n");
	char volba = getchar();
	float vysledek = tvar(volba);
	printf("%f", vysledek);


	getchar();
	return 0;
}