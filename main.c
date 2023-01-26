#include <stdio.h>
#include <string.h>



struct Livre
{
	char titre[20];
	char auteur[20];
	int year;
	
};

typedef struct Livre Livre;

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

void presentation(Livre object)
{
	printf("==================\n");
	printf("Auteur: %s\n", object.auteur);
	printf("Titre : %s\n", object.titre);
	printf("Annee : %d\n", object.year);
	printf("==================\n");
}