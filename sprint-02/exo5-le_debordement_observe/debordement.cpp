#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // 1. Type int (32 bits signé)
    int x_int = 1;
    for (int tour = 1; tour <= 35; ++tour) {
        x_int *= 2;
    }

    // 2. Type long long (64 bits signé)
    long long x_ll = 1;
    for (int tour = 1; tour <= 67; ++tour) {
        x_ll *= 2;
    }

    // 3. Type unsigned int (32 bits non signé)
    unsigned int x_uint = 1;
    for (int tour = 1; tour <= 35; ++tour) {
        x_uint *= 2;
    }

    // 4. Décalage de bits (x <<= 1)
    int x_shift = 1;
    for (int tour = 1; tour <= 35; ++tour) {
        x_shift <<= 1;
    }

    return 0;
}