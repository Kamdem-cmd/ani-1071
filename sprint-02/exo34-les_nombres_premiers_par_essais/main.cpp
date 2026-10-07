#include <iostream>

bool est_premier(int k) {
    if (k < 2) {
        return false;
    }
    for (int d = 2; d * d <= k; ++d) {
        if (k % d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0;
    if (!(std::cin >> n)) {
        std::cout << "PREMIERS 0\n";
        return 0;
    }

    int compte = 0;
    for (int i = 2; i <= n; ++i) {
        if (est_premier(i)) {
            std::cout << i << "\n";
            compte++;
        }
    }

    std::cout << "PREMIERS " << compte << "\n";

    return 0;
}