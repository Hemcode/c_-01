#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pnum = (int*) malloc(sizeof(int));
	*pnum = 15;
	
	printf("Value   : %d\n", *pnum);
	printf("Adresse : %x\n", pnum);
	
	free(pnum);
	return 0;
}