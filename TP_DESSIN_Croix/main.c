#include <stdio.h>
#include <stdlib.h>


int main() {
    int i; // I est la colonne.
    int j; // J est la ligne.
    int taille; // Valeur utilisateur.

    // On demande la largeur de la croix a l'utilisateur.
    printf("Entrez la taille souhaitee de votre croix: ");
    scanf("%d", &taille);

    // On parcour un tableau d'une hauteur et d'une largeur avec la valeur utilisateur.
    for (i = 0 ; i < taille ; i++) {

        for (j = 0 ; j < taille ; j++) {

            if (i == j || j == taille - i - 1) {
                printf("X");
            } else {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}
