#include <cstdio>

int main()
{
    int r;

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