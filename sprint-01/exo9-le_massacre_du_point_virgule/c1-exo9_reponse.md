# Exercice 9

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    printf("Nom: KAMDEM Kevin\n")
    printf("Ville: Yaounde\n")
    return 0
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo9-le_massacre_du_point_virgule>clang++ c1-exo9_main.cpp -o programme
c1-exo9_main.cpp:5:34: error: expected ';' after expression
    5 |     printf("Nom: KAMDEM Kevin\n")
      |                                  ^
      |                                  ;
c1-exo9_main.cpp:6:31: error: expected ';' after expression
    6 |     printf("Ville: Yaounde\n")
      |                               ^
      |                               ;
c1-exo9_main.cpp:7:13: error: expected ';' after return statement
    7 |     return 0
      |             ^
      |             ;
3 errors generated.
```
 **Constat :** Il y a exactement 3 messages d'erreurs. 

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    printf("Nom: KAMDEM Kevin\n");
    printf("Ville: Yaounde\n")
    return 0
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo9-le_massacre_du_point_virgule>clang++ c1-exo9_main.cpp -o programme
c1-exo9_main.cpp:6:31: error: expected ';' after expression
    6 |     printf("Ville: Yaounde\n")
      |                               ^
      |                               ;
c1-exo9_main.cpp:7:13: error: expected ';' after return statement
    7 |     return 0
      |             ^
      |             ;
2 errors generated.
```

## Bilan

 un seul message à disparue apres cette experience.