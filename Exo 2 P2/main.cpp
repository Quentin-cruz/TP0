//Ecrire un programme qui récupère une chaîne de caractères avec espaces entrée au clavier par l'utilisateur et qui
// compte le nombre de fois que chacune des lettres de l’alphabet et le nombre d’espaces ont été présents dans la phrase.
//Le résultat est ensuite affiché à l'utilisateur.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char c[100000];

	cout << "Entrez une phrase : ";
	fgets(c, sizeof(c), stdin);
	int i = 0;
	int espaces = 0;
	int lettres[26] = { 0 }; // met tous les elements du tableau a 0
	char alpha[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char alphaMaj[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	while (c[i] != '\0')
	{
		if (c[i] == ' ')
		{
			espaces++;
			i++;
		}
		else {
			for (int j = 0; j < 26; j++) {
				if (c[i] == alpha[j] || c[i] == alphaMaj[j])
				{
					lettres[j]++;
					break; // sort du for
				}
			}
			i++;
		}
	}
	for (int j = 0; j < 26; j++)
	{
		cout << alpha[j] << " : " << lettres[j] << endl;
	}
	cout << "Espaces : " << espaces << endl;

}




