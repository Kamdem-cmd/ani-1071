#include <cstdio>
#include <cmath>

// Fonction de calcul de la nouvelle vitesse après un pas de temps dt
double accelerer(double v, double F, double k, double m, double dt) {
    return v + (F - k * v * v) / m * dt;
}

int main() {
    double m = 1200.0;
    double F = 4000.0;
    double k = 0.4;
    double dt = 0.1;

    // --- Phase 1 : Simulation avec moteur sur 60 secondes ---
    double v = 0.0;
    int totalSteps60 = static_cast<int>(60.0 / dt);

    printf("--- Simulation avec moteur (0 à 60 s) ---\n");
    for (int step = 1; step <= totalSteps60; ++step) {
        v = accelerer(v, F, k, m, dt);
        // Affichage chaque seconde (tous les 10 pas de 0.1s)
        if (step % 10 == 0) {
            double t = step * dt;
            printf("t = %2.0f s : %6.2f m/s (%6.2f km/h)\n", t, v, v * 3.6);
        }
    }

    // --- Phase 2 : Prolongation jusqu'à 180 s (une ligne toutes les 30 s) ---
    int totalSteps180 = static_cast<int>(180.0 / dt);
    for (int step = totalSteps60 + 1; step <= totalSteps180; ++step) {
        v = accelerer(v, F, k, m, dt);
        if (step % 300 == 0) { // Toutes les 30 secondes
            double t = step * dt;
            printf("t = %3.0f s : %6.2f m/s (%6.2f km/h)\n", t, v, v * 3.6);
        }
    }

    // Calcul de la vitesse limite théorique : F = k * v^2 => v = sqrt(F / k)
    double vLim = std::sqrt(F / k);
    printf("\nVitesse limite theorique : %.2f m/s (%.2f km/h)\n\n", vLim, vLim * 3.6);

    // --- Phase 3 : Sans moteur (F = 0 à t = 30 s) jusqu'à 600 s ---
    double v2 = 0.0;
    int totalSteps600 = static_cast<int>(600.0 / dt);

    printf("--- Simulation sans moteur à partir de t = 30 s (jusqu'à 600 s) ---\n");
    for (int step = 1; step <= totalSteps600; ++step) {
        double t = step * dt;
        double currentF = (t <= 30.0) ? F : 0.0;
        v2 = accelerer(v2, currentF, k, m, dt);
        if (step % 300 == 0) { // Une ligne toutes les 30 secondes
            printf("t = %3.0f s : %6.2f m/s (%6.2f km/h)\n", t, v2, v2 * 3.6);
        }
    }

    return 0;
}