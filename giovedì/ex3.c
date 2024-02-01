#include <stdio.h>

int fattoriale(int z)
{
    int x=1;
    int y=1;
    while ( x<=z )
    {
        y= x*y;
        x=x+1;
    }
    return(y);
}

int main()
{
    int z;
    printf("inserisci un numero\n");
    scanf("%d", &z);
    printf("il fattoriale è %d\n", fattoriale(z));
    return (0);
}