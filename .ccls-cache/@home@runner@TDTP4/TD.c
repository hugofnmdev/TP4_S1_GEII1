#include <stdio.h>
#include <stdlib.h>

int ex2td()
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

int ex4td()
{
    int i;

    for (i=1; i<=10; i++)
        {
            printf("%2d\n", i);
        }
    return 0;
}