# Exercice 8

## BILAN DE L'EXERCICE

* **extrait du programme**
```cpp
#include <cstdio>
int calculer();

int main()
{
    calculer();
    return 0;
}
```
* **Compilation et execution du programme**
```powershell
D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo8-l_erreur_qui_ne_vient_pas_du_compilateur>clang++ -c c1-exo8_main.cpp

D:\ENSPY\AN-GAP_4\teguis\ASSF-1071\ani-1071\sprint-01\exo8-l_erreur_qui_ne_vient_pas_du_compilateur>clang++ c1-exo8_main.cpp -o programme
C:/msys64/ucrt64/bin/ld: C:/Users/SMART/AppData/Local/Temp/c1-exo8_main-2c4bb0.o:c1-exo8_main.cpp:(.text+0x17): undefined reference to `calculer()''
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
```


## Conclusion

Dans le second cas, le message:
```powershell
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
```

traduit une erreur lors de l'edition de lien en effet cela est du au fait que la fonction `calculer()` est declaré et utilisé sans etre definit dans notre programme.

Cette commande contrairement à l'autre signale cette erreur parce que cette etape est plus avancée que la premire dans la compilation d'un fichier source en fichier executable.