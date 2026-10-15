#include <cstdio>
#include <cmath>

// 1. Aire du disque (double)
double aire(double rayon) {
    const double pi = 3.14159;
    return pi * rayon * rayon;
}

// 1. Aire du rectangle (double, double)
double aire(double largeur, double hauteur) {
    return largeur * hauteur;
}

// 2. Aire du triangle par la formule de Héron (double, double, double)
double aire(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double delta = p * (p - a) * (p - b) * (p - c);
    if (delta < 0) {
        return -1.0; // Indicateur d'erreur pour un triangle impossible
    }
    return std::sqrt(delta);
}

// 5. Ajout de l'aire du carré (int)
int aire(int cote) {
    return cote * cote;
}

/* 
   6. Essai de surcharge par le seul retour (refusé par le compilateur) :
   double aire(int cote) {
       return static_cast<double>(cote * cote);
   }
*/

int main() {
    // 3. Tests des trois fonctions initiales
    printf("Aire du disque (rayon 2) : %.5f\n", aire(2.0));
    printf("Aire du rectangle (3x4) : %.5f\n", aire(3.0, 4.0));
    printf("Aire du triangle (3, 4, 5) : %.5f\n", aire(3.0, 4.0, 5.0));

    // Triangle de côtés 1, 1 et 3 (inégalité triangulaire non respectée : 1 + 1 < 3)
    double aireImpossible = aire(1.0, 1.0, 3.0);
    printf("Aire du triangle (1, 1, 3) : %.5f (triangle impossible)\n", aireImpossible);

    // 4. Affichage de aire(2) et aire(2.5)
    // Après l'ajout de int aire(int cote), aire(2) appelle la version int, et aire(2.5) appelle double aire(double rayon)
    printf("aire(2) = %f\n", static_cast<double>(aire(2)));
    printf("aire(2.5) = %f\n", aire(2.5));

    return 0;
}