#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	char** table;
	int rows;
	int cols;
} MaskedTable;

char** allocateTable(int rows, int cols);


void freeTable(char** table, int rows);

void fillTable(char** table, int rows, int cols);


void printTable(char** table, int cols, int rows);

// Funkce pro vytvoøení masky pro kódovací tabulku
char*** createMask(char** table, int m, int n);