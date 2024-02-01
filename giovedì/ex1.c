#include <stdio.h>

void pariDispari()
{
    int x;
    printf("inserisci un numero\n");
    scanf("%d", &x);
    if ( x%2 == 0 )
    {
        printf("il numero è pari\n");
    }
    else
    {
        printf("il numero è dispari\n");
    }
}


int main()
{
    pariDispari();
    return(0);
}