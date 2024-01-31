#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf("inserisci tre lati per scoprire di che tipo è il triangolo\n");
    scanf("%d", &lato1);
    scanf("%d", &lato2);
    scanf("%d", &lato3);

    if ( lato1 != lato2 && lato2 != lato3 && lato1 != lato3 )
    {
        printf("il triangolo è scaleno\n");
    }
    

    else if ( (lato1 == lato2 && lato3 != lato1) || (lato2 == lato3 && lato2 != lato3) || (lato1 == lato3 && lato1 != lato2) )
    {
        printf("il triangolo è isoscele\n");
    }
    

    else if ( lato1 == lato2 && lato2 == lato3 && lato1 == lato3 )
    {
        printf("il triangolo è equilatero\n");
    }
    
    return(0);
}