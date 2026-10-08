#include <iostream>

void dessiner_sans_correction(int r) {
    std::cout << "rayon " << r << ", sans correction\n";
    for (int y = -r; y <= r; ++y) {
        for (int x = -r; x <= r; ++x) {
            if (x * x + y * y <= r * r) {
                std::cout << '#';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

void dessiner_avec_correction(int r) {
    std::cout << "rayon " << r << ", avec correction\n";
    for (int y = -r; y <= r; ++y) {
        for (int x = -r; x <= r; ++x) {
            if (x * x + y * y <= r * r) {
                std::cout << "##";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int rayons[] = {3, 8, 15};

    for (int r : rayons) {
        dessiner_sans_correction(r);
        dessiner_avec_correction(r);
    }

    return 0;
}