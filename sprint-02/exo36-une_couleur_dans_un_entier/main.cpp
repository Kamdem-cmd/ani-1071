#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    unsigned int couleur = 0;
    if (!(std::cin >> couleur)) {
        return 0;
    }

    // 1. Extraction des composantes (format 0xRRVVBBAA)
    unsigned int rouge = (couleur >> 24) & 0xFF;
    unsigned int vert  = (couleur >> 16) & 0xFF;
    unsigned int bleu  = (couleur >> 8)  & 0xFF;
    unsigned int alpha = couleur & 0xFF;

    // 2. Recomposition de la couleur originale
    unsigned int recomposee = (rouge << 24) | (vert << 16) | (bleu << 8) | alpha;

    // 3. Assombrissement (division par 2 de R, V, B, alpha inchangé)
    unsigned int rouge_sombre = rouge / 2;
    unsigned int vert_sombre  = vert / 2;
    unsigned int bleu_sombre  = bleu / 2;
    unsigned int alpha_sombre = alpha;

    unsigned int couleur_sombre = (rouge_sombre << 24) | (vert_sombre << 16) | (bleu_sombre << 8) | alpha_sombre;

    // 4. Affichages
    std::cout << rouge << "\n";
    std::cout << vert << "\n";
    std::cout << bleu << "\n";
    std::cout << alpha << "\n";
    std::cout << recomposee << "\n";

    std::cout << rouge_sombre << "\n";
    std::cout << vert_sombre << "\n";
    std::cout << bleu_sombre << "\n";
    std::cout << alpha_sombre << "\n";
    std::cout << couleur_sombre << "\n";

    return 0;
}