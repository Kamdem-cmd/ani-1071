#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 0, b = 0;
    while (std::cin >> a >> b) {
        int pgcd = 0;
        int count_sub = 0;
        int count_euc = 0;

        // Cas particulier : l'un des deux nombres est nul
        if (a == 0 || b == 0) {
            pgcd = (a == 0) ? b : a;
            count_sub = 0;
            count_euc = 0;
        } else {
            // 1. Méthode par soustractions
            int sub_a = a;
            int sub_b = b;
            while (sub_a != sub_b) {
                if (sub_a > sub_b) {
                    sub_a -= sub_b;
                } else {
                    sub_b -= sub_a;
                }
                count_sub++;
            }
            pgcd = sub_a;

            // 2. Méthode par Euclide (modulo)
            int euc_a = a;
            int euc_b = b;
            while (euc_b != 0) {
                int temp = euc_a % euc_b;
                euc_a = euc_b;
                euc_b = temp;
                count_euc++;
            }
        }

        std::cout << "PGCD " << pgcd << "\n";
        std::cout << "SOUSTRACTIONS " << count_sub << "\n";
        std::cout << "EUCLIDE " << count_euc << "\n";
    }

    return 0;
}