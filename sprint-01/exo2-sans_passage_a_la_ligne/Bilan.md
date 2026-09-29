# Exercice 2

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    printf("Nom: KAMDEM Kevin");
    printf("VIlle: Yaounde");
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo2-sans_passage_a_la_ligne>clang++ -std=c++17 -Wall c1-exo2_main.cpp -o programme

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo2-sans_passage_a_la_ligne>programme.exe
Nom: KAMDEM KevinVIlle: Yaounde
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo2-sans_passage_a_la_ligne>
```

## Conclusion

la compilation s'effectue sans soucis et comme nous pouvons l'appercevoir les informations tiennent bien sur une ligne et sont collé à l'invite de commande cce qui est normal du fait du retrait du caractere de retour à la ligne `\n`.