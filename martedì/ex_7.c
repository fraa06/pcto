#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("inserisci le tre misure\n");
    scanf("%d", &lato1);
    scanf("%d", &lato2);
    scanf("%d", &lato3);
    if ( lato1+lato2>lato3 && lato2+lato3>lato1 && lato1+lato3>lato2)
    {
        printf("queste misure possono essere i lati di un triangolo\n");
    }
    else
    {
        printf("queste misure non possono essere i lati di un triangolo\n");
    }
    return(0);
}