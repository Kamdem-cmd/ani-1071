#include <cstdio>
#include <cmath>

// 1. Fonctions de conversion avec pi approximé à 5 décimales (3.14159)
double radians(double degres) {
    const double pi = 3.14159;
    return degres * pi / 180.0;
}

double degres(double rad) {
    const double pi = 3.14159;
    return rad * 180.0 / pi;
}

// 4. Fonction avec pi précis à 16 chiffres (3.141592653589793)
double radiansPrecis(double degres) {
    const double pi = 3.141592653589793;
    return degres * pi / 180.0;
}

int main() {
    // 2. Affichage avec pi = 3.14159 (format %.12f)
    printf("sin(radians(90)) = %.12f\n", std::sin(radians(90.0)));
    printf("cos(radians(180)) = %.12f\n", std::cos(radians(180.0)));
    printf("degres(3.14159) = %.12f\n", degres(3.14159));
    printf("sin(radians(180)) = %.12f\n", std::sin(radians(180.0)));

    // 3. Affichage sans conversion (arguments directement en radians)
    printf("sin(90) = %.12f\n", std::sin(90.0));
    printf("cos(180) = %.12f\n", std::cos(180.0));

    // 4. Affichage avec radiansPrecis (pi à 16 chiffres)
    printf("\n--- Avec pi precis ---\n");
    printf("sin(radiansPrecis(90)) = %.12f\n", std::sin(radiansPrecis(90.0)));
    printf("cos(radiansPrecis(180)) = %.12f\n", std::cos(radiansPrecis(180.0)));
    printf("sin(radiansPrecis(180)) = %.12f\n", std::sin(radiansPrecis(180.0)));

    return 0;
}