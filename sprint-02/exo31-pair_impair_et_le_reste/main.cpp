#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    // 1. Parité : tester n % 2 == 0 pour inclure les négatifs
    if (n % 2 == 0) {
        std::cout << "pair\n";
    } else {
        std::cout << "impair\n";
    }

    // 2. Signe
    if (n > 0) {
        std::cout << "positif\n";
    } else if (n < 0) {
        std::cout << "negatif\n";
    } else {
        std::cout << "nul\n";
    }

    // 3. Divisibilité par 3
    if (n % 3 == 0) {
        std::cout << "divisible par 3\n";
    } else {
        std::cout << "non divisible par 3\n";
    }

    return 0;
}