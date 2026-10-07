# Exercice 10

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>

int main()
{
    int r, n;

    printf("Le Rayon du cercle : ");
    scanf("%d", &r);
    for (int i = -r; i <= r; i++)
    {
        for (int j = -r; j <= r; j++)
        {
            if(i == 0 && j == 0){
                printf("< >");
            }else if(i*i + j*j <= r*r){
                printf("##");
            }else{
                printf("  ");
            }

        }
        putchar('\n'); 
    }
    
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo10-les_avertissements>clang++ -Wall -Wextra c1-exo10_main.cpp -o programme
c1-exo10_main.cpp:5:12: warning: unused variable 'n' [-Wunused-variable]
    5 |     int r, n;
      |            ^
1 warning generated.
```


## Bilan

Dans le message:
```powershell
warning: unused variable 'n' [-Wunused-variable]
```
* **Difference entre erreur et avertissement :** 