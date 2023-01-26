#include <stdio.h>
#include <string.h>

struct Livre
{
	char titre[20];
	char auteur[20];
	int year;
	
};

void presentation();

int main(void)
{
	struct Livre livre1;
	strcpy(livre1.titre,/* Nom du livre */ "Harry Potter");
	strcpy(livre1.auteur,/* Nom de l'auteur */ "J.K. Rowling");
	livre1.year = 1997;
	
	presentation(livre1);
	return 0;
}

void presentation(struct Livre object)
{
	printf("Le nom du livre est %s, l'auteur est %s et il date de %d.\n", object.titre, object.auteur, object.year);
}