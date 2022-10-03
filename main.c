#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Niveau 1

void ex1()
{
    int compteur = 5;
    do 
        {
            printf("%d\n", compteur);
            compteur ++;
        }
    while (compteur <= 20);
}

void ex2()
{
    int choix;
    int essais = 1;

    printf("Tapez un nombre entier entre 1 et 10 :");
    scanf("%d", &choix);
    
    do
        {
            if (!((choix >= 1) && (choix <= 10)))
            {
                printf("Pas bien, recommencer :");
                scanf("%d", &choix);
                essais ++;
            }
        }
    while (!((choix >= 1) && (choix <= 10)));
    printf("Bravo, vous avez effectué :%d", essais);
    printf(" essais.");
}

void ex4()
{
    int val1;
    int val2;
    
    printf("Entrer la valeur de départ :");
    scanf("%d", &val1);
    printf("Entrer la valeur de fin :");
    scanf("%d", &val2);
    
    for (int i = val1; i <= val2; i++)
    {
        printf("%d\n", i);
    }
}

void ex5()
{
    int choix = 1;
    int essais = 0;
    
    do
        {
            if ((choix <= 0) || (choix % 2 != 0))
            {
                printf("Tapez un nombre pair et positif :");
                scanf("%d", &choix);
                essais++;
            }
        }
    while ((choix <= 0) || (choix % 2 != 0));
    printf("Bravo, vous avez effectué :%d", essais);
    printf(" essais.");
}

void ex6()
{
    int choix;
    printf("Entrez une valeur de départ :");
    scanf("%d", &choix);
    printf("%d\n", choix);

    for (int i = 0; i < 4; i++)
        {
            choix = choix+3;
            printf("%d\n", choix);
        }
}

// Niveau 2

void cosinus()
{
    double PI = 3.14159;
    
    for (int deg = 0; deg <= 9; deg++)
        {
            double angleEnRadian = deg*10 * (PI/180);
            printf("cos(%d",deg*10);
            printf(")=%lf\n", cos(angleEnRadian));
        }
}

void table()
{
    int val1;
    int val2;

    printf("Donnez deux entiers :");
    scanf("%d", &val1);
    scanf("%d", &val2);

    for (int i = 0; i <= val2; i++)
        {
            printf("%d*", val1);
            printf("%d=", i);
            printf("%d\n", val1*i);
        }
}

int tirages()
{
    srand(time(NULL));
    int tirage;
    int choix;
    int essais;
    tirage = (rand()%20);

    printf("Tirage aléatoire de la valeur.\n");

    while(choix != tirage)
    {
        printf("Entrer une valeur entre 1 et 20 :");
        scanf("%d", &choix);
       if(choix < tirage)
       {
           printf("C'est plus grand !\n");
       }
        else if(choix > tirage)
       {
           printf("C'est plus petit !\n");
       }
        essais++;
    }

    printf("Gagné après : %d", essais);
    printf(" essais !");
    
}

int main()
{
    tirages();
}