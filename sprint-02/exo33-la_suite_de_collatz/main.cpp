#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long etapes = 0;
    long long maximum = n;

    std::cout << n << "\n";

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }

        etapes++;
        if (n > maximum) {
            maximum = n;
        }

        std::cout << n << "\n";
    }

    std::cout << "ETAPES " << etapes << "\n";
    std::cout << "MAXIMUM " << maximum << "\n";

    return 0;
}