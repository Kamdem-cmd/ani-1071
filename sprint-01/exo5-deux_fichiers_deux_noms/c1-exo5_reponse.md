# Exercice 5

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    printf("VIlle: Yaounde\n");
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo5-deux_fichiers_deux_noms>clang++ -std=c++17 -Wall c1-exo5_main.cpp -o essai_un

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo5-deux_fichiers_deux_noms>essai_un.exe
VIlle: Yaounde

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo5-deux_fichiers_deux_noms>clang++ -std=c++17 -Wall c1-exo5_main.cpp -o essai_deux

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo5-deux_fichiers_deux_noms>essai_deux.exe
VIlle: Yaounde
```

## Conclusion

la compilation s'effectue sans soucis et comme nous pouvons l'appercevoir.

les executables `essai_un` et `essai_deux` ont exactement la même sortis; ce qui vient du fait qu'ils proviennent tout deux du même code source.

Nous pouvons desormais conclure que pour un même code source on peut en tiré autant de fichier executable que l'on souhaite de noms differents et qui s'executent selon les instructions du fichier source.