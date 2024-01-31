#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci il tuo anno di nascita per scoprire quanto è distante dall'allunaggio\n");
    scanf("%d", &anno);
    if (anno <= 1969)
    {
        printf("tu c'eri durante l'allunaggio, avevi %d anni\n", 1969 - anno);
    }
    else
    {
        printf("tu non c'eri durante l'allunaggio, sei nato %d anni dopo\n", anno - 1969);
    }
    return(0);
}