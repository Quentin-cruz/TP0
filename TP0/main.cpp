
//On veut calculer et afficher la moyenne de 30 notes données aléatoirement par l’ordinateur (fonction random à utiliser voir documentation).
//Ecrire un programme en C++ qui fait cette moyenne.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	srand(time(NULL));
	float moy = 0;
	for (int i = 0; i < 30; i++) {
		int note = rand() % 21;
		moy += note;
	}
	moy = moy / 30;
	printf("La moyenne des 30 notes est : %f", moy);

}


