
//On veut calculer et afficher la moyenne de 30 notes données aléatoirement par l’ordinateur (fonction random à utiliser voir documentation).
//Ecrire un programme en C++ qui fait cette moyenne.

#include <iostream>
#include <stdio.h>
int main()
{
	int n;
	std::cout << "Entrez un nombre entier : ";
	int somme = 0;
	int i = 1;
	scanf_s("%d", &n);
	while (i <= n) {
		somme += i;
		i++;
	}
	printf("La somme des entiers de 1 a %d est : %d", n, somme);
	return 0;
}


