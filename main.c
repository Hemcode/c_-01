#include <stdio.h>

typedef struct 
	{
		char name[15];
		int age;
	} Personne;

int estMajeur(Personne personne);
void sePresenter(Personne personne);

int main(void)
{
	Personne personnes[2];
	int nbPersonnes = 0;
	
	strcpy(personnes[0].name, "Hemdy");
	personnes[0].age = 13;
	nbPersonnes += 1;
	
	strcpy(personnes[1].name, "Soulaymane");
	personnes[1].age = 19;
	nbPersonnes += 1;
	
	for (int i = 0; i < nbPersonnes/* nbPersonnes est exclu de la liste. */; i++)
		sePresenter(personnes[i]);
	
	return 0;
}

int estMajeur(Personne personne)
{
	return personne.age >= 18;
}

void sePresenter(Personne personne)
{
	printf("=======================================\n");
	printf("Je m'appelle %s et j'ai %d ans.\n", personne.name, personne.age);
	printf("estMajeur: %d\n", estMajeur(personne));
	printf("=======================================\n");
}