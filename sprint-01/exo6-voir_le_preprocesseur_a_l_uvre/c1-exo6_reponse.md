# Exercice 6

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01>cd exo6-voir_le_preprocesseur_a_l_uvre

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo6-voir_le_preprocesseur_a_l_uvre>clang++ -E bonjour.cpp > sortie.txt
```
* **Analyse du fichier** `sortie.txt`

Le fichier `sortiet.txt` compte `1830` lignes comparé à mes `6` lignes, l'ecart est plus que visible.

Ceci est sans aucun doute due au fait que le preprocesseur copie l'ensemble de contenu de fichier inclus et le colle avant le programme ce qui permet d'inclure les fonctions qui seront appélées dans le reste de mon programme

## Conclusion

Comme nous pouvons le voir pour cette exercice j'utilise `clang++` pour ma compilation.