#include <stdio.h>

int main()
{
    int anno;

    printf("inserisci un anno per scoprire se è bisestile\n");
    scanf("%d",&anno);

    if ( anno%4 == 0 && anno%100 != 0 )
    {
        printf("l'anno è bisestile\n");
    }
    
    else
    {
        printf("l'anno non è bisestile\n");
    }
    
    return(0);
}