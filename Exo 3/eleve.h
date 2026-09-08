#pragma once
#include <string>
using namespace std;

class eleve
{
public:
	eleve();
	eleve(string choix_nom, int choix_age, string choix_sexe, int choix_nb_cinema, string choix_fast_food_prefere, int choix_nb_fast_food, int choix_sport, int choix_nb_sport);
	void food(string choix_fast_food_prefere,int choix nb_);
	void Sport();
private:
	string nom;
	int age;
	string sexe;
	int nb_cinema;
	string fast_food_prefere;
	int nb_fast_food;	
	string sport_p;
	int nb_sport;
};


		
