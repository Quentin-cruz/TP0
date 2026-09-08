//Ecrire une fonction transforme qui permet de transformer les caractères minuscules en majuscule dans une chaine passée en argument.
//La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres qui ont subies une modification.

#include <iostream>
#include <conio.h>
using namespace std;
void transforme(string &c, int &lettresModifiees) {
	int i = c.length();
	int temp = 0;
	while (i > 0)
	{
		temp = c[i - 1];
		if (temp >= 97 && temp <= 122) // code ascii des lettres minuscules
		{
			temp -= 32; // convertit le code ascii en majuscule
			c[i - 1] = temp;
			lettresModifiees++;
		}
		i--;
	}
	
}
int main() {
	int lettresModifiees = 0;
	string c;
	char temp = 0;
	cout << "Entrez une phrase : ";
	while (temp != 13) {
		temp = _getch();
		c += temp;
		cout << temp;
	}
	transforme(c, lettresModifiees);
	cout << "Phrase transformee : " << c << endl;
	cout << "Nombre de lettres modifiees : " << lettresModifiees << endl;
	return 0;}
