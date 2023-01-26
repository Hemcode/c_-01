#include <stdio.h>

int main(void)
{
	int num = 115;
	int* pnum = &num; // Les pointeurs sont des constantes.
	
	printf("La valeur stocke dans %x est %d", pnum, *pnum);
	
	return 0;
}