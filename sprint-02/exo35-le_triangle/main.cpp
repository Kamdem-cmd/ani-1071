#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int h = 0;
    if (!(std::cin >> h) || h <= 0) {
        return 0;
    }

    for (int k = 1; k <= h; ++k) {
        // Espaces avant les étoiles
        for (int i = 0; i < h - k; ++i) {
            std::cout << ' ';
        }
        // Étoiles
        for (int i = 0; i < 2 * k - 1; ++i) {
            std::cout << '*';
        }
        // Saut de ligne (aucune espace après)
        std::cout << '\n';
    }

    return 0;
}