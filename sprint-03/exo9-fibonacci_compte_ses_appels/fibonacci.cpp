#include <cstdio>

// 2. Variable globale pour compter le nombre total d'appels
long long gAppels = 0;

// 1. Fonction récursive de Fibonacci
long long fib(int n) {
    gAppels++; // Augmente le compteur à chaque entrée, avant tout test
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// 4. Fonction itérative de Fibonacci avec une boucle
long long fibBoucle(int n, long long &tours) {
    tours = 0;
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    long long a = 0;
    long long b = 1;
    long long c = 0;
    for (int i = 2; i <= n; i++) {
        tours++;
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // 3 & 4. Affichage pour n de 10 à 35 (par pas de 5 pour la lisibilité)
    printf("  n  |      fib(n) (rec)  |    Appels (rec)  |     fib(n) (boucle) |   Tours (boucle)\n");
    printf("-----------------------------------------------------------------------------------\n");
    for (int n = 10; n <= 35; n += 5) {
        gAppels = 0;
        long long resRec = fib(n);
        long long toursBoucle = 0;
        long long resBoucle = fibBoucle(n, toursBoucle);
        printf("%4d | %18lld | %16lld | %19lld | %16lld\n", n, resRec, gAppels, resBoucle, toursBoucle);
    }

    // 5. Test pour des valeurs plus grandes (40, 42, 44) pour mesurer l'explosion combinatoire
    printf("\n--- Valeurs elevees (Recursif pur) ---\n");
    int cibles[] = {40, 42, 44};
    for (int i = 0; i < 3; i++) {
        int n = cibles[i];
        gAppels = 0;
        long long res = fib(n);
        printf("fib(%d) = %lld (Appels effectues : %lld)\n", n, res, gAppels);
    }

    return 0;
}