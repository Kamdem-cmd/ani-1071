#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int count = 0;
    if (!(std::cin >> count)) {
        return 0;
    }

    for (int i = 0; i < count; ++i) {
        int annee = 0;
        std::cin >> annee;

        // Bissextile si (divisible par 400) OU (divisible par 4 ET NON par 100)
        if ((annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0)) {
            std::cout << "oui\n";
        } else {
            std::cout << "non\n";
        }
    }

    return 0;
}