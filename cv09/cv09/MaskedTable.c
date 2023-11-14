#include "MaskedTable.h"
char** allocateTable(int rows, int cols) {
	char** table = (char**)malloc(rows * sizeof(char*));
	for (int i = 0; i < rows; i++) {
		table[i] = (char*)malloc(cols * sizeof(char));
	}
	return table;
}

void freeTable(char** table, int rows) {
	for (int i = 0; i < rows; i++) {
		free(table[i]);
	}
	free(table);
}

void fillTable(char** table, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			table[i][j] = 'A' + rand() % 26;
		}
	}
}


void printTable(char ** table, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c ", table[i][j]);
		}
		printf("\n");
	}
}
void printMaskedTable(char*** mask, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c ", *mask[i][j]);
		}
		printf("\n");
	}
}

char*** createMask(char** table, int m, int n){
	char*** mask = (char***)malloc(sizeof(char **) * m);
	int numUnmasked = (int)(0.2 * m * n); // 20%
	for (int i = 0; i < m; i++) {
		mask[i] = (char**)malloc(sizeof(char *) * n);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mask[i][j] = &table[i][j];
		}
	}
	for (int k = 0; k < numUnmasked; k++) {
		int i = rand() % m;
		int j = rand() % n;
		mask[i][j] = '#';
	}
	return mask;
}
