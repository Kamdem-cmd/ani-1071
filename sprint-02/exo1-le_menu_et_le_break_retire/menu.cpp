#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int choix = 0;
    if (!(std::cin >> choix)) {
        return 0;
    }

    switch (choix) {
        case 1:
            std::cout << "nouvelle partie\n";
            break;
        case 2:
            std::cout << "charger\n";
            // break volontairement omis pour la seconde partie de l'exercice
        case 3:
            std::cout << "options\n";
            break;
        case 4:
            std::cout << "quitter\n";
            break;
        default:
            std::cout << "choix invalide\n";
            break;
    }

    return 0;
}