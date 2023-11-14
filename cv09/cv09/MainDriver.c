#include "MaskedTable.h";
int main() {
	int rows = 4;
	int cols = 5;
	char ** table = allocateTable(rows, cols);

	fillTable(table, rows, cols);
	printTable(table, rows, cols);

	// Uvolnìní pamìti
	//freeTable(maskedTable.table, rows);
	char*** mask = createMask(table, rows, cols);
	printMaskedTable(mask);

	getchar();
}