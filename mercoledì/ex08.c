#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    int r = rand() % 101;

    printf("indovina il numero randomico\n");
    scanf("%d", &x);

    srand(time(NULL));
    printf("il numero random era: %d\n", rand() % 101);

    if ( x == r )
    {
        printf("CORRETTO! +1 punto");

    }
    else if ( x =! r)
    {
        printf("ERRATO");
    }
    
    return(0);
}