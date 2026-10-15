#include <cstdio>

// Déclaration de la fonction avant main, avec la valeur par défaut du trait
void rectangle(int hauteur, int largeur, char trait = '#');

int main() {
    // Description des trois essais menés :
    // Essai 1 (Valeur par défaut dans la déclaration et la définition) : Erreur de reandéfinition.
    // Essai 2 (Valeur par défaut dans la définition après main seulement) : Erreur lors de l'appel à 2 arguments (argument manquant car non visible avant main).
    // Essai 3 (Valeur par défaut au milieu sur le deuxième paramètre) : Erreur de syntaxe (paramètre sans valeur par défaut suivant un paramètre avec valeur par défaut).

    // Dessin de trois rectangles avec trois traits différents, dont un sans le troisième argument
    rectangle(3, 5, '*');
    printf("\n");
    rectangle(4, 6, 'o');
    printf("\n");
    rectangle(3, 4); // Utilise la valeur par défaut '#'

    return 0;
}

// Définition de la fonction après main (sans répéter la valeur par défaut)
void rectangle(int hauteur, int largeur, char trait) {
    for (int y = 0; y < hauteur; y++) {
        for (int x = 0; x < largeur; x++) {
            bool bord = (y == 0 || y == hauteur - 1 || x == 0 || x == largeur - 1);
            printf("%c", bord ? trait : ' ');
        }
        printf("\n");
    }
}