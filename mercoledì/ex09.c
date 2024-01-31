#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("inserisci la coordinata x di un punto\n");
    scanf("%d", &x);
    printf("inserisci la coordinata y di un punto\n");
    scanf("%d", &y);

    if ( x > 0 && y > 0)
    {
        printf("il punto è nel primo quadrante\n");
    }
    else if ( x < 0 && y > 0 )
    {
        printf("il punto è nel secondo quadrante\n");
    }
    else if ( x < 0 && y < 0 )
    {
        printf("il punto è nel terzo quadrante\n");
    }
    else if ( x > 0 && y < 0 )
    {
        printf("il punto è nel quarto quadrante\n");
    }
    else if ( x = 0 )
    {
        printf("il punto è sull'asse delle y\n");
    }
    else if ( y = 0 )
    {
        printf("il punto è sull'asse delle x\n");
    }
    else if ( x == 0 && y == 0 )
    {
        printf("il punto è l'origine degli assi\n");
    }
    
    return(0);
}