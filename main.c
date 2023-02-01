#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* file = fopen("read.txt", "wx");
    char* name = (char*) malloc(6 * sizeof(char));
    *(name + 0) = 'H';
    *(name + 1) = 'e';
    *(name + 2) = 'l';
    *(name + 3) = 'l';
    *(name + 4) = 'o';
    *(name + 5) = '\0';

    if (fputs(name, file) == EOF)
    {
        printf("Error");
        return 1;
    }

    free(name);
	return 0;
}