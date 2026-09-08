//On veut calculer et afficher la moyenne de 30 notes données aléatoirement par l’ordinateur(fonction random à utiliser voir documentation).
//Ecrire un programme en C++ qui fait cette moyenne.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>

int main()
{
	srand(time(NULL)); // initialisation pour le générateur de nombres aléatoires)
	int notes = 0;
	float moyenne = 0;
	for (int i = 0; i < 30; i++) {
		printf("Note %d : %d\n", i + 1, notes);
		notes = rand() % 21; //nb entre 0 et 20
		moyenne += notes;
	}
	moyenne /= 30;
	printf("La moyenne des 30 notes est : %.2f", moyenne);
	return 0;
}
