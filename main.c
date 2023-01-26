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
	Personne personne1;
	strcpy(personne1.name, "Hemdy");
	personne1.age = 13;
	
	sePresenter(personne1);
	return 0;
}

int estMajeur(Personne personne)
{
	return personne.age >= 18;
}

void sePresenter(Personne personne)
{
	printf("Je m'appelle %s et j'ai %d ans.\n", personne.name, personne.age);
	printf("estMajeur: %d\n", estMajeur(personne));
}