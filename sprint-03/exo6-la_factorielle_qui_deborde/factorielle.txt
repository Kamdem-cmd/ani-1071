# Exercice 3

## BILAN DE L'EXERCICE

### ERREUR N°1
* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    printf("Nom: KAMDEM Kevin")
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo3-lire_trois_erreurs>clang++ -std=c++17 c1-exo3_main.cpp -o programme
c1-exo3_main.cpp:5:32: error: expected ';' after expression
    5 |     printf("Nom: KAMDEM Kevin")
      |                                ^
      |                                ;
1 error generated.
```

## Observation
le message d'erreur : 
```powershell
c1-exo3_main.cpp:5:32: error: expected ';' after expression
```

Le message signale la ligne 5 qui correspond exactement à la ligne de l'erreur.
Il s'agit d'une erreur de compilation c'est exactement à ce niveau que la chaîne de compilation à bloqué.

### ERREUR N°2
* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    Printf("Nom: KAMDEM Kevin")
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo3-lire_trois_erreurs>clang++ -std=c++17 c1-exo3_main.cpp -o programme
c1-exo3_main.cpp:5:5: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    5 |     Printf("Nom: KAMDEM Kevin")
      |     ^~~~~~
      |     printf
C:/msys64/ucrt64/include/stdio.h:350:5: note: 'printf' declared here
  350 | int printf (const char *__format, ...)
      |     ^
c1-exo3_main.cpp:5:32: error: expected ';' after expression
    5 |     Printf("Nom: KAMDEM Kevin")
      |                                ^
      |
```

## Observation
le message d'erreur : 
```powershell
error: use of undeclared identifier 'Printf'; did you mean 'printf'?
```

Le message signale la ligne 5 qui correspond exactement à la ligne de l'erreur.
Il s'agit d'une erreur de compilation c'est exactement à ce niveau que la chaîne de compilation à bloqué.

### ERREUR N°3
* **extrait du programme**
```cpp

int main()
{
    Printf("Nom: KAMDEM Kevin")
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo3-lire_trois_erreurs>clang++ -std=c++17 c1-exo3_main.cpp -o programme
c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'Printf'
    4 |     Printf("Nom: KAMDEM Kevin")
      |     ^~~~~~
c1-exo3_main.cpp:4:32: error: expected ';' after expression
    4 |     Printf("Nom: KAMDEM Kevin")
      |                                ^
      |                                ;
2 errors generated.
```

## Observation
le message d'erreur : 
```powershell
error: use of undeclared identifier 'Printf'; did you mean 'printf'?
```

Le message signale la ligne 5 qui correspond exactement à la ligne de l'erreur. Sans toute fois mentionné qu'il manque une inclusion.
Il s'agit d'une erreur de compilation c'est exactement à ce niveau que la chaîne de compilation à bloqué.

je m'attendais à une erreur signalé au preprocesseur