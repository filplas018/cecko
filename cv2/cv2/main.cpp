#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

#define MAX_LINE_LENGTH 2
#define MAX 100
//modrá = *, èervená = +, bílá = -



int main() {

	char line[MAX_LINE_LENGTH] = { 0 };
	int sirka;
	int vyska;
	FILE *txt;
	FILE *bin;
	txt = fopen("CONFIG.TXT", "r");
	if (txt == NULL) {
		return 10;
	}
	if (fscanf(txt, "%d", &sirka) != 1) {

		fclose(txt);
		return 1;
	}

	if (fscanf(txt, "%d", &vyska) != 1) {
		fclose(txt);
		return 1;
	}
	fclose(txt);
	for (int i = 0; i < vyska/2; i++) {
		for (int j = 0; j < sirka; j++) {
			if (j < (sirka/2)) {
				printf("*");
				
			}
			else {
				printf("-");
				
			}
		}

		printf("\n");
	}
	for (int i = 0; i < vyska/2; i++) {
		for (int j = 0; j < sirka-1; j++) {
			if (j > (sirka -j) / 2) {
				printf("+");
				
				
			}
			else {
				printf("*");
			}
		}

		printf("\n");
	}






	getchar();
	return 0;
}
