#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

int main()
{
	int age;
	char sexe[2];
	int cinema;
	char fastfood[100];
	int fastfood_visits;
	char sport[10];
	char sport_name[100];
	char reponse; // déclaration avant la boucle	

	do {
		printf("Entrez votre age : ");
		scanf("%d", &age);
		printf("Choisissez votre sexe (M/F) : ");
		scanf("%s", &sexe);
		printf("Entrez le nombre de fois ou vous allez au cinema par mois : ");
		scanf("%d", &cinema);
		printf("Entrez le fast food que vous preferez : ");
		scanf("%s", &fastfood);
		printf("Entrez le nombre de fois ou vous allez au fast food par mois : ");
		scanf("%d", &fastfood_visits);
		printf("Pratiquez-vous un sport ? (oui/non) : ");
		scanf("%s", &sport);
		printf("Entrez le nom du sport que vous pratiquez : ");
		scanf("%s", &sport_name);

		printf("\nRecapitulatif des réponses :\n");
		printf("Age : %d\n", age);
		printf("Sexe : %s\n", sexe);
		printf("Cinema : %d\n", cinema);
		printf("Fast food preferé : %s\n", fastfood);
		printf("Visites au fast food : %d\n", fastfood_visits);
		printf("Pratique un sport : %s\n", sport);
		if (sport[0] == 'o' || sport[0] == 'O') {
			printf("Nom du sport : %s\n", sport_name);
		}
		printf("Passer a l'eleve suivant (Y/N) ? ");
		scanf(" %c", &reponse);
	} while (reponse == 'y' || reponse == 'Y');

	printf("Fin du programme.");
	return 0;
}