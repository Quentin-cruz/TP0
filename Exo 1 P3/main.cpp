//Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée en argument un mot de passe.
//Pour que ce mot de passe soit gardé secret, vous ferez en sorte qu’à chaque appui sur une touche, on fasse apparaître une étoile.
//Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le mot de passe réel.
// 
//NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
//Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.

#include <iostream>
#include <conio.h>


void mot_de_passe(std::string &mdp) {
	int getche = 0;
	while (getche != 13) {
		getche = _getch();
		if (getche != 13) {
			mdp += (char)getche;
			printf("*");
		}
	}

}

int main() {
	std::string mdp	;
	mot_de_passe(mdp);
	std::cout << "\nMot de passe : " << mdp ; 
	return 0;
}