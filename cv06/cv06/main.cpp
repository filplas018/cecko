#include "alocateArray.h"
#include "fillArray.h"
#include "printArray.h"
#include <stdio.h>

void main() {
	char* arr = alocateArray(10);
	fillArray(arr, 10);
	printArray(arr, 10);


	getchar();
}