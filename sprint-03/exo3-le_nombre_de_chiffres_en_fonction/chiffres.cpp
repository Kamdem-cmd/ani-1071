#include <cstdio>

// Fonction pour compter les chiffres d'un entier
int nombreDeChiffres(int n) {
    if (n == 0) {
        return 1; // Cas particulier : 0 possède un chiffre
    }
    int compte = 0;
    // Gestion des nombres négatifs : on convertit temporairement en positif (ou on gère le signe)
    // Ici, pour un comptage simple de chiffres, on peut utiliser la valeur absolue, 
    // mais attention au signe pour l'affichage.
    long long temp = n;
    if (temp < 0) {
        temp = -temp;
    }
    while (temp > 0) {
        temp /= 10;
        compte++;
    }
    return compte;
}

// Fonction pour aligner un nombre à droite dans une largeur donnée
void afficherAligne(int n, int largeur) {
    int nbChiffres = nombreDeChiffres(n);

    // Si le nombre est négatif, le signe '-' compte comme un caractère supplémentaire
    int espaces = largeur - nbChiffres;
    if (n < 0) {
        espaces -= 1; // pour le signe '-'
    }

    if (espaces < 0) {
        espaces = 0;
    }

    for (int i = 0; i < espaces; i++) {
        printf(" ");
    }
    printf("%d", n);
}

int main() {
    // 2. Affichage du résultat pour 7, 42, 1000, 2147483647 et 0
    // (Avant le cas particulier, 0 donnait 0 chiffre car la boucle while(n > 0) ne s'exécutait pas)
    printf("7 -> %d chiffres\n", nombreDeChiffres(7));
    printf("42 -> %d chiffres\n", nombreDeChiffres(42));
    printf("1000 -> %d chiffres\n", nombreDeChiffres(1000));
    printf("2147483647 -> %d chiffres\n", nombreDeChiffres(2147483647));
    printf("0 -> %d chiffres\n", nombreDeChiffres(0));

    printf("\n--- Comparaison avec %%4d ---\n");
    int valeurs[] = {7, 42, 1000, 0, 12345, -42, -7};

    for (int i = 0; i < 7; i++) {
        int n = valeurs[i];
        printf("[");
        afficherAligne(n, 4);
        printf("][");
        printf("%4d", n);
        printf("]\n");
    }

    return 0;
}