#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* file;
	
	file = fopen("read.txt", "r");
	if (file == NULL)
	{
		printf("Error Fopen\n");
		return 1;
	}
	
	char c;
	while((c = fgetc(file)) != EOF)
		printf("%c", c);
	return 0;
}