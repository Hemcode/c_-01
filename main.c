#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
	int n1 = 12;
	int n2 = 81;
	printf("n1 = %d | n2 = %d\n", n1, n2);
	
	printf("Swap...\n");
	swap(&n1, &n2);
	
	printf("n1 = %d | n2 = %d\n", n1, n2);
	return 0;
}

void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}