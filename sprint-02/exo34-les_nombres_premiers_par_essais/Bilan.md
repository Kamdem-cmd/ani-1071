# Exercice 4

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    int n = 3;
    printf("le code de sorti vaut %d\n", n);
    return n;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo4-le_code_de_sortie>clang++ -std=c++17 -Wall c1-exo4_main.cpp -o programme

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo4-le_code_de_sortie>programme.exe
le code de sorti vaut 3 
```

## Conclusion

la compilation s'effectue sans soucis et comme nous pouvons l'appercevoir. Notre programme principale dependant de la fonction `main()` ici préfixé par `int` est dans ce cas obligé de retourné un entier, cet entier servira à dire si le programme se termine bien ou pas influencant l'execution d'un programme qui dependrait de la valeur de retour de celui-ci. 