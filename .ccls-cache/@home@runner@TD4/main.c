#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;

    do
        {
            printf("Tapez un nombre entier entre 1 et 10 :");
            scanf("%d", &choix);
        }
    while (!((choix >= 1) && (choix <= 10)));
    printf("La valeur choisie est :%d\n", choix);

    return 0;
}