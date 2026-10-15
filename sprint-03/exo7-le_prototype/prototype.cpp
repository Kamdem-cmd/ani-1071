#include <cstdio>

// 2. Trois prototypes écrits au-dessus de main
int multiplierParDeux(int n);
int ajouterTrois(int n);
int calculer(int n);

// Déclaration de cube en commentaire (exigence de l'étape 5)
// int cube(int n);

int main() {
    int resultat = calculer(5);
    printf("Resultat final : %d\n", resultat);

    // Appel de cube en commentaire pour que le fichier compile
    // printf("Cube : %d\n", cube(3));

    return 0;
}

// 1. Trois fonctions définies après main, s'appelant en cascade
int calculer(int n) {
    return ajouterTrois(multiplierParDeux(n));
}

int ajouterTrois(int n) {
    return n + 3;
}

int multiplierParDeux(int n) {
    return n * 2;
}