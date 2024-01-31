#include <stdio.h>

int main()
{
    int x;
    float y = 0;
    float z = 0;

    while ( x>=0 )
    {
        printf("inserisci un numero\n");
        scanf("%d", &x);
        y = y + x;
        z = z + 1;

        if ( x>=0 )
        {
            printf("la media è: %f\n", y/z);
        }
    }
    
    return(0);
}