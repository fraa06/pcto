#include <stdio.h>

int main()
{
    int anni;
    int annipatente;
    printf("a quanti anni si può prendere la patente nel tuo stato?\n");
    scanf("%d", &annipatente);

    printf("inserisci i tuoi anni\n");
    scanf("%d", &anni);

    if ( anni >= annipatente )
    {
        printf("puoi prendere la patente\n");
    }
    else
    {
        printf("non puoi prendere la patente\n");
    }
    return(0);
}