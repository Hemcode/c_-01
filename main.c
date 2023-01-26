#include <stdio.h>
#include <string.h>

typedef struct {char titre[35]; char auteur[20]; int year;} Object;

void presentation();

int main(void)
{
	Object livres[3];
	
	strcpy(livres[0].titre, "Hello World");
	strcpy(livres[0].auteur, "Hemdy Mameche");
	livres[0].year = 2029;
	
	strcpy(livres[1].titre, "Le seigneur des annaux");
	strcpy(livres[1].auteur, "J.R.R. Tolkien");
	livres[1].year = 1954;
	
	strcpy(livres[2].titre, "The Shining");
	strcpy(livres[2].auteur, "Stephen King");
	livres[2].year = 1977;
	
	strcpy(livres[3].titre, "IT");
	strcpy(livres[3].auteur, "Stephen King");
	livres[3].year = 1986;
	
	for (int i = 0; i <= 3; i++)
	{
		presentation(livres[i]);
	}
	return 0;
}

void presentation(Object object)
{
	printf("==================\n");
	printf("Auteur: %s\n", object.auteur);
	printf("Titre : %s\n", object.titre);
	printf("Annee : %d\n", object.year);
	printf("==================\n");
}