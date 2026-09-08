#include "eleve.h"
#include <iostream>
using namespace std;

eleve::eleve(string choix_nom, int choix_age, string choix_sexe, int choix_nb_cinema, string choix_fast_food_prefere, int choix_nb_fast_food, int choix_sport, int choix_nb_sport)
{
	nom = choix_nom;
	age = choix_age;
	sexe = choix_sexe;
	nb_cinema = choix_nb_cinema;
	fast_food_prefere = choix_fast_food_prefere;
	nb_fast_food = choix_nb_fast_food;
	sport_p = choix_sport;
	nb_sport = choix_nb_sport;


}

eleve::~eleve()
{

}

void eleve::food() {
	cout << "qu'elle est ton fast food prefere :";
	cin >> choix_fast_food_prefere;
	cout << "\ncombien de fois tu y vas par mois ?";
	scanf_s("%d", &choix_nb_fast_food);
	return;
}

void eleve::Sport() {
	cout << "qu'elle sport pratique tu ? si aucun repond 'aucun':";
	string temp;
	cin >> temp;
	if ((temp.compare("aucun")) == 0) {
		return;
	}
	else {
		xhoix_sport_p = temp;
		cout << "combien de fois tu y vas par mois ?";
		scanf_s("%d", &choix_nb_sport);
		return;
	}
}