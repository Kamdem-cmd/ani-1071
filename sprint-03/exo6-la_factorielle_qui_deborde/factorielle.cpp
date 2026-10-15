#include <cstdio>

// Fonction factorielle avec le type long long (64 bits)
long long factorielle(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// Fonction factorielle avec le type int (32 bits)
int factorielleInt(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    // 2 & 3. Affichage de n! et du quotient pour n de 1 à 25 en long long
    printf("--- FACTORIELLES LONG LONG (1 à 25) ---\n");
    long long precedentLL = 1;
    for (int n = 1; n <= 25; n++) {
        long long current = factorielle(n);
        long long quotient = (n == 1) ? 1 : (current / precedentLL);
        printf("n = %2d | n! = %22lld | quotient = %lld\n", n, current, quotient);
        precedentLL = current;
    }

    // 4. Affichage de n! et du quotient pour n de 1 à 17 en int
    printf("\n--- FACTORIELLES INT (1 à 17) ---\n");
    int precedentInt = 1;
    for (int n = 1; n <= 17; n++) {
        int current = factorielleInt(n);
        int quotient = (n == 1) ? 1 : (current / precedentInt);
        printf("n = %2d | n! = %12d | quotient = %d\n", n, current, quotient);
        precedentInt = current;
    }

    return 0;
}