#include <stdio.h>

int main()
{
    int anni;
    printf("inserisci i tuoi anni\n");
    scanf("%d", &anni);
    if ( anni >= 18 )
    {  
        printf("sei maggiorenne\n");
    }
    else
    { 
        printf("sei minorenne\n");
    }
    return(0);
}