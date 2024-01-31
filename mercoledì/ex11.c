#include <stdio.h>

int perimetro(int lato1, int lato2, int lato3)
{
    int perimetro;

    perimetro = lato1 + lato2 + lato3;

    return(perimetro);
}

int main()
{
    int lato1;
    int lato2;
    int lato3;
    int p;
    int area;

    printf("inserisci le misure dei lati del triangolo\n");
    scanf("%d", &lato1);
    scanf("%d", &lato2);
    scanf("%d", &lato2);

    p = perimetro(lato1, lato2, lato3);
    printf("il perimetro del triangolo è: %d\n", p);
    


    return(0);
}