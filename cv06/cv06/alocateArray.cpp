#include <stdio.h>
#include <stdlib.h>

char* alocateArray(int delka) {
	if (delka <= 0) {
		return NULL;
	}
	//char *p_char;
	return (char *)malloc(delka * sizeof(char));
	//return p_char;
}