//Soit un tableau tab, de 40 entiers au plus, initialisé par l’utilisateur qui arrêtera la saisie en tapant –1, vous créerez un programme en langage C++ qui permette, 
// après l’initialisation et l’affichage, de trier ce tableau en ordre croissant(méthode du tri à bulle ou par sélection au choix) et de l’afficher à nouveau.
//Contrainte : Vous n’utiliserez qu’un seul tableau(tab).

#include <iostream>
#include <stdio.h>

int main()
{
	int tab[40];
	int i = 0;
	int reponse = 0;
	while (i < 40)
		{
		scanf("%d", &tab[i]);
		if (tab[i] == -1) {
			break;
		}
		i++;
	}

	// Tri à bulle
	for (int j = 0; j < i - 1; j++) {
		for (int k = 0; k < i - j - 1; k++) {
			if (tab[k] > tab[k + 1]) {
				int temp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = temp;
			}
		}
	}

	// Affichage du tableau trié
	for (int j = 0; j < i; j++) {
		printf("%d ", tab[j]);
	}
	printf("\n");

	return 0;
}