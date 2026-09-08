//Ecrire une fonction transforme qui permet de transformer les caractères minuscules en majuscule dans une chaine passée en argument.
//La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres qui ont subies une modification.


int main() {
	char alpha[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char alphaMaj[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char c[100000];
	std::cout << "Entrez une phrase : ";
	fgets(c, sizeof(c), stdin);
	int i = 0;
	int lettresModifiees = 0;

	while (c[i] != '\0')
	{
		for (int j = 0; j < 26; j++) {
			if (c[i] == alpha[j])
			{
				c[i] = alphaMaj[j];
				lettresModifiees++;
				break; // sort du for
			}
		}
		i++;
	}
	std::cout << "Phrase transformée : " << c << std::endl;
	std::cout << "Nombre de lettres modifiées : " << lettresModifiees << std::endl;
	return 0;
}
