#include <stdio.h>
#include <string.h>

struct Livre
{
	char titre[20];
	char auteur[20];
	int year;
};

int main(void)
{
	struct Livre livre1;
	strcpy(livre1.titre, "Harry Potter");
	strcpy(livre1.auteur, "J.K. Rolling");
	livre1.year = 1997;
	return 0;
}