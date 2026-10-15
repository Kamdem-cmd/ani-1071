#include <cstdio>

// Fonction PGCD par l'algorithme d'Euclide
int pgcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Fonction PPCM standard (basée sur le produit)
int ppcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / pgcd(a, b);
}

// Fonction PPCM corrigée pour éviter le débordement (overflow) dans un int
int ppcmCorrige(int a, int b) {
    if (a == 0 || b == 0) return 0;
    // On divise d'abord par le PGCD avant de multiplier pour garder les valeurs intermédiaires petites
    return (a / pgcd(a, b)) * b;
}

// Fonctions de comptage des tours pour l'algorithme d'Euclide
int compterToursEuclide(int a, int b) {
    int tours = 0;
    while (b != 0) {
        tours++;
        int r = a % b;
        a = b;
        b = r;
    }
    return tours;
}

// Fonctions de comptage des tours pour la méthode par soustractions successives
int compterToursSoustraction(int a, int b) {
    int tours = 0;
    while (a != b) {
        tours++;
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return tours;
}

int main() {
    // 4. Vérification de ppcm(4, 6) et de deux autres couples
    printf("ppcm(4, 6) = %d (attendu : 12)\n", ppcm(4, 6));
    printf("ppcm(12, 15) = %d\n", ppcm(12, 15));
    printf("ppcm(7, 5) = %d\n", ppcm(7, 5));

    // 5. Comptage des tours sur (1071, 462) et (1000000, 1)
    printf("\n--- Comptage des tours ---\n");
    printf("Couple (1071, 462) :\n");
    printf("  Euclide : %d tours\n", compterToursEuclide(1071, 462));
    printf("  Soustractions : %d tours\n", compterToursSoustraction(1071, 462));

    printf("Couple (1000000, 1) :\n");
    printf("  Euclide : %d tours\n", compterToursEuclide(1000000, 1));
    printf("  Soustractions : %d tours\n", compterToursSoustraction(1000000, 1));

    // 6. Test du débordement avec ppcm(60000, 40000)
    printf("\n--- Test du débordement ---\n");
    printf("ppcm standard(60000, 40000) = %d\n", ppcm(60000, 40000));
    printf("ppcm corrigé(60000, 40000) = %d\n", ppcmCorrige(60000, 40000));

    return 0;
}