//Réalisez un programme en C++ permettant de calculer dans une variable somme, la somme des éléments de t.

#include <stdio.h>

int main()
{
    float t[10] = { 1.5, 2.3, 3.1, 4.8, 5.2, 6.7, 7.4, 8.9, 9.1, 10.5 };
    float somme = 0;

    for (float val : t) {
        somme += val;
    }

    printf("Somme : %.2f\n", somme);
    return 0;
}
