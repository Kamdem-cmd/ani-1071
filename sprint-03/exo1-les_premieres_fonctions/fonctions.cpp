#include <iostream>

// Déclarations (prototypes) des fonctions demandées
int carre(int n);
bool estPair(int n);
int max3(int a, int b, int c);
double moyenne(int a, int b);
bool estImpair(int n);

int main() {
    std::cout << "UTILISATION DES FONCTIONS" << std::endl;
    
    // Essais de carre (avec positif, zéro et négatif)
    std::cout << "carre(4) = " << carre(4) << std::endl;
    std::cout << "carre(0) = " << carre(0) << std::endl;
    std::cout << "carre(-5) = " << carre(-5) << std::endl;
    
    // Essais de estPair (avec pair, impair et négatif)
    std::cout << "estPair(4) = " << (estPair(4) ? "vrai" : "faux") << std::endl;
    std::cout << "estPair(3) = " << (estPair(3) ? "vrai" : "faux") << std::endl;
    std::cout << "estPair(-2) = " << (estPair(-2) ? "vrai" : "faux") << std::endl;
    
    // Essais de max3 (avec le plus grand en 1ère, 2ème et 3ème place, et des négatifs)
    std::cout << "max3(10, 5, 2) = " << max3(10, 5, 2) << std::endl;   // Plus grand en 1ère place
    std::cout << "max3(-1, 8, 3) = " << max3(-1, 8, 3) << std::endl;   // Plus grand en 2ème place
    std::cout << "max3(0, -4, 15) = " << max3(0, -4, 15) << std::endl; // Plus grand en 3ème place
    
    // Essais de moyenne (avec valeurs paires et impaires pour tester le rendu décimal)
    std::cout << "moyenne(16, 8) = " << moyenne(16, 8) << std::endl;
    std::cout << "moyenne(3, 4) = " << moyenne(3, 4) << std::endl;
    std::cout << "moyenne(-5, 10) = " << moyenne(-5, 10) << std::endl;
    
    // Essai de estImpair (exigence de l'étape 5)
    std::cout << "estImpair(7) = " << (estImpair(7) ? "vrai" : "faux") << std::endl;
    std::cout << "estImpair(-3) = " << (estImpair(-3) ? "vrai" : "faux") << std::endl;
    
return 0;
}

int carre(int n) {
    return n * n;
}

bool estPair(int n) {
    return n % 2 == 0;
}

int max3(int a, int b, int c) {
    int m = a;
    if (b > m) {
        m = b;
    }
    if (c > m) {
        m = c;
    }
    return m;
}

double moyenne(int a, int b) {
    return (a + b) / 2.0;
}

bool estImpair(int n) {
    return n % 2 == 1;
}